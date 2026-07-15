-- porblem: https://leetcode.com/problems/project-employees-i/?envType=study-plan-v2&envId=top-sql-50
-- Write your PostgreSQL query statement below
SELECT 
    p.project_id,
    ROUND(AVG(experience_years), 2) AS average_years
FROM 
    Project p
LEFT JOIN 
    Employee e 
USING 
    (employee_id)
GROUP BY    
    p.project_id;