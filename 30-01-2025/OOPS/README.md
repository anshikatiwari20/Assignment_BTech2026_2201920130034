# Java Method Overriding

## Problem Statement

When a subclass inherits from a superclass, it also inherits its methods; however, it can override the superclass methods (as well as declare and implement new ones).

Consider the following `Sports` class:

```java
class Sports {
    String getName() {
        return "Generic Sports";
    }

    void getNumberOfTeamMembers() {
        System.out.println("Each team has n players in " + getName());
    }
}
```
# Approach

Inheritance:
The Soccer class inherits from the Sports class.
It inherits the getName method but will override it to return a class-specific value.

Overriding Methods:
getName: In the Soccer class, we override the getName method to return "Soccer Class" instead of "Generic Sports".
getNumberOfTeamMembers: In the Soccer class, we override this method to print the correct statement for the number of players in a Soccer team (i.e., 11 players).

Method Execution:
The main method creates objects of both the Sports and Soccer classes.
It calls the getName and getNumberOfTeamMembers methods on each object and displays the appropriate results.
