# What is the scope of variables in C++? Differentiate between local and global scope. 

## Local Variables:
* Local variables are declared within a specific block of code, such as within a function or a loop.
* They are only accessible within the block in which they are declared.
* Once the block of code in which they are declared exits, the memory allocated to these variables is released, and they are no longer accessible.
* Local variables can have the same name as variables in other blocks without conflict because their scope is limited to the block in which they are declared.
* They are typically used for temporary storage or only relevant data within a specific context.

## Global Variables:
* Global variables are declared outside of any function or block of code, usually at the top of a program or in a separate file.
* They are accessible from any part of the program, including within functions, loops, or other blocks of code.
* Global variables retain their value throughout the lifetime of the program unless explicitly modified or reset.
* Due to their accessibility from anywhere in the program, global variables can introduce unintended side effects and make it harder to understand and debug code, especially in larger programs.
* They are typically used for values that need to be accessed and modified by multiple parts of the program.

**local varialble accessible only in the function where it`s declared where global variable is accessible in whole program that different of local and global variable.**