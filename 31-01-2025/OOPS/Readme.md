# Java Method Overriding with `super` Keyword

## Problem Statement
In Java, method overriding occurs when a subclass provides its own implementation of a method that is already defined in the superclass. Sometimes, you may want to call the method of the superclass, even though it is overridden in the subclass. This can be done using the `super` keyword.

### Task:
You are given a partially completed code in the editor. Your task is to modify the code such that it prints the following text:

### Code Outline:
You are provided with two classes: `BiCycle` and `MotorCycle`. The `MotorCycle` class extends the `BiCycle` class and overrides the `define_me` method. You need to ensure that the `MotorCycle` constructor prints the correct output by using the `super` keyword to call the superclass method.

## Approach

1. **Superclass (`BiCycle`)**: 
   - Define a method `define_me()` that returns the string `"a vehicle with pedals."`.
   
2. **Subclass (`MotorCycle`)**:
   - Override the `define_me()` method to return the string `"a cycle with an engine."`.
   - Inside the constructor of `MotorCycle`, print the message `"Hello I am a motorcycle, I am "` followed by the result of the `define_me()` method of the `MotorCycle` class.
   - Use the `super` keyword to call the `define_me()` method from the superclass `BiCycle`, and store the result in a variable.
   - Print the message `"My ancestor is a cycle who is "` followed by the result of the `super.define_me()` method.

3. **Main Method (`Solution` class)**:
   - Instantiate an object of the `MotorCycle` class to execute the constructor and print the desired output.

## Modified Code

```java
import java.util.*; 
import java.io.*;

class BiCycle{
    String define_me(){
        return "a vehicle with pedals.";
    }
}

class MotorCycle extends BiCycle{
    String define_me(){
        return "a cycle with an engine.";
    }
    
    MotorCycle(){
        System.out.println("Hello I am a motorcycle, I am " + define_me());
        
        String temp = super.define_me(); // Calls the method from the superclass
        
        System.out.println("My ancestor is a cycle who is " + temp );
    }
}

class Solution{
    public static void main(String []args){
        MotorCycle M = new MotorCycle();
    }
}
