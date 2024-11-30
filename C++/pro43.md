## What is inheritance in C++?

The capability of a class to derive properties and characteristics from another class is called Inheritance. Inheritance is one of the most important features of Object Oriented Programming in C++. 

**Syntax of Inheritance in C++**
```
class  derived_class_name : access-specifier  base_class_name
{
       //    body ....
};
```
where,

- class: keyword to create a new class
- derived_class_name: name of the new class, which will inherit the base class
- access-specifier: Specifies the access mode which can be either of private, public or protected. If neither is specified, private is taken as default.
- base-class-name: name of the base class.

**Types Of Inheritance in C++**

The inheritance can be classified on the basis of the relationship between the derived class and the base class. In C++, we have 5 types of inheritances:

1) Single inheritance
2) Multilevel inheritance
3) Multiple inheritance
4) Hierarchical inheritance
5) Hybrid inheritance

1. Single Inheritance
In single inheritance, a class is allowed to inherit from only one class. i.e. one base class is inherited by one derived class only.

**Example**
```
class A
{ 
... .. ... 
};
class B: public A
{
... .. ...
};
```

2. Multiple Inheritance
Multiple Inheritance is a feature of C++ where a class can inherit from more than one class. i.e one subclass is inherited from more than one base class.

**Example**
```
class B
{ 
... .. ... 
};
class C
{
... .. ...
};
class A: public B, public C
{
... ... ...
};
```

3. Multilevel Inheritance
In this type of inheritance, a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class. There can be any number of levels.

**Example**
```
class C
{ 
... .. ... 
};
class B : public C
{
... .. ...
};
class A: public B
{
... ... ...
};
```

4. Hierarchical Inheritance
In this type of inheritance, more than one subclass is inherited from a single base class. i.e. more than one derived class is created from a single base class.

**Example**
```
class A 
{  
    // body of the class A.
}
class B : public A  
{  
    // body of class B.
}
class C : public A  
{  
    // body of class C.
}
class D : public A  
{  
    // body of class D.
}
```

5. Hybrid Inheritance
Hybrid Inheritance is implemented by combining more than one type of inheritance. For example: Combining Hierarchical inheritance and Multiple Inheritance will create hybrid inheritance in C++

There is no particular syntax of hybrid inheritance. We can just combine two of the above inheritance types.

**Example**
```
class F
{
... .. ...
}
class G
{
... .. ...
}
class B : public F
{
... .. ...
}
class E : public F, public G
{
... .. ...
}
class A : public B {
... .. ...
}
class C : public B {
... .. ...
}
```


## `Example with program`

```cpp

/*Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. */
#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string _name, int _age)
    {
        name= _name;
        age = _age;
    }

    void display()
    {
        std::cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

class Student : public Person
{
private:
    string school;

public:
    Student(string _name, int _age, string _school) : Person(_name, _age), school(_school) 
    {
        _name=_name;
        _age=_age;
        school = _school;
    }

    void display()
    {
        Person::display();
        std::cout << "School: " << school << endl;
    }
};

class Teacher : public Person
{
private:
    string subject;

public:
    Teacher(string _name, int _age, string _subject) : Person(_name, _age), subject(_subject)
    {
        _name=_name;
        _age = _age;
        subject=_subject;
    }

    void display()
    {
        Person::display();
        std::cout << "Subject: " << subject << std::endl;
    }
};

int main()
{
    Student student("kishan", 25, "tops");
    Teacher teacher("jaydeep", 35, "C++");

    std::cout << "Student Information:" << endl;
    student.display();
    std::cout << endl;

    std::cout << "Teacher Information:" << endl;
    teacher.display();

    return 0;
}

```