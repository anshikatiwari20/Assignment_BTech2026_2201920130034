# Problem: Querying the Average Population

## Problem Statement
Write a SQL query to **find the average population** of all cities in the `CITY` table, rounded **down** to the nearest integer.

## Approach

1. **Calculate the Average Population**  
   - Use the `AVG(POPULATION)` function to compute the **average** of all city populations.

2. **Round Down the Result**  
   - Use the `ROUND()` function to **round** the computed average to the **nearest integer**.
   - By default, `ROUND()` rounds to the nearest whole number.

3. **Retrieve the Result**  
   - Since `AVG()` returns a **single value**, the query will output a **single numerical result**.

---

## SQL Query
```sql
SELECT ROUND(AVG(POPULATION)) 
FROM CITY;
