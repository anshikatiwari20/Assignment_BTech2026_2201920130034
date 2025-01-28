# Problem: Revising Aggregations - The Sum Function

## Problem Statement
Query the total population of all cities in the `CITY` table where the `District` is `California`.

### Input Format
The `CITY` table is described as follows:

| Field      | Type          |
|------------|---------------|
| ID         | INTEGER       |
| Name       | VARCHAR(100)  |
| CountryCode| VARCHAR(3)    |
| District   | VARCHAR(100)  |
| Population | INTEGER       |

## Approach

To solve the problem of querying the total population of cities in the `CITY` table where the `District` is `California`, follow these steps:

1. **Understand the Table Structure**:  
   Familiarize yourself with the `CITY` table's schema, which contains the following columns:  
   - `ID`: Unique identifier for each city.  
   - `Name`: Name of the city.  
   - `CountryCode`: Code of the country to which the city belongs.  
   - `District`: The district where the city is located.  
   - `Population`: The population of the city.

2. **Filter the Data**:  
   Use the `WHERE` clause to filter the rows where the `District` column is equal to `'California'`. This ensures that only cities in the district of California are considered.

3. **Aggregate the Population**:  
   Use the `SUM` function to calculate the total population of the filtered rows. The `SUM` function adds up all the values in the `Population` column for the selected rows.

4. **Write the SQL Query**:  
   Combine the filtering and aggregation into a single SQL query:
   ```sql
   SELECT SUM(POPULATION) 
   FROM CITY 
   WHERE DISTRICT = 'California';
