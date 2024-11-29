# What is the difference between for, while, and do-while loops in C++? 

1. **For Loop :**
The for loop is used when you know in advance how many times you want to execute the block of code.
It iterates over a sequence (e.g., a list, tuple, string, or range) and executes the block of code for each item in the sequence.
The loop variable (variable) takes the value of each item in the sequence during each iteration.

**For Loop Syntax:**
```
for (initialization; condition; increment/decrement)
{
    // Code to be executed repeatedly
}
```
### `Example`
```cpp
for (int i = 0; i < 5; i++)
{
    cout << i << "\n";
}
    return 0;
```

2. **While Loop :**
mportant to make sure that the condition eventually becomes false; otherwise, the loop will run indefinitely, resulting in an infinite loop.

**While Loop Syntax:**
```
while (condition)
{
    # Code to be executed while the condition is true
}
```
### `Example`
```cpp
int count = 0;
    while (count < 5)
    {
        cout << count << "\n";
        count += 1;
    }
    cout << endl;
    return 0;
```

3. **Do-While Loop :**
The do-while loop is similar to the while loop, but with one key difference: it guarantees that the block of code will execute at least once before checking the condition.
This makes it useful when you want to ensure that a certain task is performed before evaluating a condition for continuation.
The loop continues to execute as long as the specified condition is true after the first execution. It's crucial to ensure that the condition eventually becomes false to prevent the loop from running indefinitely, leading to an infinite loop.

**Syntax of do…while Loop:**
```
do {
 
    // body of do-while loop    
    
} while (condition);
```
### `Examples:`
```cpp
int count = 5;
    do
    {
        count += 1;
    } while (count < 5);
    cout << "Final value of count = " << count;
    return 0;
```

|Feature	|for Loop	|while Loop	|do-while Loop|
|----|---|----|---|
|Syntax|for loop (initialization; condition; increment/decrement) {}|while (condition) { }|do { } while (condition);
|Initialization|Declared within the loop structure and executed once at the beginning.|Declared outside the loop; should be done explicitly before the loop.|Declared outside the loop structure|
|Condition|	Checked before each iteration.|Checked before each iteration.|Checked after each iteration.
|Update|Executed after each iteration.	|Executed inside the loop; needs to be handled explicitly.	|Executed inside the loop; needs to be handled explicitly.
|Use Cases|	Suitable for a known number of iterations or when looping over ranges.|Useful when the number of iterations is not known in advance or based on a condition.	|Useful when the loop block must be executed at least once, regardless of the initial condition.
|Initialization and Update Scope|	Limited to the loop body.|Scope extends beyond the loop; needs to be handled explicitly.|Scope extends beyond the loop; needs to be handled explicitly.|





