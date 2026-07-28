-- https://leetcode.com/problems/immediate-food-delivery-ii/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
-- percentage of immediate orders in the first orders of all customers, rounded to 2 decimal places.
WITH cte AS(
    SELECT DISTINCT ON(d.customer_id)
       d.order_date,
       d.customer_pref_delivery_date
    FROM
        Delivery d
    ORDER BY
        d.customer_id,
        d.order_date ASC
)
SELECT
    ROUND(AVG(CASE WHEN cte.order_date = cte.customer_pref_delivery_date THEN 1.00 ELSE 0.00 END) * 100.00, 2) AS immediate_percentage 
FROM
    cte;
 