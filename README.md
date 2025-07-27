# cpp-logics
For core logic-based programs like reversing a number, palindrome checks, etc.

# 🧠 C++ Logic Building Programs

This repository, `cpp-logics`, contains small but powerful logic-based programs written in C++. These programs are excellent for beginners looking to strengthen their foundational understanding of conditionals, loops, string handling, and number manipulation.

---

## 🗂️ Programs Included

### 1. 🔐 Password Verification (No Masking, No conio.h)

A simple password verification system that checks user input against a predefined password. It includes:
- A 3-attempt security limit
- A fun hidden password (`open-sesame`) as an Easter egg
- Clear success and failure messages

📌 *Great for understanding basic input handling and string comparisons.*

🔍 **File:** `basic_password_check.cpp`

---

### 2. 🔁 Reverse a Number (Without Using Arrays or Strings)

This program takes an integer input and reverses it mathematically using:
- Modulus operator to extract digits
- Simple arithmetic to rebuild the reversed number.



## Why This Repo Exists

Too often, beginners jump into complex problems without mastering the core logic-building exercises. This repo slows things down — encouraging you to:
- Think logically, step by step
- Understand how loops and conditions work
- Solve real-world subproblems often used in interviews

---

## Algorithm for Password Checker
1. Start the program.
2. Define the correct password (e.g., "Vaish@123").
3. Initialize the number of attempts to 0.
4. Loop until attempts reach 3:
   a. Ask the user to enter a password.
   b. Read the input.
   c. If the input is "open-sesame", print special access granted and exit.
   d. If the input matches the correct password, print access granted and exit.
   e. If not, print incorrect password and increment attempts.
5. If 3 attempts are exhausted, print access denied.
6. End the program.


