SELECT SUM(CITY.POPULATION)
FROM COUNTRY
INNER JOIN CITY
ON COUNTRY.Code=CITY.CountryCode
WHERE COUNTRY.CONTINENT='ASIA';