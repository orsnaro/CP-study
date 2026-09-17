-- https://leetcode.com/problems/primary-department-for-each-employee/?envType=study-plan-v2&envId=top-sql-50
select 
    employee_id,
    department_id
from 
    employee
where 
    employee_id not in (
        select  employee_id from employee where primary_flag = 'Y'
    )
    or  primary_flag = 'Y'