# What are the different data types available in C++? Explain with examples. 

### C++ supports the following data types:

1. Primary or Built-in or Fundamental data type
2. Derived data types
3. User-defined data types

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/20191113115600/DatatypesInC.png)

### DATE TYPES:-
##### 1. Primitive Data Types: 
These data types are built-in or predefined data types and can be used directly by the user to declare variables. example: int, char, float, bool, etc.

```cpp
int myNumber = 10;
char myChar = 'A';
bool isTrue = true;
float myFloat = 3.14f;
double myDouble = 3.141592653589793;
```

##### 2. Derived Data Types: 
Derived data types that are derived from the primitive or built-in datatypes are referred to as Derived Data Types.

```cpp
//this is array
int arr[5] = {1, 2, 3, 4, 5};

//this is pointer
int x = 10;
int *ptr = &x;

// this is function
int add(int a, int b) {
    return a + b;
}
```

##### 3. Abstract or User-Defined Data Types: 
Abstract or User-Defined data types are defined by the user itself. Like, defining a class in C++ or a structure.

```cpp
//this is structure
struct Person {
    string name;
    int age;
};

//this is class
class Car {
public:
    string brand;
    string model;
    int year;

    void displayInfo() {
        cout << brand << " " << model << " " << year << endl;
    }
};

//this is union
union Data {
    int intValue;
    float floatValue;
    char charValue;
};
```

