#include <iostream>
#include <string>
using namespace std;

const int TABLE_SIZE = 100;

// Contact structure
struct Contact {
    string name;
    string phone;
    Contact* next; // for chaining
};

// Hash Table
Contact* hashTable[TABLE_SIZE];

// Hash Function
int hashFunction(string key) {
    int sum = 0;
    for (char ch : key) {
        sum += ch;
    }
    return sum % TABLE_SIZE;
}

// Insert Contact
void insertContact(string name, string phone) {
    int index = hashFunction(name);
    Contact* newContact = new Contact{name, phone, nullptr};

    if (hashTable[index] == nullptr) {
        hashTable[index] = newContact;
    } else {
        // Add at the beginning (chaining)
        newContact->next = hashTable[index];
        hashTable[index] = newContact;
    }

    cout << "Contact added successfully!\n";
}

// Search Contact
void searchContact(string name) {
    int index = hashFunction(name);
    Contact* current = hashTable[index];
    while (current != nullptr) {
        if (current->name == name) {
            cout << "Name: " << current->name << ", Phone: " << current->phone << endl;
            return;
        }
        current = current->next;
    }
    cout << "Contact not found.\n";
}

// Delete Contact
void deleteContact(string name) {
    int index = hashFunction(name);
    Contact* current = hashTable[index];
    Contact* prev = nullptr;

    while (current != nullptr) {
        if (current->name == name) {
            if (prev == nullptr) {
                hashTable[index] = current->next;
            } else {
                prev->next = current->next;
            }
            delete current;
            cout << "Contact deleted successfully!\n";
            return;
        }
        prev = current;
        current = current->next;
    }
    cout << "Contact not found.\n";
}

// Display All Contacts
void displayContacts() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        Contact* current = hashTable[i];
        while (current != nullptr) {
            cout << "Name: " << current->name << ", Phone: " << current->phone << endl;
            current = current->next;
        }
    }
}

int main() {
    int choice;
    string name, phone;

    while (true) {
        cout << "\n--- Phone Book Menu ---\n";
        cout << "1. Add Contact\n";
        cout << "2. Search Contact\n";
        cout << "3. Delete Contact\n";
        cout << "4. Display All Contacts\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // clear input buffer

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter phone: ";
                getline(cin, phone);
                insertContact(name, phone);
                break;
            case 2:
                cout << "Enter name to search: ";
                getline(cin, name);
                searchContact(name);
                break;
            case 3:
                cout << "Enter name to delete: ";
                getline(cin, name);
                deleteContact(name);
                break;
            case 4:
                displayContacts();
                break;
            case 5:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
