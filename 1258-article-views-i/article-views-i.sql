# Write your MySQL query statement below
Select distinct author_id as id from views
WHERE author_id = viewer_id
order by author_id;