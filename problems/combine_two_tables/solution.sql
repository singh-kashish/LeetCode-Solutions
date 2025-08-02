# Write your MySQL query statement below
SELECT firstName,lastName, A.city, A.state FROM Person
LEFT JOIN Address AS A 
ON Person.personId=A.personId; 