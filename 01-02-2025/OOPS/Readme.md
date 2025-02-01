# Java `instanceof` Keyword Problem  

## Problem Statement  
In this problem, we have three predefined classes:  

```java
class Student {}
class Rockstar {}
class Hacker {}
```

In the `main` method, an `ArrayList` is populated with instances of these classes based on user input. The `count` method is responsible for determining how many instances of each class are present in the list.  

The program prints three integers representing the counts of `Student`, `Rockstar`, and `Hacker` instances, respectively.  

However, some lines of code are missing, and you need to fix them by **modifying only a few lines** without adding or removing extra lines.

## Approach  

1. **Read Input:**  
   - First, take an integer input `t`, which represents the number of elements.  
   - Next, take `t` strings as input, where each string corresponds to a class name (`Student`, `Rockstar`, or `Hacker`).  

2. **Populate the `ArrayList` with Instances:**  
   - Use `if` conditions to check the string value and add the corresponding object (`new Student()`, `new Rockstar()`, `new Hacker()`) to the list.  

3. **Count Instances Using `instanceof`:**  
   - Iterate over the list and use the `instanceof` operator to check if an object belongs to `Student`, `Rockstar`, or `Hacker` class.  
   - Maintain three counters (`a`, `b`, `c`) to store the count of each type.  

4. **Output the Counts:**  
   - Convert the counts into a formatted string and print the result.  

## Sample Input  

```plaintext
5
Student
Student
Rockstar
Student
Hacker
```

## Sample Output  

```plaintext
3 1 1
```

## Java Code  

```java
import java.util.*;

class Student {}
class Rockstar {}
class Hacker {}

public class InstanceOFTutorial {

    static String count(ArrayList<Object> mylist) {
        int a = 0, b = 0, c = 0;
        for (Object element : mylist) {
            if (element instanceof Student) a++;
            if (element instanceof Rockstar) b++;
            if (element instanceof Hacker) c++;
        }
        return a + " " + b + " " + c;
    }

    public static void main(String[] args) {
        ArrayList<Object> mylist = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for (int i = 0; i < t; i++) {
            String s = sc.next();
            if (s.equals("Student")) mylist.add(new Student());
            if (s.equals("Rockstar")) mylist.add(new Rockstar());
            if (s.equals("Hacker")) mylist.add(new Hacker());
        }
        System.out.println(count(mylist));
    }
}
```

## Constraints  
- The number of test cases `t` is within a reasonable limit.  
- The input strings are guaranteed to be either `"Student"`, `"Rockstar"`, or `"Hacker"`.  

## Key Takeaways  
- The `instanceof` operator helps in identifying an object's type at runtime.  
- Using an `ArrayList<Object>` allows storing different object types.  
- String comparison with `.equals()` ensures correct object instantiation.  
