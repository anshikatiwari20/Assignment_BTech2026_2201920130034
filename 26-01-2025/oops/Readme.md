# OOPS - **Problem Name**: Java Inheritance 1 

## Overview
This problem demonstrates the use of inheritance in Java. We have a base class `Animal` with a `walk()` method, and we extend this class with a `Bird` class that adds the functionality of `fly()`. The task is to modify the `Bird` class by adding a `sing()` method, so that a `Bird` object can walk, fly, and sing.

### Problem Breakdown:
- **Animal Class**: Contains a method `walk()` that prints "I am walking".
- **Bird Class**: Extends the `Animal` class and adds a new method `fly()` that prints "I am flying". The task is to add another method `sing()` that prints "I am singing".
- **Expected Output**: When creating a `Bird` object, the code should output:
  - "I am walking"
  - "I am flying"
  - "I am singing"

## Coding Platform Used
 **Hackerrank** 

## Language Used
The solution is implemented in **Java**.

## Approach and Solution Explanation

### Approach:
1. **Inheritance**: We first define the `Animal` class with the method `walk()`. Then, we create the `Bird` class which extends `Animal` to inherit its `walk()` method.
2. **Adding the `sing()` Method**: To make the `Bird` class more specific, we add a `sing()` method that will print "I am singing".
3. **Method Invocation**: In the `main()` method, we create an object of the `Bird` class and call all three methods: `walk()`, `fly()`, and `sing()`.

### Solution Explanation:
1. The `Animal` class defines a simple method `walk()` that prints "I am walking".
2. The `Bird` class extends `Animal`, allowing the `Bird` object to access the `walk()` method from `Animal` and add its own method `fly()`.
3. The task was to add another method, `sing()`, to the `Bird` class, which prints "I am singing".
4. In the `main()` method, we create a `Bird` object and call all three methods (`walk()`, `fly()`, and `sing()`) to produce the required output.

```java
// Animal class
class Animal {
    void walk() {
        System.out.println("I am walking");
    }
}

// Bird class extending Animal class
class Bird extends Animal {
    void fly() {
        System.out.println("I am flying");
    }
    
    // New sing method
    void sing() {
        System.out.println("I am singing");
    }
}

// Main class
public class Solution {
    public static void main(String[] args) {
        Bird bird = new Bird();
        bird.walk();  // Inherited from Animal class
        bird.fly();   // Defined in Bird class
        bird.sing();  // Newly added sing method in Bird class
    }
}
