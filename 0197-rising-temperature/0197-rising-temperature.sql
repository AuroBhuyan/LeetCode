# Write your MySQL query statement below
SELECT W1.id
FROM Weather as W1
JOIN Weather as W2
WHERE DATEDIFF(W1.recordDate, W2.recordDate) = 1
AND W1.temperature>W2.temperature;