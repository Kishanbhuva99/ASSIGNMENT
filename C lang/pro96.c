//.WAP to show difference between Structure and Union.  
/*Structures in C is a user-defined data type available in C that allows to combining of data items of different kinds.
Structures are used to represent a record.*/

/*Union in c is a special data type available in C that allows storing different data types in the same memory location.
You can define a union with many members, but only one member can contain a value at any given time.
Unions provide an efficient way of using the same memory location for multiple purposes.  */
#include <stdio.h> 
#include <string.h> 
  
// declaring structure 
struct struct_example
{ 
    int age; 
    float percentage; 
    char name[20]; 
}; 
  
// declaring union 
  
union union_example
{ 
    int age; 
    float percentage; 
    char name[20]; 
}; 
  
int main() 
{ 
    // creating variable for structure 
    struct struct_example s = { 31, 95, "jay" }; 
  
    // creating variable for union  
    union union_example u;
  
    printf("structure data:\n AGE: %d\n""PERCENTAGE: %.2f\n NAME: %s\n",s.age, s.percentage, s.name); 


    printf("\nunion data:"); 
    u.age=22;
    printf("\nAGE: %d",u.age);
    u.percentage=75;
    printf("\nPERCENTAGE: %.2f",u.percentage);
    strcpy(u.name, "veeru");
    printf("\nNAME: %s\n",u.name);

  
    // difference two and three 
    printf("\nsizeof structure : %d\n", sizeof(s)); 
    printf("sizeof union : %d\n", sizeof(u));
return 0;
}