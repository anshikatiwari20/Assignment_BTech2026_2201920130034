# Problem: Weather Observation Station 2

## Problem Statement
Query the following two values from the `STATION` table:

1. The sum of all values in `LAT_N` rounded to a scale of 2 decimal places.
2. The sum of all values in `LONG_W` rounded to a scale of 2 decimal places.

## Solution Approach
To retrieve the required values, we use the `SUM` function to calculate the total of `LAT_N` and `LONG_W`. The `ROUND` function is applied to ensure the values are rounded to two decimal places.

### SQL Query
```sql
SELECT ROUND(SUM(LAT_N), 2), ROUND(SUM(LONG_W), 2)
FROM STATION;
```

### Explanation
- `SUM(LAT_N)`: Computes the total sum of all latitude values.
- `SUM(LONG_W)`: Computes the total sum of all longitude values.
- `ROUND(value, 2)`: Rounds the result to 2 decimal places.
- `FROM STATION`: Specifies the table from which the data is fetched.

This query ensures accurate results by summing up all values and rounding them to two decimal places for better readability and precision.
