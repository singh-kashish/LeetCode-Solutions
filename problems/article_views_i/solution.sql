# Write your MySQL query statement below
SELECT DISTINCT author_id as id from Views
WHERE author_id=viewer_id
Order by author_id asc;