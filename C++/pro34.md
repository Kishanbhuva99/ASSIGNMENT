# What are arrays in C++? Explain the difference between single-dimensional and multi- dimensional arrays. 

array is a data structure that is used to store variables that are of similar data types at contiguous locations. The main advantage of the array is random access and cache friendliness. 

**There are mainly three types of the array:**

1. One Dimensional (1D) Array
2. Two Dimension (2D) Array
3. Multidimensional Array

#### `Difference between single and multi dimension array`
|Basis	|One Dimension Array|	Two Dimension Array|
|---|---|---|
|Definition	|Store a single list of the element of a similar data type.	|Store a ‘list of lists’ of the element of a similar data type.
|Representation	|Represent multiple data items as a list.	|Represent multiple data items as a table consisting of rows and columns.
|Declaration	|The declaration varies for different programming language:For C++, datatype variable_name[row]For Java,  datatype [] variable_name= new datatype[row]|The declaration varies for different programming language:For C++, datatype variable_name[row][column]For Java,  datatype [][] variable_name= new datatype[row][column]
|Dimension|	One|	Two|
|Size(bytes)	|size of(datatype of the variable of the array) * size of the array	|size of(datatype of the variable of the array)* the number of rows* the number of columns.
|Address calculation.	|Address of a[index] is equal to (base Address+ Size of each element of array * index).	|Address of a[i][j] can be calculated in two ways row-major and column-majorColumn Major: Base Address + Size of each element (number of rows(j-lower bound of the column)+(i-lower bound of the rows))Row Major: Base Address + Size of each element (number of columns(i-lower bound of the row)+(j-lower bound of the column))
|Example	|int arr[5];  //an array with one row and five columns will be created.{a , b , c , d , e}|int arr[2][5];  //an array with two rows and five columns will be created.{ a  b  c  d  e f  g   h  i   j}