-- https://leetcode.com/problems/user-activity-for-the-past-30-days-i/?envType=study-plan-v2&envId=top-sql-50

SELECT
    a.activity_date AS day,
    COUNT(DISTINCT a.user_id) AS active_users
FROM
    Activity a
WHERE 
    a.activity_date <= '2019-07-27' AND a.activity_date >= '2019-06-28'
GROUP BY 
    a.activity_date
