# Problem: Population Density Difference 

## Problem Statement  
Query the difference between the maximum and minimum populations in the `CITY` table.  

## SQL Query  

```sql
SELECT MAX(POPULATION) - MIN(POPULATION)
FROM CITY;
```

## Explanation  
- `MAX(POPULATION)`: Retrieves the highest population value from the `CITY` table.  
- `MIN(POPULATION)`: Retrieves the lowest population value from the `CITY` table.  
- Subtracting `MIN(POPULATION)` from `MAX(POPULATION)` gives the difference between the largest and smallest population values.  

## Key Takeaways  
- The `MAX()` function returns the highest value in a column.  
- The `MIN()` function returns the lowest value in a column.  
- Subtracting these two values provides the population difference.  
- The query efficiently computes the required result in **O(n)** time complexity.  
