# Cpp-learning

Here are my C++ notes

# Note for myself:

Use this link to remember how to run C++ code: [click here](https://code.visualstudio.com/docs/cpp/config-mingw#_run-helloworldcpp)

Video from Bro Code to learn C++: [click here](https://www.youtube.com/watch?v=-TkoO8Z07hI&t=654s)

## Content:

[1. Basic Structure of a C++ Program](#1-basic-structure-of-a-c-program)

[2. Variables and Data Types](#2-variables-and-data-types)

[3. Control Flow Statements](#3-control-flow-statements)

[4. Functions](#4-functions)

[5. Object-Oriented Programming](#5-object-oriented-programming)

[6. Pointers and References](#6-pointers-and-references)

[7. Comments](#7-comments)

[8. Handling User Input](#8-handling-user-input)

[9. Arithmetic Operations](#9-arithmetic-operations)

## 1. Basic Structure of a C++ Program

A simple C++ program starts with an #include directive, typically including <iostream> for basic input and output.

```cpp

#include <iostream>  // Preprocessor directive for input and output

int main() {
    std::cout << "Hello, World!";  // Print to the console
    return 0;  // Exit the program
}
```

- `#include <iostream>`: Includes the standard input-output stream.
- `int main()`: Entry point for execution.
- `std::cout`: Sends output to the console.
- `return 0;`: Ends the program successfully.

## 2. Variables and Data Types

C++ has multiple data types, including `int`, `double`, `char`, and `bool`.

```cpp

int age = 21;
double price = 9.99;
char grade = 'A';
bool isPassed = true;
```

## 3. Control Flow Statements

C++ supports control flow with `if`, `else`, `switch`, `for`, `while`, and `do-while` loops.

```cpp

if (age > 18) {
std::cout << "You are an adult.";
} else {
std::cout << "You are a minor.";
}

for (int i = 0; i < 5; i++) {
std::cout << i << " ";
}
```

## 4. Functions

Functions allow code reuse and better organization.

```cpp

#include <iostream>

void greet() {
std::cout << "Hello from the function!";
}

int main() {
greet();
return 0;
}
```

## 5. Object-Oriented Programming

C++ supports classes and objects for creating complex data structures.

```cpp

#include <iostream>

class Car {
public:
std::string brand;
int year;

    void honk() {
        std::cout << "Beep beep!";
    }

};

int main() {
Car myCar;
myCar.brand = "Toyota";
myCar.year = 2020;
myCar.honk();

    return 0;

}
```

## 6. Pointers and References

C++ allows direct memory management with pointers and references.

```cpp

int value = 10;
int *ptr = &value; // Pointer to value
std::cout << "Value: " << *ptr;
```

## 7. Comments

Use `//` for single-line comments and `/\* \*/` for multi-line comments.

```cpp

// This is a single-line comment

/_
This is a
multi-line comment
_/
```

## 8. Handling User Input

In C++, we use std::cin to take user input. Make sure to include <iostream> for input and output operations.

```cpp

#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age: ";  // Prompt user
    std::cin >> age;  // Take input and store it in the variable `age`
    std::cout << "You entered: " << age << std::endl;  // Output the input value

    return 0;
}
```

- `std::cout` is used to display prompts or messages to the console.
- `std::cin` is used to take input from the user.
  Note: `std::cin` stops at the first whitespace, so for strings with spaces, use `std::getline()`:

  ```cpp

  std::string name;
  std::cout << "Enter your full name: ";
  std::getline(std::cin, name);
  std::cout << "Hello, " << name << "!";
  ```

## 9. Arithmetic Operations

C++ supports basic arithmetic operators for mathematical operations. Here are the most common operators:

| Operator | Description         | Example  |
| -------- | ------------------- | -------- |
| +        | Addition            | `a + b`  |
| -        | Subtraction         | `a - b`  |
| \*       | Multiplication      | `a \* b` |
| /        | Division            | `a / b`  |
| %        | Modulus (remainder) | `a % b`  |

**_Example of Using Arithmetic Operators:_**

```cpp

#include <iostream>

int main() {
int a = 10;
int b = 3;

    std::cout << "Addition: " << a + b << std::endl;
    std::cout << "Subtraction: " << a - b << std::endl;
    std::cout << "Multiplication: " << a * b << std::endl;
    std::cout << "Division: " << a / b << std::endl;
    std::cout << "Modulus: " << a % b << std::endl;

    return 0;

}
```

**_Order of Operations_**

C++ follows the standard order of operations (PEMDAS: Parentheses, Exponents, Multiplication and Division, Addition and Subtraction). Use parentheses to control the order explicitly:

```cpp

int result = (a + b) \* c;
```

**_Increment and Decrement Operators_**

- `++` (Increment): Increases a variable’s value by 1.
- `--` (Decrement): Decreases a variable’s value by 1.

```cpp

int count = 5;
count++; // Equivalent to count = count + 1
count--; // Equivalent to count = count - 1
```
