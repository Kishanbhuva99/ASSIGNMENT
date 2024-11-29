# Explain the purpose and use of constants and literals in C++. 

* **Constants :**
Constants are used to define values that remain fixed and cannot be changed during the execution of a program.<n>
</n>
In C++, they are typically declared using the const keyword. When you declare a constant, you specify its data type and give it a name.<n>
</n>
Constants are often used to make code more readable, and self-documenting, and to prevent accidental changes to important values.<n>
</n>
You can define constants of various data types, including integers, floating-point numbers, characters, and more.
Constants are evaluated at compile-time, and their values are replaced directly in the code.<n>
</n>
### `Example`
```cpp
const int maxCount = 100;
const double pi = 3.14159;
const char newline = '\n';
```

* **Literals :**
Literals are the actual values that are directly written into your code to represent specific data. They are used to provide initial values for variables, as operands in expressions, or as direct values in statements.

  C++ supports different types of literals:

  1) Integer Literals: 
  These represent whole numbers, and they can be written in decimal, octal, or hexadecimal formats.

  2) Floating-Point Literals: 
  These represent real numbers and can be written in decimal or exponential notation.

  3) Character Literals: 
  These represent single characters and are enclosed in single quotes.

  4) String Literals: 
  These represent sequences of characters and are enclosed in double quotes.

  5) Boolean Literals: 
  C++ has two boolean literals, true and false, which represent the Boolean values.

### `Example`

```cpp
int decimal = 42;   // Decimal integer literal
int octal = 052;    // Octal integer literal (0 prefix)
int hex = 0x2A;     // Hexadecimal integer literal (0x prefix)
double decimalNum = 3.14159;  // Decimal floating-point literal
double exponentNum = 6.02e23;  // Exponential floating-point literal
char ch = 'A';       // Character literal 'A'
char newline = '\n';  // Character literal for newline
const char* greeting = "Hello, World!"; // String literal
bool isTrue = true;
bool isFalse = false;
```