# What is a function in C++? Explain the concept of function declaration, definition, and calling. 

A function is a set of statements that takes input, does some specific computation, and produces output. The idea is to put some commonly or repeatedly done tasks together to make a function so that instead of writing the same code again and again for different inputs, we can call this function.
In simple terms, a function is a block of code that runs only when it is called.

## Function Declaration

A function declaration tells the compiler about the number of parameters, data types of parameters, and returns type of function. Writing parameter names in the function declaration is optional but it is necessary to put them in the definition. 
#### `Syntax of declaration:`
![](https://media.geeksforgeeks.org/wp-content/uploads/20220719131329/syntaxofFunction-660x214.png)

## Function Defination

a function Defination means code of funcation that will run when function call.

## Function call

a function call means where the compiler start running code inside function and after running all code of funciton compiler return back to that postion where function called.


```cpp
#include <iostream>
using namespace std;
//THIS IS FUNCTION DECLARATION
int max(int x, int y);

// main function that doesn't receive any parameter and
// returns integer
int main()
{
    int a = 10, b = 20;

    // Calling function to find max of 'a' and 'b'
    int m = max(a, b);

    cout << "m is " << m;
    return 0;
}
//THIS IS FUNCTION DEFINATION
// Following function that takes two parameters 'x' and 'y'
// as input and returns max of two input numbers
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
```