-- https://leetcode.com/problems/consecutive-numbers/?envType=study-plan-v2&envId=top-sql-50

with CTE1 as (
    select
        id,
        num,
        LAG(num, 1) over() as prev_num,
        LAG(num, 2) over() as prev_prev_num
    from 
        Logs
)
select distinct
    num as ConsecutiveNums
from 
    CTE1
where 
    num = prev_num and num = prev_prev_num