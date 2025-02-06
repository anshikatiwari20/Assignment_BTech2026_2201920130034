## Problem: Types of Triangle

### Problem Statement
You are given a table named `TRIANGLES` with three columns representing the side lengths of a triangle: `A`, `B`, and `C`. Your task is to classify each triangle based on its side lengths into one of the following categories:

- **Equilateral**: All three sides are equal.
- **Isosceles**: Two sides are equal.
- **Scalene**: All three sides are different.
- **Not A Triangle**: The given sides do not satisfy the triangle inequality theorem, i.e., the sum of any two sides must be greater than the third side.

### Solution Approach
We use a SQL `CASE` statement to classify each record in the `TRIANGLES` table based on the given conditions:

1. **Not A Triangle**: If the sum of any two sides is not greater than the third side.
2. **Equilateral**: If all three sides are equal.
3. **Isosceles**: If any two sides are equal.
4. **Scalene**: If all three sides are different.

### SQL Query Implementation
```sql
SELECT CASE
    WHEN A + B <= C OR A + C <= B OR B + C <= A THEN 'Not A Triangle'
    WHEN A = B AND B = C THEN 'Equilateral'
    WHEN A = B OR B = C OR A = C THEN 'Isosceles'
    ELSE 'Scalene'
END 
FROM TRIANGLES;
```
