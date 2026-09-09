-- https://leetcode.com/problems/the-number-of-employees-which-report-to-each-employee/?envType=study-plan-v2&envId=top-sql-50


-- Write your PostgreSQL query statement below
select 
    m.employee_id ,
    m.name,
    count(e.employee_id) as reports_count,
    round(avg(e.age), 0) as average_age
from 
    Employees e
inner join
    Employees m on m.employee_id = e.reports_to
group by 
    m.employee_id, m.name
order by 
    m.employee_id