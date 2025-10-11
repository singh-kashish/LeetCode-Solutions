SELECT e.name, b.bonus
FROM Employee AS e
LEFT JOIN Bonus AS b
  ON e.empId = b.empId
WHERE COALESCE(b.bonus, -1) < 1000;
