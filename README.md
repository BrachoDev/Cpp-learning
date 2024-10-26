# Cpp-learning

Here are my C++ notes

# Note for myself:

Use this link to remember how to run C++ code: [click here](https://code.visualstudio.com/docs/cpp/config-mingw#_run-helloworldcpp)
Video from Bro Code to learn C++: [click here](https://www.youtube.com/watch?v=-TkoO8Z07hI&t=654s)

## 1. Basic Structure of a C++ Program

A simple C++ program starts with an #include directive, typically including <iostream> for basic input and output.

```cpp
Copy code
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
Copy code
int age = 21;
double price = 9.99;
char grade = 'A';
bool isPassed = true;
```

## 3. Control Flow Statements

C++ supports control flow with `if`, `else`, `switch`, `for`, `while`, and `do-while` loops.

```cpp
Copy code
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
Copy code
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
Copy code
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
Copy code
int value = 10;
int *ptr = &value; // Pointer to value
std::cout << "Value: " << *ptr; 
```

## 7. Comments
Use `//` for single-line comments and `/\* \*/` for multi-line comments.

```cpp
Copy code
// This is a single-line comment

/_
This is a
multi-line comment
_/
```
