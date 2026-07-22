-- problem: https://leetcode.com/problems/queries-quality-and-percentage/submissions/2077353173/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
-- we can do it using Window funcs and without!

SELECT 
    q.query_name,
    ROUND(SUM(q.rating::numeric / q.position) / COUNT(q.query_name), 2) AS quality,
    ROUND(AVG(CASE WHEN q.rating < 3 THEN 1 ELSE 0 END) * 100, 2) AS poor_query_percentage
FROM
    Queries q
GROUP BY 
    q.query_name;
