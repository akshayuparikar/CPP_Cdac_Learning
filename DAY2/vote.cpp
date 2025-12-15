//11.Voting Eligibility Validation System
//Functions:inputDOB(),calculateAge(),checkEligibility(),printResult()

#include <iostream>
using namespace std;
int birthYear;
int currentYear = 2025; // You can update this to the current year
int age;
void inputDOB() {
    cout << "Enter your birth year: ";
    cin >> birthYear;
}
void calculateAge() {
    age = currentYear - birthYear;
}
void checkEligibility() {
    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }
}
void printResult() {
    cout << "Your age is: " << age << endl;
    checkEligibility();
}
int main() {
    inputDOB();
    calculateAge();
    printResult();
    return 0;
}