# How are arrays initialized in C++? Provide examples of both 1D and 2D arrays. 

#### Initialization of Array in C++
In C++, we can initialize an array in many ways but we will discuss some most common ways to initialize an array. We can initialize an array at the time of declaration or after declaration.

**1. Initialize Array with Values in C++**
We have initialized the array with values. The values enclosed in curly braces ‘{}’ are assigned to the array. Here, 1 is stored in arr[0], 2 in arr[1], and so on. Here the size of the array is 5.
```cpp
int arr[5] = {1, 2, 3, 4, 5};
```
**2. Initialize Array with Values and without Size in C++**
We have initialized the array with values but we have not declared the length of the array, therefore, the length of an array is equal to the number of elements inside curly braces.
```cpp
int arr[] = {1, 2, 3, 4, 5};
```
**3. Initialize Array after Declaration (Using Loops)**
We have initialized the array using a loop after declaring the array. This method is generally used when we want to take input from the user or we cant to assign elements one by one to each index of the array. We can modify the loop conditions or change the initialization values according to requirements.
```cpp
for (int i = 0; i < N; i++) {
    arr[i] = value;
}
```
**4. Initialize an array partially in C++**
Here, we have declared an array ‘partialArray’ with size ‘5’ and with values ‘1’ and ‘2’ only. So, these values are stored at the first two indices, and at the rest of the indices ‘0’ is stored.
```cpp
int partialArray[5] = {1, 2};
```
**5. Initialize the array with zero in C++**
We can initialize the array with all elements as ‘0’ by specifying ‘0’ inside the curly braces. This will happen in case of zero only if we try to initialize the array with a different value say ‘2’ using this method then ‘2’ is stored at the 0th index only.
```cpp
int zero_array[5] = {0};
```

#### `Example of 1D and 2D array`

```cpp
//this is 1D array
int arr[5] = {1, 2, 3, 4, 5};   

//this is 2D array
int arr[2][2]={ 1, 2
                3, 4 }
```