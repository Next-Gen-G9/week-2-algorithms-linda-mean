#include <iostream>
#include <vector>
#include <limits>
#include "models/Book.h"
#include "models/User.h"
#include "utils/LibraryUtils.h"

// --- Forward Declarations for Menu Functions ---
void runAdminSession();
void runUserSession();

// STUDENT TASK: Implement a function that uses a fixed-size array.
// This exercise covers: arrays
void showPromotionalBooks() {
    // 1. Declare a fixed-size array of type 'int' named 'promoIDs'.
    // 2. Initialize it with three hard-coded book IDs, for example: {1, 5, 10}.
    // 3. Print a header, like "--- Today's Featured Books (IDs) ---".
    // 4. Write a loop to iterate through the 'promoIDs' array and print each ID.

    
}

// --- MAIN APPLICATION (FRAMEWORK) ---

int main() {
    // This part handles login and routing to the correct session.
    // It is provided as a framework for your functions.
    std::vector<User> users = loadUsers();
    while (true) {
        // ... Login menu and logic ...
        // [The full menu logic from the previous complete answer would go here]
        Role userRole = loginUser(users); // Example call
        if (userRole == Role::ADMIN) {
            runAdminSession();
        } else if (userRole == Role::USER) {
            runUserSession();
        }
    }
    return 0;
}

void runAdminSession() {
    // The main loop for the admin is provided.
    // It calls the functions you will implement in LibraryUtils.cpp.
    std::vector<Book> libraryBooks = loadBooks();
    bool booksAreSorted = false;
    while(true) {
        // ... Admin menu and switch statement ...
        // Example case:
        // case 1: addBook(libraryBooks); booksAreSorted = false; break;
        // case 7: showPromotionalBooks(); break; // <-- Your new array function
    }
}

void runUserSession() { /* ... Provided ... */ }
// [The full code for main, runAdminSession, etc. would be provided to the student]
// [as it acts as the test harness for their implemented functions.]