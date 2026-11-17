--https://leetcode.com/problems/employees-whose-manager-left-the-company/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
select 
    employee_id
from 
    employees
where 
    manager_id not in (select employee_id from employees)  -- or cte
    and manager_id is not null 
    and salary < 30000
order by 
    employee_id