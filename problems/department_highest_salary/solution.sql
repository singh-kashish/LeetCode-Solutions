# Write your MySQL query statement below
SELECT d.name as Department,
e.name as Employee,
e.salary as Salary
FROM Department d
JOIN (SELECT departmentId, MAX(salary) AS max_salary from Employee
GROUP BY departmentId) m ON m.departmentId = d.id
JOIN Employee e 
ON e.departmentID = m.departmentId
AND e.salary = m.max_salary
ORDER BY d.name, e.name;