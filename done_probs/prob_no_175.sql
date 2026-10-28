-- https://leetcode.com/problems/product-price-at-a-given-date/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
-- thoughts: get max date for each product that is before or equal to '2019-08-16' (now we have latest price) if no max date or any date entry found at all for this product_id put 10 instead in  new price 
-- now just print !
with cte as (
    select 
        product_id,
        max(case when change_date <= '2019-08-16' then change_date else null end) as last_edit_date
    from 
        products
    group by 
        product_id
)
select distinct
    cte.product_id,
    case when cte.last_edit_date is null then 10 else p.new_price end as price
from 
    cte
left join
    products p on  p.product_id = cte.product_id
where 
    p.change_date = cte.last_edit_date or cte.last_edit_date is null


    