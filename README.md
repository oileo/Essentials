# Essentials - A C Utility Library

## 📌 About
Essentials is a simple yet useful collection of utility functions written in C. It provides helpful string manipulation functions that can make handling C strings more intuitive. This library is open-source under the MIT license, so feel free to use and modify it. Just don't forget to credit the author! 😆

**Author:** GlitchPalm (Leonardo Gonçalves)  
**Version:** 0603  
**Made in:** Brazil  

## 📥 Installation
To use Essentials in your project, you need both `essentials.h` and `essentials.c`. Include them in your project directory and then:

1. Add `#include "essentials.h"` in your source file.
2. Compile your project together with `essentials.c`. Example:
   ```sh
   gcc main.c essentials.c -o my_program
   ```

## 📖 Functions and Usage

### 📌 length(s)
Returns the length of a given string (excluding the null terminator `\0`).

#### Example:
```c
char str[] = "Hello";
int len = length(str);
printf("Length: %d\n", len); // Output: Length: 5
```

---

### 📌 input(prompt, output)
Prompts the user for input and stores the result in `output`.

#### Example:
```c
char name[50];
input("Enter your name: ", name);
printf("Hello, %s!\n", name);
```

---

### 📌 indexof(s, letter)
Finds the first occurrence of a character in a string and returns its index. Returns `-1` if not found.

#### Example:
```c
char str[] = "banana";
int index = indexof(str, 'n');
printf("Index of 'n': %d\n", index); // Output: 2
```

---

### 📌 lastindexof(s, letter)
Finds the last occurrence of a character in a string and returns its index. Returns `-1` if not found.

#### Example:
```c
char str[] = "banana";
int index = lastindexof(str, 'n');
printf("Last index of 'n': %d\n", index); // Output: 4
```

---

### 📌 reverse(s, output)
Reverses a given string and stores it in `output`.

#### Example:
```c
char str[] = "Hello";
char rev[10];
reverse(str, rev);
printf("Reversed: %s\n", rev); // Output: olleH
```

---

### 📌 substring(s, output, start, end)
Extracts a substring from `s` starting at `start` and ending at `end`.

#### Example:
```c
char str[] = "Essentials";
char sub[10];
substring(str, sub, 2, 6);
printf("Substring: %s\n", sub); // Output: sent
```

---

### 📌 trim(s, output)
Removes leading and trailing spaces from a string.

#### Example:
```c
char str[] = "   Hello, World!   ";
char trimmed[50];
trim(str, trimmed);
printf("Trimmed: '%s'\n", trimmed); // Output: 'Hello, World!'
```

---

## 📜 License
This project is licensed under the MIT License. Do whatever you want with it, just don’t forget to give me some credit. 😆

## ⭐ Support
If you like this project, consider giving it a ⭐ on GitHub!

🔗 **GitHub Repository:** [https://github.com/oileo/Essentials](https://github.com/oileo/Essentials)

