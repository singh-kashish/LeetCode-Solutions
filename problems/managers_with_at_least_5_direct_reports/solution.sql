# Write your MySQL query statement below
SELECT m.name from Employee e
inner JOIN Employee m 
ON e.managerId = m.id
group by m.id,m.name
having COUNT(*)>=5;