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
    int promoIDs[3];
    promoIDs[0] = 1;
    promoIDs[1] = 5;
    promoIDs[2] = 10;
    std::cout << "--- Today's Featured Books (IDs) ---" << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Book ID: " << promoIDs[i] << std::endl;
    }
    
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
   // bool booksAreSorted = false; 
    while(true) {
        // ... Admin menu and switch statement ...
        // Example case:
        // case 1: addBook(libraryBooks); booksAreSorted = false; break;
        // case 7: showPromotionalBooks(); break; // <-- Your new array function
             int choice;
        std::cout << "\n======= ADMIN MENU =======\n";
        std::cout << "1. Show Promotional Books\n";
        std::cout << "2. Exit to Login Menu\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear(); // clear the fail state
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore invalid input
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
            case 1:
                showPromotionalBooks();
                break;
            case 2:
                return;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    }
}

void runUserSession() { /* ... Provided ... */
  std::cout << "\nUser session is under development.\n"; }
// [The full code for main, runAdminSession, etc. would be provided to the student]
// [as it acts as the test harness for their implemented functions.]