-- problem: https://leetcode.com/problems/managers-with-at-least-5-direct-reports/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
WITH count_reporters_sub_query AS (
    SELECT managerId, COUNT(id) AS direct_reporters_count
    FROM Employee
    WHERE managerId IS NOT NULL
    GROUP BY managerId
)
SELECT e.name
From Employee as e 
INNER JOIN count_reporters_sub_query as subQ ON e.id = subQ.managerId
WHERE subQ.direct_reporters_count >= 5
