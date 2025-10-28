SELECT u.user_id as buyer_id, u.join_date as join_date, count(o.order_id) as orders_in_2019 from Users u 
LEFT JOIN Orders o ON u.user_id = o.buyer_id 
AND o.order_date>='2019-01-01'
AND o.order_date<='2019-12-31'
GROUP BY u.user_id, u.join_date;  