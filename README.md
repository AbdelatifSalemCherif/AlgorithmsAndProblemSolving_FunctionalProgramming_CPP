# 🚀 C++ Functional Programming & Problem-Solving Portfolio
Welcome to my C++ repository, a professional collection of **174 algorithmic challenges** structured for scalability, modularity, and clean code principles. This project is designed as an educational framework to master C++ through the lens of Functional Programming and Software Architecture.

## 🏗️ Design Philosophy: "Divide and Conquer"
The project is built on a unified architectural pattern applied across 8 distinct categories. By treating each category as an isolated module, I have achieved a highly maintainable environment where complexity is eliminated.

Core Principles Applied:
- ***Uniform Architecture:*** Every problem category follows the exact same structure. Once you understand the design of one, you instantly master them all.

- ***Centralized Orchestration:*** A single Main.cpp entry point allows users to toggle specific problems on/off via simple commenting, creating a seamless testing experience.

- ***DRY (Don't Repeat Yourself):*** A dedicated HighlyUsedLibraries folder provides shared utility functions, ensuring that common logic is never duplicated.

- ***Modular Isolation:*** Each category functions as an independent project, keeping the codebase clean, organized, and decoupled.

## 📂 Repository Structure & Categories
The repository organizes the 174 problems into **8 modular categories**, each encapsulated in its own folder. This structure enables clear separation of concerns and facilitates focused learning.

| Category | Description | Total |
| :---: | :---: | :---: |
| **Arrays** | Advanced manipulation and algorithm implementation. | **21** Problems |
| **Date** | Handling calendar logic and time-based calculations. | **29** Problems |
| **Files** | I/O operations and file system data management. | **7** Problems |
| **Math** | Complex mathematical algorithms and logic. | **40** Problems |
| **Matrices** | Multi-dimensional array operations. | **20** Problems |
| **Numbers** | Numerical analysis and digit-based problem solving. | **11** Problems |
| **Print** | Aesthetic console output and pattern formatting. | **18** Problems |
| **Strings** | String parsing and advanced text processing. | **28** Problems |

### Tree of each Category : 
```
📂 CategoryOfPreblems/
|
├──📂 Problems/                          # Source code for each problem 
|   ├── Problem 1.cpp
|   ├── ...
|   ├── ...
|   ├── ...
|   └── Problem N.cpp
|
├──📂 ProblemsCollectionHeader/
│   └── ProblemsCollectionHeader.h         # Groping all Problems in one header file          
|
└──📂 Main/
   └── Main.cpp                             # The main entry point linking all problems
    
```

## ⚙️ Modular Architecture (The "Uniform" Design)
To ensure the codebase remains readable and scalable, every category follows a strict, repeatable internal structure:

- `ProblemCategory.cpp`: Contains the implementations of all logic within that category.

- `ProblemCategoryCollection.h`: A dedicated header file acting as a central interface for the category, declaring all functions and namespaces.

- `Main.cpp` ***(Central Orchestrator):*** The sole entry point for the entire repository. It imports the required collection headers and provides a clean interface to execute specific problems by simply toggling comments.

***Why this design?*** This unified approach drastically reduces cognitive load. Once you understand the workflow of one category, you have mastered the navigation of all 174 problems.

## 🚀 How to Run
Running any of the ***174 problems*** is straightforward, designed for maximum efficiency:

- Open the `Main.cpp` file located in the Main directory.

- Explore the list of function calls representing the problems from different categories.

- Toggle the desired project by removing the comment (//) from its line.

- Comment out other active functions to ensure a focused execution.

- Compile & Run (e.g., using Ctrl+F5 in Visual Studio).

Created by 
***Abdelatif SALEM CHERIF***
