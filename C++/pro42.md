## What are classes and objects in C++? Provide an example. 

### - Class :

 A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.

For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.

- A Class is a user-defined data type that has data members and member functions.
- Data members are the data variables and member functions are the functions used to manipulate these variables together, these data members and member functions define the properties and behaviour of the objects in a Class.
- In the above example of class Car, the data member will be speed limit, mileage, etc, and member functions can be applying brakes, increasing speed, etc.
But we cannot use the class as it is. We first have to create an object of the class to use its features. An Object is an instance of a Class.

**Defining Class in C++**

A class is defined in C++ using the keyword class followed by the name of the class. The following is the syntax:
```cpp
class ClassName {
     access_specifier:
     // Body of the class
};
```
Here, the access specifier defines the level of access to the class’s data members.

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Classes-and-Objects-in-C.png)

### -Object :

When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.

Syntax to Create an Object
We can create an object of the given class in the same way we declare the variables of any other inbuilt data type.
```cpp
ClassName ObjectName;
```

### `Example`
```cpp
#include <iostream>
#include <string>

using namespace std;

// Define a class named 'Person'
class Person {
public:
    // Data members
    string name;
    int age;

    // Member function to introduce the person
    void introduce()
    {
        cout << "Hi, my name is " << name << " and I am "
             << age << " years old." << endl;
    }
};

int main()
{
    // Create an object of the Person class
    Person person1;

    // accessing data members
    person1.name = "Alice";
    person1.age = 30;

    // Call the introduce member method
    person1.introduce();

    return 0;
}
```

