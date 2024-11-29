# What are the main input/output operations in C++? Provide examples. 

 # 1. Cout:-<n>
 </n>
    The C++ cout statement is the instance of the ostream class. It is used to produce output on the standard output device which is usually the display screen. The data needed to be displayed on the screen is inserted in the standard output stream (cout) using the insertion operator(<<).
<n></n>

 # 2. Cin:-<n>
 </n>
    C++ cin statement is the instance of the class istream and is used to read input from the standard input device which is usually a keyboard. The extraction operator(>>) is used along with the object cin for reading inputs. The extraction operator extracts the data from the object cin which is entered using the keyboard.
<n>
</n>

#  `Example`:-

```cpp
 std::string name;
    int age;
   std:: cout << "Enter your name :  ";
    std::cin>>  name;

    std::cout << "Enter your AGE : " ;
    std::cin >> age;

    std::cout << "welcome " <<name<< "\n your age is " << age ;

```
