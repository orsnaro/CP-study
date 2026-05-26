-- problem: https://leetcode.com/problems/rising-temperature/?envType=study-plan-v2&envId=top-sql-50
-- more readable using new CTE than sub query
WITH w AS (
    SELECT id, temperature, LAG(temperature, 1)
    OVER (ORDER BY recordDate) AS prev_temperature,
    recordDate, LAG(recordDate, 1) OVER (ORDER BY recordDate) AS prev_RecordDate 
    FROM Weather
)
select w.id
FROM w
WHERE w.temperature > prev_temperature AND w.recordDate - prev_recordDate = 1

-- SELECT w.id 
-- FROM(
--     SELECT id, temperature, LAG(temperature, 1)
--     OVER (ORDER BY recordDate) AS prev_temperature,
--     recordDate, LAG(recordDate, 1) OVER (ORDER BY recordDate) AS prev_RecordDate 
--     FROM Weather
-- ) as w
-- WHERE w.temperature > prev_temperature AND w.recordDate - prev_recordDate = 1
