--problem: https://leetcode.com/problems/article-views-i/submissions/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
select distinct author_id as id
from Views as v
where v.viewer_id = v.author_id
order by id asc

-- or use group by but its slower (anyway most modern db almost optimize it out!)!
-- select  author_id as id
-- from Views as v
-- where v.viewer_id = v.author_id
-- group by id
-- order by id asc
