# Revising Aggregations - Averages

## Problem Statement
Write a SQL query to **find the average population** of all cities in the `CITY` table **where the District is 'California'**.

## Approach

1. **Filtering the Data**:  
   - The query filters out cities that belong to the district `'California'` using the `WHERE` clause.

2. **Calculating the Average**:  
   - The `AVG()` aggregate function is used to compute the average of the `POPULATION` column from the filtered results.

3. **Retrieving the Result**:  
   - Since `AVG()` returns a single value, the output will be a single numerical value representing the **average population** of cities in California.

## Query
```sql
SELECT AVG(POPULATION) 
FROM CITY
WHERE DISTRICT = 'California';
