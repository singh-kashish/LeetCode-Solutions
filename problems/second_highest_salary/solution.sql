# Write your MySQL query statement below
Select (
    SELECT DISTINCT salary from Employee
    ORDER BY salary DESC
    LIMIT 1 OFFSET 1
) AS SecondHighestSalary;