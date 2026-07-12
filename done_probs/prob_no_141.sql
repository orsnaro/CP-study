-- problem: https://leetcode.com/problems/not-boring-movies/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
SELECT 
    * 
FROM 
    Cinema AS c
WHERE 
    c.id % 2 <> 0 AND c.description NOT LIKE 'boring'
ORDER BY c.rating DESC;
