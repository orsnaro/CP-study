-- problem: https://leetcode.com/problems/find-customer-referee/?envType=study-plan-v2&envId=top-sql-50
select name
from Customer as c
where c.referee_id != 2 or c.referee_id is null