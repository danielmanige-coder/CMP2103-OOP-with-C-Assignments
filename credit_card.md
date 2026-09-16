# Credit Card Number Validation (`credit_card.cpp`)

## OOP Concepts Used
* **Procedural Abstraction / Modularization:** Functionality is decomposed into clear, single-responsibility functions (`isValid`, `sumOfDoubleEvenPlace`, `sumOfOddPlace`, `getDigit`, `prefixMatched`, `getSize`, and `getPrefix`). Each function encapsulates a specific task without relying on global state.
* **Interface-Driven Design:** The prototypes provide a clear public interface for the Luhn algorithm, keeping the `main` entry point simple and high-level.

---

## Algorithm
The program validates credit card numbers using the **Luhn Algorithm (Mod 10 Check)** along with standard issuer rules:

1. **Input & Length/Prefix Check:**
   * Prompt the user for a `long long` integer card number.
   * Verify the number length is between 13 and 16 digits using `getSize()`.
   * Verify the starting digit matches valid prefixes (4 for Visa, 5 for MasterCard, 37 for American Express, 6 for Discover) using `prefixMatched()` and `getPrefix()`.
2. **Sum of Double Even-Position Digits (`sumOfDoubleEvenPlace`):**
   * Traverse digits from right to left starting from the second-to-last digit (shifting by 100 on each iteration).
   * Multiply each digit by 2.
   * If the result is a two-digit number, use `getDigit()` to sum its individual digits (e.g., $12 \rightarrow 1 + 2 = 3$).
   * Add the output to the running even-position sum.
3. **Sum of Odd-Position Digits (`sumOfOddPlace`):**
   * Traverse digits from right to left starting from the last digit (shifting by 100 on each iteration).
   * Add each digit to the running odd-position sum.
4. **Validation:**
   * Add the odd sum and double-even sum together.
   * If `(totalSum % 10 == 0)` and prefix/length conditions are met, the card number is **valid**; otherwise, it is **invalid**.

---

## Possible Error Points
* **Integer Overflow:** Standard `int` data types overflow when handling 13-to-16-digit numbers. The variable storing the card number must be a 64-bit integer (`long long`).
* **Input Failure (Non-Numeric Inputs):** If a user enters spaces, hyphens, or non-numeric characters, `cin >> cardNumber` will fail, leading to unhandled streams or incorrect evaluations.
* **Leading Zero Loss:** Integer data types automatically drop leading zeros (e.g., `0123...`). Credit cards starting with `0` require string handling rather than pure integer arithmetic.
* **Incorrect Digit Step Increment:** Incorrectly dividing by `10` instead of `100` during digit iteration will evaluate every digit instead of strictly odd or even positions.