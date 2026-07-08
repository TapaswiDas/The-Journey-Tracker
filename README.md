# 🚀 My First C Projects

Welcome to my repository! I am an incoming B.Tech freshman profiling my self-taught coding journey before stepping onto college campus. I built these projects completely from scratch to get a solid, practical head start on C programming mechanics, logic design, and problem-solving.

The primary goal of this repository is to track my growth as I transition into my undergraduate engineering studies, moving from core control flow up to advanced memory and data structures.

---

## 🛠️ Projects Showcase

### 🧮 Terminal Calculator (`calculator.c`)
This project is a terminal-based interactive calculator designed to master multi-operational control flow and string parsing in C. The program takes two decimal numbers and prompts the user to select an operation—ranging from basic arithmetic to floating-point division. It utilizes the standard `<string.h>` library for robust operation selection via `strcmp` and implements safe string formatting by stripping trailing newline characters with `strcspn`. The codebase highlights a clean execution loop that allows for continuous, seamless computations based on real-time user validation.

### 🏦 ATM Simulator (`atm_simulator.c`)
This project is a terminal-based banking application that simulates a real-world Automated Teller Machine by focusing on persistent state management and defensive programming. The program handles a dynamic user account balance that continuously updates across multiple deposit and withdrawal cycles without resetting during loop iterations. It features strict overdraft protection logic to block invalid transactions before they can cause an unsafe negative balance. Additionally, the code implements a robust `getchar()` stream-flushing mechanism to cleanly manage the input buffer between numeric `scanf()` and string `fgets()` inputs, ensuring a bug-free user loop.


### 🎯 Proximity Number Guessing Game Engine
A modular, console-based interactive number guessing game written in C. This project marks a hands-on development milestone focused on mastering robust programmatic logic, functional scope discipline, and structural control flow without relying on editor autocomplete tools.

The application cleanly separates user interface, execution routines, and core logic. It features a standalone evaluation engine that processes user guesses against a dynamically seeded random number (1–100). Instead of standard static feedback, the program tracks structural states to calculate the exact mathematical distance of a guess, providing responsive proximity hints that actively guide the player toward a perfect win.

---

## 📈 Technical Concepts Covered So Far
* Persistent State Management (Tracking variables across active loops)
* Standard Input/Output streaming & Buffer Cleansing (`getchar()`, `scanf()`, `fgets()`)
* String Manipulation & Null-Terminator Management (`strcmp()`, `strcspn()`)
* Multi-layered conditional nesting (`if`, `else if`, `else`)

## 🎯 Next Milestone
My next step is to level up these programs by introducing **Arrays** to manage multi-user data slots, followed by breaking the monolithic code down into clean, reusable **Functions**.
