# Explain the key concepts of Object-Oriented Programming (OOP). 

Object-Oriented Programming or OOPs refers to languages that use objects in programming. Object-oriented programming aims to implement real-world entities like inheritance, hiding, polymorphism, etc in programming. The main aim of OOP is to bind together the data and the functions that operate on them so that no other part of the code can access this data except that function.

**OOPs Concepts :**

1) Encapsulation
2) Data Abstraction 
3) Inheritance
4) Polymorphism1.
5) Class
6) Objects<n>
</n>

**1. Encapsulation**

Encapsulation refers to the bundling of data with the methods that operate on that data. It restricts direct access to some of an object's components, which is a means of preventing accidental interference and misuse of the data. For instance, an object in the class "Dog" may have a method called "bark," but the internal state that determines how the dog barks is kept hidden from the outside world.

**2. Abstraction**

Abstraction involves the hiding of complex reality while exposing only the necessary parts. It helps in reducing programming complexity and effort. For example, a car is viewed as a car rather than its individual components like wheels, engine, etc. This concept extends to functions within a programming context, where a function can be used without knowledge of its internal workings.

**3. Inheritance**

Inheritance is a way to form new classes using classes that have already been defined. It helps in code reusability and the addition of new features to existing code without modifying it. For example, a class "Animal" can be inherited by other classes like "Dog" and "Cat," which automatically gain the methods and properties of the "Animal" class.

**4. Polymorphism**

Polymorphism allows methods to do different things based on the object it is acting upon. This means that a single interface can represent different underlying forms (data types). For example, the method "move" might mean "walk" for a "Person" class and "fly" for a "Bird" class.

**5. Class**

A class is a user-defined data type. It consists of data members and member functions, which can be accessed and used by creating an instance of that class. It represents the set of properties or methods that are common to all objects of one type. A class is like a blueprint for an object.  

For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, Car is the class, and wheels, speed limits, mileage are their properties.

**6. Object:**

It is a basic unit of Object-Oriented Programming and represents the real-life entities. An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated. An object has an identity, state, and behavior. Each object contains data and code to manipulate the data. Objects can interact without having to know details of each other’s data or code, it is sufficient to know the type of message accepted and type of response returned by the objects. 