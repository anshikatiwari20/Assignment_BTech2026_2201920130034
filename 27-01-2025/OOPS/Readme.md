# Problem - Java Inheritance II

## Overview
This problem demonstrates inheritance in Java by implementing a class structure where one class inherits the methods of another. The task is to define:
1. A class named `Arithmetic` with a method `add(int a, int b)` that returns the sum of two integers.
2. A class named `Adder` that inherits from the `Arithmetic` class.
3. The `Adder` class should have access to the `add` method from its superclass without redefining it.

### Expected Output:
The program should output:
1. The name of the superclass of `Adder` (i.e., `Arithmetic`).
2. The results of three calls to the `add` method.

Sample Output:
My superclass is: Arithmetic 42 13 20

## Coding Platform Used
HackerRank

## Language Used
The solution is implemented in **Java**.

## Approach and Solution Explanation

### Approach:
1. **Define the `Arithmetic` Class**:
   - Create a method `add(int a, int b)` that takes two integers as input and returns their sum.
2. **Define the `Adder` Class**:
   - Extend the `Arithmetic` class using the `extends` keyword to inherit the `add` method.
   - No additional implementation is needed in the `Adder` class as it inherits the functionality of the `Arithmetic` class.
3. **Print the Superclass Name**:
   - Use `getClass().getSuperclass().getName()` on an `Adder` object to get the name of its superclass.
4. **Test the `add` Method**:
   - Call the `add` method multiple times with different parameters and print the results.

### Solution Explanation:
Below is the implementation of the solution:

```java
// Arithmetic class with an add method
class Arithmetic {
    int add(int a, int b) {
        return a + b;
    }
}

// Adder class that inherits from Arithmetic
class Adder extends Arithmetic {
    // Inherits the add method
}

// Main class
public class Solution {
    public static void main(String[] args) {
        // Create a new Adder object
        Adder a = new Adder();
        
        // Print the name of the superclass on a new line
        System.out.println("My superclass is: " + a.getClass().getSuperclass().getName());
        
        // Print the result of 3 calls to Adder's `add(int, int)` method as space-separated integers
        System.out.print(a.add(10, 32) + " " + a.add(10, 3) + " " + a.add(10, 10) + "\n");
    }
}
