#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    int num1, num2, num3;

    // Declare integer pointers
    int* ptr1;
    int* ptr2;
    int* ptr3;

    // Get user input
    cout << "Enter three integer values:\n";

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter third number: ";
    cin >> num3;

    // Allocate dynamic memory using new operator
    ptr1 = new int;
    ptr2 = new int;
    ptr3 = new int;

    // Assign values to dynamically allocated memory
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the values and memory addresses
    cout << "\nDisplaying values and memory addresses:\n";
    cout << "----------------------------------------\n";

    cout << "Variable num1: " << num1 << "\tAddress: " << &num1 << endl;
    cout << "Pointer ptr1: " << *ptr1 << "\tAddress: " << ptr1 << endl << endl;

    cout << "Variable num2: " << num2 << "\tAddress: " << &num2 << endl;
    cout << "Pointer ptr2: " << *ptr2 << "\tAddress: " << ptr2 << endl << endl;

    cout << "Variable num3: " << num3 << "\tAddress: " << &num3 << endl;
    cout << "Pointer ptr3: " << *ptr3 << "\tAddress: " << ptr3 << endl;

    // Free dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    // Set pointers to nullptr after deletion
    ptr1 = nullptr;
    ptr2 = nullptr;
    ptr3 = nullptr;

    return 0;
}
