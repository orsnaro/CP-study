-- https://leetcode.com/problems/product-sales-analysis-iii/?envType=study-plan-v2&envId=top-sql-50


-- Write your PostgreSQL query statement below

-- this is tricky: answer allows multiple sale_ids per year (but answer table wants  sale_id raw to be hidden!) ! not the total quantities of whole first year (so problem is all about to get the first year rows for each product not reducing and summing all sales of first yearr or real agreagation actually needed (you might need agreagation and group by in order to reach the answer but not actually summing or reducing any thing! just filtering first year rows and remove all else years and format output table to match the needed output table)) 

WITH
    cte AS (
        SELECT 
            MIN(year) as first_year,
            product_id
        FROM 
            Sales 
        GROUP BY
            product_id
    )
SELECT 
    s.product_id,
    cte.first_year,
    s.quantity,
    s.price
FROM
    Sales s
INNER JOIN cte
    ON  s.product_id = cte.product_id
    AND s.year = cte.first_year


        

