#  What are the different types of operators in C++? Provide examples of each. 

An operator is a symbol that operates on a value to perform specific mathematical or logical computations. They form the foundation of any programming language. In C++, we have built-in operators to provide the required functionality.

An operator operates the operands.

### Operators in C++ can be classified into 6 types:

* Arithmetic Operators
* Relational Operators
* Logical Operators
* Bitwise Operators
* Assignment Operators
* Ternary or Conditional Operators

![](https://media.geeksforgeeks.org/wp-content/uploads/20220527101351/OperatorsinCPP.png)

1. Arithmetic Operators
These operators are used to perform arithmetic or mathematical operations on the operands. For example, ‘+’ is used for addition, ‘-‘ is used for subtraction ‘*’ is used for multiplication, etc. 

Arithmetic Operators can be classified into 2 Types:

A) Unary Operators: 
    These operators operate or work with a single operand. For example: Increment(++) and Decrement(–) Operators.

B) Binary Operators: 
These operators operate or work with two operands. For example: Addition(+), Subtraction(-), etc.

2. Relational Operators
These operators are used for the comparison of the values of two operands. For example, ‘>’ checks if one operand is greater than the other operand or not, etc. The result returns a Boolean value, i.e., true or false.
<n>
</n>
3. Logical Operators
These operators are used to combine two or more conditions or constraints or to complement the evaluation of the original condition in consideration. The result returns a Boolean value, i.e., true or false.
<n>
</n>
4. Bitwise Operators
These operators are used to perform bit-level operations on the operands. The operators are first converted to bit-level and then the calculation is performed on the operands. Mathematical operations such as addition, subtraction, multiplication, etc. can be performed at the bit level for faster processing. 
<n>
</n>
5. Assignment Operators
These operators are used to assign value to a variable. The left side operand of the assignment operator is a variable and the right side operand of the assignment operator is a value. The value on the right side must be of the same data type as the variable on the left side otherwise the compiler will raise an error.
<n>
</n>

6. Ternary or Conditional Operators
The ternary operator ? determines the answer on the basis of the evaluation of Expression1. If it is true, then Expression2 gets evaluated and is used as the answer for the expression. If Expression1 is false, then Expression3 gets evaluated and is used as the answer for the expression.
This operator takes three operands, therefore it is known as a Ternary Operator. 

### `Example`
```cpp
    //ASSIGNMENT Operator
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    //Increment / Decrement Operator or Unary Opretors
    //a++;
    cout << "\nIncrement / Decrement Operators / Unary Opretors:" << endl;
    cout << "a + + = " << ++a << endl;
    cout << "b - - = " << --b << endl;

    //Ternary Operator
    cout << "\nTernary Operators:" << endl;
    a > b ? cout <<"A is GT\n" : cout << "A is LT\n";

    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y: " << (x && y) << endl;
    cout << "x || y: " << (x || y) << endl;

    // Bitwise Operators
    int c = 6, d = 4; // 6 = 0110, 4 = 0100 in binary
    cout << "\nBitwise Operators:" << endl;
    cout << "c & d: " << (c & d) << endl; // Bitwise AND
    cout << "c | d: " << (c | d) << endl; // Bitwise OR
    cout << "c ^ d: " << (c ^ d) << endl; // Bitwise XOR
    cout << "~c: " << (~c) << endl;       // Bitwise NOT
    cout << "c << 1: " << (c << 1) << endl; // Left shift
    cout << "c >> 1: " << (c >> 1) << endl; // Right shift

    return 0;
```