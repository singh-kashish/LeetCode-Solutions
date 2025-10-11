# Write your MySQL query statement below
SELECT p.firstName, p.lastName, a.city, a.state from Person p
LEFT JOIN Address a on a.personId = p.personId;