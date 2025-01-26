# Problem - Weather Observation Station 11

## Overview
This problem requires you to query the `CITY` names from the `STATION` table where the city names either do not start with vowels or do not end with vowels. Additionally, the result should not contain any duplicate city names.

### Problem Breakdown:
- **Input**: A table `STATION` with a column `CITY`.
- **Condition**: The cities should either:
  - **Not start with vowels** (A, E, I, O, U)
  - **Not end with vowels** (a, e, i, o, u)
- **Output**: A list of distinct city names that meet the condition.

## Coding Platform Used
HackerRank

## Language Used
The solution is implemented in **SQL**.

## Approach and Solution Explanation

### Approach:
1. **Distinct Results**: We need to ensure that the results contain distinct city names, so we use the `DISTINCT` keyword in the `SELECT` statement.
2. **Conditions**:
   - To exclude cities that start with vowels, we use the `NOT LIKE` operator combined with a pattern (`'A%'`, `'E%'`, `'I%'`, `'O%'`, `'U%'`).
   - To exclude cities that end with vowels, we apply a similar condition with the pattern (`'%a'`, `'%e'`, `'%i'`, `'%o'`, `'%u'`).
3. **Logical Operators**: We combine these two conditions using the `OR` operator inside the `WHERE` clause, which means either condition can be true for a city to be included.
4. **Final Query**: The query filters cities that do not start with vowels or do not end with vowels and ensures that the result does not contain duplicates.

### Solution Explanation:
The query selects city names from the `STATION` table while filtering out cities that either start or end with vowels. By using the `NOT LIKE` operator with the specified patterns for vowels, and ensuring distinct results with `SELECT DISTINCT`, we meet the requirements of the problem.

```sql
SELECT DISTINCT CITY
FROM STATION
WHERE NOT(CITY LIKE 'A%' OR CITY LIKE 'E%' OR CITY LIKE 'I%' OR CITY LIKE 'O%' OR CITY LIKE 'U%')
OR NOT(CITY LIKE '%a' OR CITY LIKE '%e' OR CITY LIKE '%i' OR CITY LIKE '%o' OR CITY LIKE '%u');
