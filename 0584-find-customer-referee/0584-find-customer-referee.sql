# Write your MySQL query statement below
select
   name
FROM
   Customer
WHERE
    ifnull(referee_id,0)!=2
