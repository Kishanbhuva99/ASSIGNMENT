# Explain string handling in C++ with examples.

These are the new types of strings that are introduced in C++ as std::string class defined inside <string> header file. This provides many advantages over conventional C-style strings such as dynamic size, member functions, etc.

we can assign value in string directly or by user.

also we can perform various task on string like append new string , replace word in string , insert new words ,erase word, compare two strings and find lenght of string.
with the use of this task we handle the string.

### `Example`

```cpp
// C++ program to create std::string objects
#include <iostream>
using namespace std;

int main()
{
    
    string str("kishan patel");
    cout << str;
    return 0;
}
```