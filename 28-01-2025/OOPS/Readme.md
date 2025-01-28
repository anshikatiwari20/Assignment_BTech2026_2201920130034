# Problem: Java Abstract Class

## Problem Statement
You are tasked with creating a subclass that extends an abstract class. The abstract class `Book` has:
- A `String` variable `title`.
- A method `getTitle()` that returns the title.
- An abstract method `setTitle(String s)` that must be implemented in the subclass.

Your task is to implement a subclass `MyBook` that defines the `setTitle` method to set the book's title.  
The program should then allow the user to input the title of a book, store it, and display it.

## Approach

### Steps to Solve:
1. **Understand Abstract Classes**:  
   Abstract classes serve as a blueprint for other classes. They cannot be instantiated and often contain abstract methods that must be implemented in subclasses.

2. **Define the Abstract Class**:  
   Create an abstract class `Book` with the following:
   - A `String` variable `title`.
   - An abstract method `setTitle(String s)`.
   - A concrete method `getTitle()` that returns the value of `title`.

3. **Create the Subclass**:  
   Implement a subclass `MyBook` that:
   - Extends the `Book` abstract class.
   - Implements the abstract `setTitle(String s)` method to set the `title`.

4. **Input and Output**:  
   - Use `Scanner` to read the title from the user.
   - Create an object of `MyBook` and use `setTitle` to assign the title.
   - Use `getTitle()` to print the title.

## Code

```java
import java.util.*;

// Abstract class
abstract class Book {
    String title;

    // Abstract method
    abstract void setTitle(String s);

    // Concrete method
    String getTitle() {
        return title;
    }
}

// Subclass that implements the abstract method
class MyBook extends Book {
    void setTitle(String s) {
        title = s;
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the title of the book
        String title = sc.nextLine();

        // Create an instance of MyBook and set the title
        MyBook new_novel = new MyBook();
        new_novel.setTitle(title);

        // Output the title
        System.out.println("The title is: " + new_novel.getTitle());
        
        sc.close();
    }
}
