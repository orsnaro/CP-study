--problem: https://leetcode.com/problems/average-time-of-process-per-machine/?envType=study-plan-v2&envId=top-sql-50

SELECT 
    machine_id,
    ROUND(
        SUM(CASE WHEN activity_type = 'end' THEN timestamp ELSE -timestamp END)::numeric
        / COUNT(DISTINCT process_id),
        3
    ) AS processing_time
FROM Activity
GROUP BY machine_id;