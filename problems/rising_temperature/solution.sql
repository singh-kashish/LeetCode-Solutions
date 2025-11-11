SELECT w1.id from Weather w1
join Weather w2 
on DATE_SUB(w1.recordDate, INTERVAL 1 day) = w2.recordDate where w2.temperature<w1.temperature;