# Java Interface: AdvancedArithmetic

## Problem Overview
A Java interface can only contain method signatures and fields. The interface can be used to achieve polymorphism. In this problem, we will practice our knowledge of interfaces.

You are given an interface `AdvancedArithmetic` which contains a method signature `int divisor_sum(int n)`. You need to write a class called `MyCalculator` that implements the interface.

The `divisorSum` function takes an integer as input and returns the sum of all its divisors. For example, divisors of 6 are 1, 2, 3, and 6, so the `divisor_sum` function should return 12. The value of `n` will be at most 1000.

## Problem Constraints
- The interface `AdvancedArithmetic` contains the method signature `int divisor_sum(int n)`.
- You need to write the class `MyCalculator` that implements this interface.

## Input
- An integer `n`.

## Output
- The sum of the divisors of `n`.
- A message "I implemented: AdvancedArithmetic" indicating that the interface has been implemented.

## Explanation
- Divisors of 6 are 1, 2, 3, and 6. The sum of these divisors is 1 + 2 + 3 + 6 = 12.

## Solution

```java
import java.util.*;

interface AdvancedArithmetic {
    int divisor_sum(int n);
}

// Write your code here
class MyCalculator implements AdvancedArithmetic {
    public int divisor_sum(int n) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }
        return sum;
    }
}

class Solution {
    public static void main(String[] args) {
        MyCalculator my_calculator = new MyCalculator();
        System.out.print("I implemented: ");
        ImplementedInterfaceNames(my_calculator);
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        System.out.print(my_calculator.divisor_sum(n) + "\n");
        sc.close();
    }

    /*
     *  ImplementedInterfaceNames method takes an object and prints the name of the interfaces it implemented
     */
    static void ImplementedInterfaceNames(Object o) {
        Class[] theInterfaces = o.getClass().getInterfaces();
        for (int i = 0; i < theInterfaces.length; i++) {
            String interfaceName = theInterfaces[i].getName();
            System.out.println(interfaceName);
        }
    }
}
