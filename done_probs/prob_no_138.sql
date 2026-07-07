-- problem: https://leetcode.com/problems/confirmation-rate/?envType=study-plan-v2&envId=top-sql-50

-- sol2: no cte or sub query also avg() returns decimal by default no need for 1.0 * val for implicit type cast
SELECT s.user_id, ROUND(AVG(CASE WHEN c.action = 'confirmed' THEN 1 ELSE 0 END), 2) AS confirmation_rate
FROM Signups AS s
LEFT JOIN Confirmations AS c ON s.user_id = c.user_id
GROUP BY s.user_id