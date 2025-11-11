# Write your MySQL query statement below
SELECT e.name as name, b.bonus as bonus from Employee AS e LEFT join Bonus AS b ON e.empId = b.empId
where COALESCE(b.bonus,-1)<1000; 
-- SELECT e.name, b.bonus
-- FROM Employee AS e
-- LEFT JOIN Bonus AS b
--   ON e.empId = b.empId
-- WHERE COALESCE(b.bonus, -1) < 1000;