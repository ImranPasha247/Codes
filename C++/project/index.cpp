#include <bits/stdc++.h>
using namespace std;

const int TABLE_SIZE = 100;

struct Contact {
    string name;
    string phone;
    Contact* next;
};

Contact* hashTable[TABLE_SIZE] = {nullptr};

int hashFunction(string key) {
    int sum = 0;
    for (char ch : key) sum += ch;
    return sum % TABLE_SIZE;
}

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

bool matchName(string fullName, string keyword) {
    fullName = toLowerCase(fullName);
    keyword = toLowerCase(keyword);
    stringstream ss(fullName);
    string word;
    while (ss >> word) {
        if (word == keyword) return true;
    }
    return false;
}

void insertContact(string name, string phone) {
    if (name.empty() || phone.empty()) {
        cout << "Name or phone number cannot be empty.\n";
        return;
    }

    int index = hashFunction(name);
    Contact* current = hashTable[index];

    while (current) {
        if (current->name == name) {
            cout << "Contact with this name already exists.\n";
            return;
        }
        current = current->next;
    }

    Contact* newContact = new Contact{name, phone, nullptr};
    newContact->next = hashTable[index];
    hashTable[index] = newContact;

    cout << "Contact added successfully!\n";
}

void searchContact(string name) {
    if (name.empty()) {
        cout << "Search keyword cannot be empty.\n";
        return;
    }

    string keyword = toLowerCase(name);
    bool found = false;

    for (int i = 0; i < TABLE_SIZE; i++) {
        Contact* current = hashTable[i];
        while (current) {
            if (matchName(current->name, keyword)) {
                cout << "Name: " << current->name << ", Phone: " << current->phone << endl;
                found = true;
            }
            current = current->next;
        }
    }

    if (!found) cout << "Contact not found.\n";
}

void deleteContact(string name) {
    if (name.empty()) {
        cout << "Name cannot be empty.\n";
        return;
    }

    int index = hashFunction(name);
    Contact* current = hashTable[index];
    Contact* prev = nullptr;

    while (current) {
        if (current->name == name) {
            if (!prev) hashTable[index] = current->next;
            else prev->next = current->next;
            delete current;
            cout << "Contact deleted successfully!\n";
            return;
        }
        prev = current;
        current = current->next;
    }

    cout << "Contact not found.\n";
}

void displayContacts() {
    bool hasContacts = false;
    for (int i = 0; i < TABLE_SIZE; i++) {
        Contact* current = hashTable[i];
        while (current) {
            cout << "Name: " << current->name << ", Phone: " << current->phone << endl;
            current = current->next;
            hasContacts = true;
        }
    }
    if (!hasContacts) {
        cout << "No contacts to display.\n";
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

        if (!(cin >> choice)) {
            cin.clear(); // clear error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
            cout << "Invalid input. Please enter a number between 1 and 5.\n";
            continue;
        }

        cin.ignore(); // clean leftover newline

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
                cout << "Invalid choice. Please select between 1 and 5.\n";
        }
    }
}