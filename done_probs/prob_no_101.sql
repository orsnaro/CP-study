--problem: https://leetcode.com/problems/customer-who-visited-but-did-not-make-any-transactions/?envType=study-plan-v2&envId=top-sql-50
-- the visit id that does not exist in transactions we will get the corresponding user id for.
-- then count how many times this same customer id did a visit with no transaction (visit_id that is in visits but not in transactions) (my sol uses JOIN other 2 can use sub query via NOT IN , NOT EXISTS)

select v.customer_id, Count(v.visit_id) as count_no_trans
left join Transactions as t on v.visit_id = t.visit_id --where keyword can replace this line *IF* it was inner join  then and it with any other where statementsa
where t.transaction_id is null
group by v.customer_id
 