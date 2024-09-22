# Module 3-2 Programming Exercises

### Author: Cameron Warren  
### UNC Charlotte BID: 801289580  
### Course: ITSC 2181  
### Date: September 16, 2024  

---
## About

This collection of programming exercises focuses on fundamental concepts in C, including:

- **Function Definition and Usage**: Implementing functions to perform specific tasks, such as calculating the sum and product of integers and the volume of a cube.

- **Array Manipulation**: Working with one-dimensional arrays, initializing elements, accessing values, and performing operations like summing elements.

- **Input Handling**: Reading user input using `scanf` and processing that input to compute results, enhancing interaction with the user.

- **Control Structures**: Utilizing loops for iterating over arrays and displaying results, reinforcing understanding of control flow in programming.

- **String Processing**: Managing strings by declaring character arrays and displaying individual characters, emphasizing basic string manipulation techniques.

Through these exercises, I have strengthened my problem-solving skills and gained practical experience in applying C programming concepts to real-world scenarios.


## Task 1: Function g()

### Objective
Write a function `g()` that computes the sum and product of two integers. The sum is stored as a global variable, and the product is returned by the function.

### Code
```bash
#include <stdio.h> 

int g(int, int); 

int sum;

int main(void) 
{ 
    int product = g(3, 4); 
    printf("Sum=%d\n", sum); 
    printf("Product=%d\n", product); 
} 

int g(int x, int y) 
{ 
    sum = x + y;  // Calculate sum
    return x * y; // Return product
}
```
---

## Task 2: Cube Volume Function

### Part A: Function Definition
Write a function `cube_volume` that calculates the volume of a cube given its side length.

### Code
```bash
float cube_volume(float side) 
{
    return side * side * side; // Calculate volume
}

### Part B: Function Call in main()
Provide the code to invoke the function and display the result.

### Code
int main(void)
{
    float side = 3.0;
    float volume = cube_volume(side);
    printf("Volume of the cube: %.2f\n", volume);
}
```
---

## Task 3: Array Manipulation

### Given Code Analysis
```bash
void f(int a[]) 
{ 
    printf("%d\n", a[3]); 
    a[3] = a[3] + 900; 
} 

int main(void) 
{ 
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    (void) f(a); 
    (void) f(a);
    printf("%d\n", a[3]);
    return 0; 
}
```
### Output Explanation
- The first call to `f(a)` prints `3`, then adds `900` to `a[3]`, making it `903`.
- The second call to `f(a)` prints `903` and adds `900` again, making it `1803`.
- Finally, the program prints `1803`.

---

## Task 4: 1-D Array Initialization

### Objective
Declare, initialize, and manipulate a 1-D array of integers.

### Code
```bash
#include <stdio.h>

int main(void)
{
    int a[12] = {1, 0, 3, 0, 0, 0, 7, 0, 0, 0, 0, 0};

    // Display array contents
    for (int i = 0; i < 12; i++)
    {
        printf("%d\n", a[i]);
    }

    // Sum the array elements
    int sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
    }
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
```
---

## Task 5: Float Array Input and Average Calculation

### Objective
Declare a float array, read user input, and calculate the sum and average.

### Code
```bash
#include <stdio.h>

int main(void)
{
    float numbers[5];
    float sum = 0.0;

    // Read numbers from console
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%f", &numbers[i]);
    }

    // Calculate sum and average
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    float average = sum / 5;

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}
```
---

## Task 6: String Manipulation

### Objective
Declare a string and display its characters one at a time.

### Code
```bash
#include <stdio.h>

int main(void)
{
    char str[] = "UNC Charlotte";
    
    // Display each character on a new line
    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}
```
---

## Conclusion

These exercises reinforce C programming fundamentals through function definitions, array manipulations, user input handling, and string processing.
