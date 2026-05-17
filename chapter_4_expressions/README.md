# Chapter 4: Expressions

This chapter explores the fundamental building blocks of C programming: **expressions**, **operators**, and **evaluation rules**. It demonstrates how variables and constants combine with arithmetic, relational, and logical operators to compute new values, and outlines the precise rules the compiler follows during execution.

---

## Key Concepts

### 1. Expressions and Operators
An expression is a formula that computes a value by applying operators to operands. Operators are categorized based on the number of operands they require:
* **Unary Operators:** Require a single operand (e.g., unary plus `+`, unary minus `-`).
* **Binary Operators:** Require two operands (e.g., addition `+`, subtraction `-`, multiplication `*`, division `/`, remainder `%`).

### 2. Arithmetic Behavior and Truncation
* **Integer Division (`/`):** When both operands are integers, C drops the fractional part rather than rounding it. This behavior is known as **truncation toward zero**. For example, `5 / 2` evaluates to `2`, and `1 / 2` evaluates to `0`.
* **Remainder Operator (`%`):** Requires integer operands and computes the remainder of the division. For example, `10 % 3` evaluates to `1`.
* **Negative Operands (C99 Standard):** In C99, integer division is strictly truncated toward zero (e.g., `-9 / 7` equals `-1`), and the sign of the remainder matches the sign of the first operand (e.g., `-9 % 7` equals `-2`).

### 3. Operator Precedence and Associativity
When an expression contains multiple operators, the compiler determines the execution order using two criteria:
* **Precedence:** Determines which operator executes first when different operators appear together (e.g., multiplicative operators `*`, `/`, `%` have higher precedence than additive operators `+`, `-`).
* **Associativity:** Determines the grouping order when operators have the same precedence level. 
  * **Left-associative:** Evaluated from left to right (e.g., arithmetic operators).
  * **Right-associative:** Evaluated from right to left (e.g., assignment operators like `=`, `+=`).

### 4. Undefined Behavior
C does not define the execution order for subexpressions in all scenarios. Modifying a variable and fetching its value within the same expression can lead to **undefined behavior**, causing different compilers to produce different outcomes. 

> **Best Practice:** Avoid complex, nested side-effects (such as combining prefix/postfix increment operators with assignments in a single line). Separate the logic into distinct statements to ensure portability and readability.

---

## Programming Projects Summary

This directory contains implementations for the exercises at the end of Chapter 4:

1. **Project 1 (Two-Digit Reversal):** Splits a two-digit integer into digits using `/ 10` and `% 10`, then displays them in reverse order.
2. **Project 2 (Three-Digit Reversal):** Extends the digit-splitting arithmetic logic to isolate the hundreds, tens, and ones places of a three-digit integer.
3. **Project 3 (Reversal via Format Strings):** Achieves the same three-digit reversal without arithmetic operators by utilizing the field-width modifier `%1d` within `scanf`.
4. **Project 4 (Octal Converter):** Converts a base-10 integer into a 5-digit octal (base-8) representation by iteratively computing reminders and dividing the value by 8.
5. **Project 5 (UPC Check Digit Redesign):** Updates the Universal Product Code (UPC) verification program to accept an 11-digit string in a single input line using formatted `scanf` reads.
6. **Project 6 (EAN Check Digit Calculator):** Implements the European Article Number (EAN-13) verification algorithm, alternating the weights of the odd and even position sums to calculate the validation digit.