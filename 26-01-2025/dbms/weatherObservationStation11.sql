SELECT DISTINCT CITY
FROM STATION 
WHERE NOT(CITY like 'A%' OR CITY like 'E%' OR CITY LIKE 'I%' OR CITY like 'O%' OR CITY LIKE 'U%') OR NOT(CITY like '%a' OR CITY like '%e' OR CITY LIKE '%i' OR CITY like '%o' OR CITY LIKE '%u');