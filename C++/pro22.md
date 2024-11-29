# How are break and continue statements used in loops? Provide examples. 

![](https://media.geeksforgeeks.org/wp-content/uploads/20240424110221/Break-vs-Continue-Statement-in-Programming.webp)

### 1. Break Statement:
A break statement is used when we want to terminate the running loop whenever any particular condition occurs. Whenever a break statement occurs loop breaks and stops executing.

### `Example:` 
If we have a variable curr=0 and in a while loop we are incrementing it by one each time and printing it. Now we want to stop whenever we get curr=5. So we can write a break statement when we get curr=5.

```cpp
 int curr = 0;
      // Loop till curr < 10
    while (curr < 10)
    {
        cout << curr << endl;
        curr++;
          // If curr = 5, break out of the loop
        if (curr == 5)
        {
            break;
        }
    }
```

### 2. Continue Statement:
On the other side continue statement is used when we have to skip a particular iteration. Whenever we write continue statement the whole code after that statement is skipped and loop will go for next iteration.
### `Example:` 
We have to print numbers form 1 to 5 but skip 3 . So we can use a for loop which will print the number and when i=3 we will continue.
```cpp
// Loop till i <= 5
    for (int i = 0; i <= 5; ++i)
    {
        // If i = 3, then continue to the next iteration
        if (i == 3)
        {
            continue;
        }
        cout << i << endl;
    }
```