# What are conditional statements in C++? Explain the if-else and switch statements.

Conditional statements in programming are used to control the flow of a program based on certain conditions. These statements allow the execution of different code blocks depending on whether a specified condition evaluates to true or false, providing a fundamental mechanism for decision-making in algorithms.

![](https://media.geeksforgeeks.org/wp-content/uploads/20240208140623/Types-of-Conditional-Statements-in-Programming.png)

#####  Today we are going to learn If-else and Switch statements :

1. If-Else Conditional Statement:
The if-else statement extends the if statement by adding an else clause. If the condition is false, the program executes the code in the else block.

**Syntax of If-Else Conditional Statement:**
```
if (condition) {
    // code to execute if condition is true
} else {
    // code to execute if condition is false
}
```
if condition is true, the if code block executes. If false, the execution moves to the else block.

### `Example`
```cpp
int x = -10;
    if (x > 0)
    {
        cout << "x is positive";
    }
    else
    {
        cout << "x is not positive";
    }
```
2. Switch Conditional Statement:
The switch statement is used when you need to check a variable against a series of values. It’s often used as a more readable alternative to a long if-else if chain.
In switch expressions, each block is terminated by a break keyword. The statements in switch are expressed with cases.

**Switch Conditional Statement Syntax:**
```
switch (variable) {
    case value1:
        // code to execute if variable equals value1
        break;
    case value2:
        // code to execute if variable equals value2
        break;
    default:
        // code to execute if variable doesn't match any value
}
```
### `Example`
```cpp
int x = 2;
switch (x)
{
    case 1:
        cout << "x is one";
        break;
    case 2:
        cout << "x is two";
        break;
    default:
        cout << "x is neither one nor two";
}
```