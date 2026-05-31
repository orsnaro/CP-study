-- problem: https://leetcode.com/problems/employee-bonus/?envType=study-plan-v2&envId=

SELECT e.name, b.bonus
FROM Employee AS e LEFT JOIN Bonus AS b ON e.empId = b.empId
WHERE b.empId IS NULL OR b.bonus < 1000
