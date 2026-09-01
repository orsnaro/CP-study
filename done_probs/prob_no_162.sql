--https://leetcode.com/problems/biggest-single-number/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
with cnt as (
select 
    num,
    count(num) as count
from
    mynumbers
group by 
    num
order by 
    count asc, num desc
limit 
    1
)


select 
   case when cnt.count = 1 then cnt.num else NULL end as num
from
    cnt
