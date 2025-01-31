# SQL Query: Sum of Populations for Japanese Cities

## Problem Statement
You are provided with a table named `CITY`, which contains information about cities, including their population and the country they belong to. You are asked to write an SQL query to find the sum of the populations of all cities in Japan. The `COUNTRYCODE` for Japan is `'JPN'`.

### Task:
Write a query to find the total population for all cities in Japan.

## Approach

1. **Use the `SUM()` Function**: The `SUM()` function is used to calculate the total sum of a numeric column. In this case, we need to sum the `POPULATION` column for all cities in Japan.

2. **Filter by `COUNTRYCODE`**: Use the `WHERE` clause to filter only the cities where the `COUNTRYCODE` is `'JPN'`.

3. **Write the Query**: The query needs to sum the `POPULATION` for all rows where `COUNTRYCODE` is `'JPN'` and return the result.

### SQL Query:

```sql
SELECT SUM(POPULATION)
FROM CITY
WHERE COUNTRYCODE = 'JPN';
