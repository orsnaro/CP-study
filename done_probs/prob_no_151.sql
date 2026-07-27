-- https://leetcode.com/problems/monthly-transactions-i/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
-- count of transactions for each month, country
-- total ammount for each month, country
-- count of `approved` transactions  for each month country
-- total amount of `approved` transactions for each month,country

SELECT DISTINCT 
    TO_CHAR(DATE_TRUNC('month', t.trans_date), 'YYYY-MM') AS month,
    -- CONCAT_WS('-',TO_CHAR(t.trans_date, 'YYYY'), LPAD(EXTRACT(month from t.trans_date)::TEXT, 2, '0') ) AS month, -- another way using EXTRACT()
    t.country,
    COUNT(t.id) AS trans_count,
    COUNT(CASE WHEN t.state = 'approved' THEN 1 ELSE NULL END) AS approved_count,
    SUM(t.amount) AS trans_total_amount,
    SUM(CASE WHEN t.state = 'approved' THEN t.amount ELSE 0 END) AS approved_total_amount
FROM 
    Transactions t
GROUP BY
    month, t.country; -- if colm is too big or dont have alias reference it by its order in the select e.g. -> GROUP BY 1 (the first colm)
