# Write your MySQL query statement below
Select * FROM Cinema WHERE id%2!=0 AND description!='boring' ORDER BY rating desc;