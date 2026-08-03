-- https://leetcode.com/problems/game-play-analysis-iv/submissions/2093207716/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below

WITH cte AS(
    SELECT
        ROW_NUMBER() OVER(PARTITION BY a.player_id ORDER BY a.event_date) AS rn,
        a.player_id,
        CASE WHEN LEAD(a.event_date) OVER(PARTITION BY a.player_id ORDER BY a.event_date) - a.event_date  = 1 THEN 1 ELSE 0 END AS found
    FROM
        Activity a
)
SELECT
    ROUND(COUNT(CASE WHEN cte.found = 1 THEN cte.player_id END)::numeric / COUNT(DISTINCT cte.player_id), 2) AS fraction
FROM 
    cte
WHERE 
    cte.rn = 1