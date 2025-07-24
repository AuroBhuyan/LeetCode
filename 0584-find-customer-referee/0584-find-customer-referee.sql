# Write your MySQL query statement below
SELECT C.name
FROM Customer as C
WHERE C.referee_id!=2 OR C.referee_id is null;