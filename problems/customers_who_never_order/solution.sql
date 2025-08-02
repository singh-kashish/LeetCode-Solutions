# Write your MySQL query statement below
select name as Customers from Customers c
Left Join Orders o ON c.id = o.customerId
WHERE o.id IS NULL;
