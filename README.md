[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/Cwn7lepA)
# 📚 C++ Library Management System – Assignment Guide

Welcome to your C++ project!  
Your goal is to complete a **Library Management System** by filling in the missing code.  
The main structure is already built for you — just follow the `// STUDENT TASK:` comments in the code files.

---
## 💾 How to Save Your Progress with Git

It's a good practice to save your work after completing each step. This creates a checkpoint you can return to if something goes wrong.

1.  **Create a New Branch**
    Create your own branch to work on. This keeps your changes separate from the main codebase.
    ```bash
    # Creates a new branch and switches to it
    git checkout -b your-name
    ```

2.  **Add & Commit Your Code**
    After you've made changes (e.g., after finishing a step), you need to save them. First, you "stage" them with `git add`, then you "commit" them with a message describing your work.
    ```bash
    # Stage all changed files
    git add .

    # Save the staged files with a clear message
    git commit -m "feat: Complete Step 3 - Add and Display Books"
    ```

3.  **Push Your Code**
    Push your branch to the remote repository (like GitHub). This uploads your saved commits.
    ```bash
    # Upload your branch
    git push origin your-name
    ```
4.  **Update Your Code**
    pull your branch from the remote repository (like GitHub). This update your friends commits.
    ```bash
    # Upload your branch
    git pull origin main
    ```
---

## 📂 Step 1: Understand the Project Files

Before writing code, explore how the files are organized:

- **`models/`** – Contains data blueprints, like the `Book` struct.
- **`utils/`** – Holds the main logic. Most of your work will be in `LibraryUtils.cpp`.
- **`main.cpp`** – Runs the program, shows menus, and calls your functions.
- **`main.bat`** – Double-click to compile and run the project easily.

---

## 📝 Step 2: Create the Book Blueprint

**File:** `models/Book.h`

You can’t store books without knowing their details.  

1. Open **`Book.h`**.  
2. Inside `struct Book { ... }`, add:
   - `id`
   - `title`
   - `author`
   - `isAvailable`

---

## ➕ Step 3: Add and Display Books

**File:** `utils/LibraryUtils.cpp`

1. **`addBook`** – Ask the user for a title and author, then store the book.  
2. **`displayAllBooks`** – Loop through all books and print them.

**Test:** Run `main.bat`. You should be able to add and view books.

---

## 🎯 Step 4: Find and Modify Books (Pointers)

**File:** `utils/LibraryUtils.cpp`

1. **`findBookById`** – Locate a book by ID.  
   - Return its memory address (`&`) if found, otherwise `nullptr`.
2. **`checkOutBook`** & **`returnBook`** –  
   - Use `findBookById` to get a direct link to the book.
   - Change `isAvailable` to:
     - `false` for checkout
     - `true` for return

---

## ⭐ Step 5: Featured Books List (Arrays)

**File:** `main.cpp`

1. **`showPromotionalBooks`** – Create an `int` array with book IDs (e.g., `{1, 5, 10}`).  
2. Loop through the array and print the IDs.

---

## 🔍 Step 6: Sorting & Searching (Algorithms)

**File:** `utils/LibraryUtils.cpp`

1. **Bubble Sort** – Implement in `sortBooksByTitle` to arrange books alphabetically by title.  
2. **Binary Search** – Implement in `binarySearchByTitle` to quickly find a book.  
   - **Important:** Binary Search works only if the list is already sorted.

---

## ✅ Final Note

Follow the steps in order and test your code frequently.  
Good luck — you’ve got this! 🚀
