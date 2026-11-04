-- https://leetcode.com/problems/last-person-to-fit-in-the-bus/?envType=study-plan-v2&envId=top-sql-50
-- Write your PostgreSQL query statement below
with cte as (
    select 
        turn,
        person_name,
        weight,
        sum(weight) over(order by turn) as sum
    from 
        Queue
)

select
    person_name
from
    cte
where 
    sum <= 1000
order by
    turn DESC
limit 
    1
