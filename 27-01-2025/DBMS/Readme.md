# Problem - Revising Aggregations: The Count Function

## Overview
This problem focuses on using the **COUNT()** function in SQL to calculate the number of rows that meet a specific condition. The task is to query a count of the number of cities in the `CITY` table where the population is larger than 100,000.

### Problem Breakdown:
- **Input**: A table `CITY` with at least the following columns:
  - `CITY` (name of the city)
  - `POPULATION` (population of the city)
- **Condition**: The population of the city should be greater than 100,000.
- **Output**: A single number representing the count of cities meeting the condition.

## Coding Platform Used
HackerRank

## Language Used
The solution is written in **SQL**.

## Approach and Solution Explanation

### Approach:
1. **COUNT Function**: 
   - The `COUNT(*)` function is used to count the number of rows in the table that meet the specified condition.
   - It includes all rows, regardless of null values, when used with `*`.
2. **Filter Condition**:
   - The `WHERE` clause is used to filter cities with a population greater than 100,000 (`POPULATION > 100000`).
3. **Final Query**: Combines the `COUNT(*)` function and the `WHERE` clause to return the count of such cities.

### Solution Explanation:
The query calculates the total number of rows in the `CITY` table where the `POPULATION` column has values greater than 100,000. This is achieved by filtering with the `WHERE` clause and counting the rows that satisfy this condition.

```sql
SELECT COUNT(*) 
FROM CITY 
WHERE POPULATION > 100000;
