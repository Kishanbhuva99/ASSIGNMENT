# Explain nested control structures with an example.
**Nested Control Structures :**

- A nested control structure in C++ is when a control statement is placed inside another control statement. For example, a loop can be placed inside another loop, or an if-else statement can be placed inside another if-else statement

**Types of Nested Control Structures:**

- Nested if statements: An if statement inside another if statement.
- Nested loops: A loop inside another loop (e.g., a for loop inside another for loop).
- Nested if-else statements: An if or else inside another if or else.

### `Example`
```cpp
 for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }        
        cout << endl;
    }
```