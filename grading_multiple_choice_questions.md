# Multiple Choice Test Grader (`multiple_choice.cpp`)

## OOP Concepts Used
While this program primarily utilizes a procedural structure within the `main` function, key foundational concepts related to data structures and modular layout include:

* **Abstraction & Encapsulation (Implicit):** Data is organized into logical structures—a two-dimensional array representing student answers and a one-dimensional array representing the master answer key. The underlying data storage is hidden behind indexed array access, shielding the loop iteration logic from unnecessary manipulation.
* **Modular Code Design:** The program decouples student data management from answer-key checking, allowing the answer-key array to act as a single source of truth for evaluation.

---

## Algorithm
1. **Initialize Arrays:**
   * Declare a 2D `char` array of dimensions `8x10` containing the answers submitted by 8 students for 10 questions.
   * Declare a 1D `char` array of size `10` containing the correct answer key.
2. **Iterate Through Students (Outer Loop):**
   * Loop through each row index `i` from `0` to `7`.
   * Initialize a `correctCount` variable to `0` for the current student.
3. **Compare Answers (Inner Loop):**
   * Loop through each column index `j` from `0` to `9`.
   * Compare `answers[i][j]` with `key[j]`.
   * If the characters match, increment `correctCount` by 1.
4. **Display Result:**
   * Print the current student's index along with their total `correctCount`.
   * Repeat until all students are evaluated.

---

## Possible Error Points
* **Array Index Out of Bounds:** Off-by-one errors in loop conditions (e.g., using `<=` instead of `<` for size limits) will access invalid memory locations outside the allocated `8x10` array space.
* **Case Sensitivity:** Array character comparisons (e.g., `'a'` vs `'A'`) are case-sensitive. If student responses are in lowercase and the key is in uppercase, valid answers will be marked incorrect.
* **Counter Reset Position:** Placing the declaration or reset of `correctCount` outside the outer loop will cause running totals to accumulate across all students instead of resetting per student.