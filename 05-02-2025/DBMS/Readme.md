# Problem: African Cities

## Problem Statement
Given two tables, `CITY` and `COUNTRY`, write a query to find the names of all cities located in Africa.
You need to return the names of cities where the continent is 'Africa'. The relationship between the `CITY` and `COUNTRY` tables is that `CITY.CountryCode` matches `COUNTRY.Code`.

## Solution Approach

To solve this problem, the following approach is taken:
1. **Join the Tables**: We use an inner join between the `CITY` and `COUNTRY` tables on the condition that `CITY.CountryCode` matches `COUNTRY.Code`. This ensures that we are only looking at cities that correspond to actual countries.
2. **Filter by Continent**: We filter the results by the `Continent` column in the `COUNTRY` table to ensure we only get cities that are located in 'Africa'.
3. **Select City Names**: We select the `NAME` column from the `CITY` table to get the names of the cities that meet the above criteria.

### SQL Query

```sql
SELECT CITY.NAME
FROM CITY, COUNTRY
WHERE CONTINENT = 'Africa' AND CITY.CountryCode = COUNTRY.Code;
