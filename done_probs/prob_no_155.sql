-- https://leetcode.com/problems/number-of-unique-subjects-taught-by-each-teacher/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
select
    t.teacher_id,
    count(distinct t.subject_id) as cnt
from 
    Teacher t
group by 
    t.teacher_id

