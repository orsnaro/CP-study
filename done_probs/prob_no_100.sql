--problem: https://leetcode.com/problems/product-sales-analysis-i/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
-- les be lifties
select p.product_name, s.year, s.price 
from Sales as s left join Product as p on p.product_id = s.product_id
