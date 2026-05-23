-- problem: https://leetcode.com/problems/replace-employee-id-with-the-unique-identifier/?envType=study-plan-v2&envId=top-sql-50


-- Write your PostgreSQL query statement below
select uni.unique_id, e.name
from EmployeeUNI as uni right join Employees as e 
on uni.id = e.id