-- https://leetcode.com/problems/classes-with-at-least-5-students/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
select distinct
    c.class
from 
    Courses c
group by
    c.class
having
    count(c.student) >= 5    
