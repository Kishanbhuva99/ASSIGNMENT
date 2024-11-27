/*Write a program that demonstrates the difference between local and global 
variables in C++. Use functions to show scope.*/

#include <iostream>

using namespace std;

int global=100;

int local_var()
{
    int local=20;
    std::cout << endl;
    std::cout << " this is local from function : " << local << endl ;
    std::cout << " this is global from function : " << global << endl ;

}
int main()
{
    // here local variable declare in function so directly we cann't used out of function.
   // std::cout << " this is local from main : " << local << endl ; // this show error.
    std::cout << " this is global from main : " << global << endl ;
    
    // to use local variable we have to call function.
    local_var();
    
    return 0;
}