# C Programming - Chapter 3: Formatted Input/Output

This repository contains robust and clean solutions for the programming projects presented in **Chapter 3 (Formatted Input/Output)** of K. N. King's *"C Programming: A Modern Approach"*. Each project has been engineered to adhere to strict professional development standards, focusing on memory efficiency, clear variable nomenclature, and advanced stream formatting via `printf` and `scanf`.

---


### 1. Date Formatting (`project1.c`)
* **Description:** Accepts a user-defined date in the `mm/dd/yyyy` format, deconstructs the stream, and reassembles it into a unified `yyyymmdd` representation.
* **Key Implementation:** Leverages the `%.2d` precision specifier to programmatically enforce leading zeros for single-digit months and days, preventing architectural layout breaking.

### 2. Product Information Formatting (`project2.c`)
* **Description:** Ingests an item number, unit price, and purchase date, subsequently outputting a perfectly aligned, production-grade invoice table.
* **Key Implementation:** Dynamically binds the currency symbol (`$`) directly to the floating-point descriptor within a structured tabular environment, eliminating formatting misalignments across varying terminal environments.

### 3. ISBN Breakdown (`project3.c`)
* **Description:** Parses an International Standard Book Number (ISBN) input stream (e.g., `978-0-393-97950-3`) into its five discrete logical components: GS1 prefix, group identifier, publisher code, item number, and check digit.
* **Key Implementation:** Utilizes raw `%d` type-specifiers separated by literals in `scanf` to exploit pattern matching. This dynamically accommodates varying group lengths without hardcoding baselines, as per the chapter's operational constraints.

### 4. Phone Number Formatting (`project4.c`)
* **Description:** Intercepts a standard domestic phone number format `(xxx) xxx-xxxx`, strips the formatting artifacts, and standardizes the output into the corporate `xxx.xxx.xxxx` blueprint.
* **Key Implementation:** Employs structured literal matching inside `scanf` to discard syntax boundaries, combined with explicit `%.3d` and `%.4d` padding modifiers in `printf` to guarantee structural integrity.

### 5. Magic Square Sums (`project5.c`)
* **Description:** Rearranges a chaotic 1-to-16 integer stream into a structured 4x4 matrix, subsequently executing real-time matrix operations to calculate all horizontal rows, vertical columns, and primary/secondary diagonals.
* **Key Implementation:** Developed entirely without iterative loops (`for`/`while`) or array structures. The algorithm maps geometric intersections manually across 16 discrete stack-allocated variables to simulate data matrix manipulation.

### 6. Fraction Addition (`project6.c`)
* **Description:** Accepts two fractional expressions separated by a binary operator (e.g., `1/2 + 3/4`), applies a mathematical lowest common denominator algorithm, and displays the unified sum.
* **Key Implementation:** Implements explicit whitespace decoupling inside the `scanf` control string (`%d/%d + %d/%d`). This creates an exceptional layer of input tolerance, ensuring the program does not crash if the user inserts arbitrary spacing around the operator.

---

##  Compilation & Execution

All binaries can be compiled cleanly using the GCC toolchain without warnings. 

```bash
# Compile target source (Example: Project 4)
gcc project4.c -o project4 -Wall -Wextra

# Execute the binary
./project4