# Chapter 2: C Fundamentals - Programming Projects

This repository contains production-ready solutions for all programming projects from Chapter 2 of K. N. King's C Programming: A Modern Approach. The focus of this chapter was mastering core C syntax, user input handling via scanf, arithmetic operations, macro definitions, and type management using integers and floats.

---

## Projects Overview

### 1. Sphere Volume Calculator (Projects 1, 2 & 3)
* **File:** project_3.c
* **Concept:** Computes the volume of a sphere based on a user-provided radius.
* **Key Takeaways:** Handling float data types, formatting floating-point inputs, and translating geometric formulas into executable C code.

### 2. Tax Computation (Project 4)
* **File:** project_4.c
* **Concept:** Prompts the user for a dollars-and-cents amount, applies a 5% tax rate, and displays the total.
* **Key Takeaways:** Utilizing the %.2f format specifier for accurate currency representation and implementing basic financial math.

### 3. Polynomial Evaluation & Horner's Rule (Projects 5 & 6)
* **File:** project_6.c
* **Concept:** Evaluates the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6. Project 6 optimizes this using Horner's Rule, reducing the operation count from 14 multiplications to 5.
* **Key Takeaways:** Algorithmic optimization, performance efficiency, and managing operator precedence via grouping.

### 4. ATM Bill Distribution Algorithm (Project 7)
* **File:** project_7.c
* **Concept:** Mimics an ATM by breaking down a US dollar amount into the smallest possible number of $20, $10, $5, and $1 bills.
* **Key Takeaways:** Implementing clean code principles via #define macros, and chaining division (/) and modulo (%) operators for remainder distribution.

### 5. Loan Balance Calculator (Project 8)
* **File:** project_8.c
* **Concept:** Calculates the remaining balance on a loan after the first, second, and third monthly payments by factoring in the monthly interest rate.
* **Key Takeaways:** Dynamic variable updates and tracking state changes across sequential financial cycles.

---

## Execution Guide

To compile and run any of the projects, use the following commands in your terminal:

```bash
# Compile the source code
gcc -o project_8 project_8.c

# Execute the binary
./project_8