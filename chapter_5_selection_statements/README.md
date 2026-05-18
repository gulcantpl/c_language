# C Programming - Chapter 5: Selection Statements

This repository contains the solutions for the programming projects from Chapter 5 of *C Programming: A Modern Approach* by K. N. King. The projects in this section focus on implementing logical decision-making structures (`if-else` cascades, nested conditions, and `switch-case` statements) to solve algorithmic problems.

---

##  Core Competencies Developed

* **Conditional Flow Optimization:** Implementing clean `if-else` structures by utilizing sequential filtering, eliminating redundant evaluation of conditions (e.g., avoiding explicit equality checks when implicit in `else` blocks).
* **Proximity Matching Algorithms:** Transforming multi-unit data (such as time or spatial coordinates) into a single unified scalar value (total minutes from midnight) to calculate absolute distances and match nearest values.
* **Algorithmic Data Transformation:** Overcoming the limitations of `switch-case` range handling by applying integer division (`grade / 10`) to map data intervals onto discrete cases.
* **Defensive Programming & Guard Clauses:** Handling localized edge cases and language exceptions dynamically within nested logic patterns to prevent logical side effects.

---

##  Key Project Analyses

### 1. Flight Departure Finder (Project 8)
* **Problem:** Identify the closest departure time out of 8 fixed flights based on a user-inputted time.
* **Solution:** Inputted hours and minutes were converted into a single scale: **total minutes from midnight**. By calculating the precise midpoints (thresholds) between consecutive flights, a highly optimized `if-else` cascade determines the closest flight with minimal computational overhead.

### 2. Chronological Date Comparison (Project 9)
* **Problem:** Compare two dates in `mm/dd/yy` format and determine which occurs earlier in the calendar.
* **Solution:** Designed a nested decision tree based on chronological hierarchy (Year -> Month -> Day). If the years differ, the earlier date is determined immediately; if the years are equal, the execution cleanly cascades down to subsequent nested blocks to evaluate months and days respectively.

### 3. Number-to-Word Converter (Project 11) - *Independent Implementation* 
* **Problem:** Convert a two-digit integer into its English word representation (e.g., `45` -> `Forty-five`).
* **Challenge:** Handling the linguistic exception of the "teen" numbers (`11` through `19`), which do not follow standard compounding rules.
* **Solution:** The digits were parsed individually. A nested `switch` block captures the `11-19` range under `case 1`. For numbers outside this range, a secondary `switch` processes the ones digit. To prevent standard suffix appending for the teens, a defensive guard clause `if (num1 != 1)` was successfully integrated, ensures bug-free terminal formatting.

---
