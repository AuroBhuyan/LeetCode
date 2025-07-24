# Write your MySQL query statement below
SELECT T.tweet_id
FROM Tweets as T
WHERE CHAR_LENGTH(T.content)>15;