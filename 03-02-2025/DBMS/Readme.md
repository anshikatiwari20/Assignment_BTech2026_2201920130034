## Problem: Population Census

### Problem Statement
You are given two tables, `CITY` and `COUNTRY`. The goal is to find the total population of all cities that belong to countries located in the continent of **Asia**.

- `CITY` table contains:
  - `ID`: Unique identifier for a city
  - `NAME`: Name of the city
  - `COUNTRYCODE`: Foreign key linking to the `COUNTRY` table
  - `POPULATION`: Population of the city

- `COUNTRY` table contains:
  - `CODE`: Unique country code (Primary Key)
  - `NAME`: Name of the country
  - `CONTINENT`: The continent where the country is located

The matching key between these tables is **CITY.CountryCode** and **COUNTRY.Code**.

### Solution Approach
1. Use an `INNER JOIN` to combine the `CITY` and `COUNTRY` tables based on the matching `CountryCode` and `Code` columns.
2. Apply a `WHERE` clause to filter only the records where `COUNTRY.CONTINENT = 'Asia'`.
3. Use `SUM(CITY.POPULATION)` to calculate the total population of the selected cities.

### SQL Query Implementation
```sql
SELECT SUM(CITY.POPULATION)
FROM COUNTRY
INNER JOIN CITY
ON COUNTRY.Code = CITY.CountryCode
WHERE COUNTRY.CONTINENT = 'Asia';
```
