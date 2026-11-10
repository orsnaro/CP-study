-- https://leetcode.com/problems/count-salary-categories/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
-- Write your PostgreSQL query statement below
with cte as (
    select
        case
            when income < 20000 then 'Low Salary'
            when income between 20000 and 50000 then 'Average Salary'
            when income > 50000 then 'High Salary'
        end as category,
        case when true then 1 else 0  end as original 
    from
        Accounts

    union all

    select distinct
        case
            when count(case when income < 20000 then 1 end) = 0 then 'Low Salary'
            when count(case when income between 20000 and 50000 then 1 end) = 0 then 'Average Salary'
            when count(case when income > 50000 then 1 end) = 0 then 'High Salary'
        end as category,
        case when false then 1 else 0  end as original 
    from
        Accounts
)


select 
    cte.category ,
    count(case when cte.original = 1 then 1 else null end) as accounts_count  -- or sum then 1 else 0 
from 
    cte
group by
    cte.category 
having 
    cte.category is not null