-- problem: https://leetcode.com/problems/invalid-tweets/?envType=study-plan-v2&envId=top-sql-50

-- Write your PostgreSQL query statement below
select tweet_id
from Tweets as t
where length(t.content) > 15
