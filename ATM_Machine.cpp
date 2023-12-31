#include <iostream>
using namespace std;
#define  long long double double

int main(){

    int choice;
    double balance=1000;//taking initial balance
    double withdrawalAmount,depositAmount;
    string accountNumber = "1234567890";//intialising and declaring account number
    string pin = "1234";
    // ATM login
    string enteredAccountNumber, enteredPin;
    cout << "Welcome to the ATM machine!\n";
    cout << "Please enter your account number: ";
    cin >> enteredAccountNumber;
    cout << "Please enter your PIN: ";
    cin >> enteredPin;

    // Validate account details with account number and pin 
    if (enteredAccountNumber != accountNumber || enteredPin != pin) {
        cout << "Invalid account number or PIN. Exiting...\n";
        return 0;
    }
    do { //running the loop until exit
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Deposit Money\n";
        cout << "4. Exit\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: Rs" << balance << "\n";
                break;
            case 2:
                cout << "Enter the amount to withdraw: Rs";
                cin >> withdrawalAmount;
                if (withdrawalAmount > balance) {
                    cout << "Insufficient funds!\n";
                } else {
                    balance -= withdrawalAmount;
                    cout << "Withdrawal successful.Your current balance is: Rs" << balance << "\n";
                }
                break;
            case 3:
                cout << "Enter the amount to deposit: Rs";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Thankyou for depositing .Your current balance is: Rs" << balance << "\n";
                break;
            case 4:
                cout << "Thank you for banking with us,have a nice day!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);
    return 0;

}