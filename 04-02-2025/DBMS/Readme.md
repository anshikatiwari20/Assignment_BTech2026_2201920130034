## Problem: Average Population of Each Continent

### Problem Statement
Given the CITY and COUNTRY tables, query the names of all the continents (COUNTRY.Continent) and their respective average city populations (CITY.Population) rounded down to the nearest integer.

**Note:** CITY.CountryCode and COUNTRY.Code are matching key columns.

### Solution Approach
1. **Understand the Relationships:** The CITY table contains city populations and a CountryCode, which corresponds to the Code column in the COUNTRY table. The COUNTRY table provides the Continent for each country.
2. **Join Tables:** Use an `INNER JOIN` between CITY and COUNTRY on `CITY.CountryCode = COUNTRY.Code` to combine relevant data.
3. **Calculate Average Population:** Use `AVG(CITY.Population)` to determine the average population for each continent.
4. **Round Down the Result:** Apply the `FLOOR` function to round down the average population to the nearest integer.
5. **Group By Continent:** Use `GROUP BY COUNTRY.Continent` to aggregate data by continent.

### SQL Query
```sql
SELECT COUNTRY.Continent, FLOOR(AVG(CITY.Population))
FROM CITY
INNER JOIN COUNTRY ON CITY.CountryCode = COUNTRY.Code
GROUP BY COUNTRY.Continent;
