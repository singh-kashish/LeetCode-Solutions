SELECT a.sell_date, COUNT(DISTINCT a.product) as num_sold,
GROUP_CONCAT(DISTINCT a.product ORDER BY a.product SEPARATOR ',') AS products
FROM Activities a
GROUP BY sell_date
ORDER BY sell_date;