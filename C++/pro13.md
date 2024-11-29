#  Explain the difference between implicit and explicit type conversion in C++.

Type casting is a concept in programming where you change the data type of a variable from one type to another. It's like changing a piece of clay from one shape to another.

There are two types of type casting: 
1. implicit :
* Implicit type conversion happens automatically when converting data types.
2. explicit :
* Explicit type conversion requires a manual instruction from the programmer to convert a value from one type to another.

```cpp
    int n1 = 42;
    float n2 = 20.36;

    std::cout << " : this is Explicit type cast :\n";
    std::cout << (int)n2 << endl;
    std::cout << (float)n1 << endl;

    std::cout << " : this is Implcit type cast :\n";
    int c = 'C';
    std::cout << c << endl;

    char num = 97;
    std::cout << num << endl;

```