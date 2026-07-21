-- problem: https://leetcode.com/problems/percentage-of-users-attended-a-contest/?envType=study-plan-v2&envId=top-sql-50
-- Write your PostgreSQL query statement below
-- participation_percentage = (contestants_count/total_users) * 100
SELECT
    r.contest_id,
    ROUND((COUNT(r.user_id)::numeric / (SELECT COUNT(user_id) FROM Users)) * 100.00, 2)  AS percentage
FROM
    Users u
RIGHT JOIN
    Register r
USING
    (user_id)
GROUP BY 
    r.contest_id
ORDER BY 
   percentage DESC, r.contest_id ASC
