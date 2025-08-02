# Write your MySQL query statement below
SELECT sp.name from SalesPerson sp
WHERE NOT EXISTS(
    SELECT * from Orders o
    JOIN Company c
    ON c.com_id=o.com_id
    where o.sales_id = sp.sales_id AND c.name="RED"
)