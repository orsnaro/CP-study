-- problem: https://leetcode.com/problems/students-and-examinations/?envType=study-plan-v2&envId=top-sql-50
-- Write your MySQL query statement below
SELECT s.student_id, s.student_name, j.subject_name, COUNT(e.subject_name) AS attended_exams
FROM Students AS s
CROSS JOIN Subjects AS j --ON s.student_id = e.student_id
LEFT JOIN Examinations AS e ON s.student_id = e.student_id AND j.subject_name = e.subject_name
GROUP BY s.student_id, s.student_name, j.subject_name
ORDER BY s.student_id, j.subject_name