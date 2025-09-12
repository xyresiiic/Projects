#include <iostream>
#include <string>
using namespace std;

class store {
public:
    string name;
    string email;
    string contact;
    string address;
    string password;
    string feedback1;
    double totalAmount = 0;   // total bill amount

    void userinfo();
    void logininfo();
    void items();
    void payment();
    void feedback();
    void viewtotal();
};
store s1;

// Register user
void store::userinfo() {
    cout << "<-------- Welcome to Store ---------->" << endl;
    cout << "Enter your details " << endl;
    cout << "Name : ";
    cin >> name;
    cout << "Email : ";
    cin >> email;
    cout << "Contact : ";
    cin >> contact;
    cout << "Address : ";
    cin >> address;
    cout << "Password : ";
    cin >> password;
    cout << endl;

    cout << "Registration successful! You can login now.\n" << endl;
}

// Login
void store::logininfo() {
    string useremail;
    string userpassword;

    cout << "Enter Email : ";
    cin >> useremail;
    cout << "Enter Password : ";
    cin >> userpassword;

    if ((userpassword == password) && (useremail == email)) {
        cout << "Login Successful!\n" << endl;
    } else {
        cout << "Wrong Email or Password\n" << endl;
    }
}

// Select items
void store::items() {
    int choice;
    int price[9] = {75, 55, 500, 78, 45, 68, 67, 78, 120};

    do {
        cout << "\n----- Grocery categories -----" << endl;
        cout << "1. Food Grain          75/-" << endl;
        cout << "2. Spices              55/-" << endl;
        cout << "3. Oil & Ghee          500/-" << endl;
        cout << "4. Milk                78/-" << endl;
        cout << "5. Beverages           45/-" << endl;
        cout << "6. Snacks              68/-" << endl;
        cout << "7. Fruits              67/-" << endl;
        cout << "8. Cleaning            78/-" << endl;
        cout << "9. Personal care       120/-" << endl;
        cout << "10. Exit" << endl;

        cout << "Enter category number: ";
        cin >> choice;

        if (choice >= 1 && choice <= 9) 
		{
            cout << "Added item to cart. Price = " << price[choice - 1] << " Rs" << endl;
            totalAmount += price[choice - 1];
            
        }
		
		 else if (choice == 10) 
		{
            cout << "Exiting item selection..." << endl;
        }
		
		 else {
            cout << "Invalid choice" << endl;
        }

    } while (choice != 10);

    cout << "Total Bill till now = " << totalAmount << " Rs\n" << endl;
}

// Payment
void store::payment() {
    if (totalAmount == 0) {
        cout << "Cart is empty. Add items before payment!" << endl;
        return;
    }

    cout << "\n----- Payment Options -----" << endl;
    cout << "Total Amount: " << totalAmount << " Rs" << endl;
    cout << "1. PhonePe" << endl;
    cout << "2. Paytm" << endl;
    cout << "3. Google Pay" << endl;
    cout << "4. Cash" << endl;
    cout << "5. Debit card" << endl;
    int choice;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Payment successful using PhonePe!" << endl;
        break;
    case 2:
        cout << "Payment successful using Paytm!" << endl;
        break;
    case 3:
        cout << "Payment successful using Google Pay!" << endl;
        break;
    case 4:
        cout << "Payment successful using Cash!" << endl;
        break;
    case 5:
        cout << "Payment successful using Debit Card!" << endl;
        break;
    default:
        cout << "<----- Invalid Payment Option ----->\nPayment failed!" << endl;
        return;
    }

    cout << "Thank you for your Payment!" << endl;
    totalAmount = 0;  // empty cart after payment
}

// Feedback
void store::feedback() {
    cout << "\nPlease provide your feedback: ";
    cin.ignore();   // clear buffer
    getline(cin, feedback1);
    cout << "Thanks for your feedback!\n" << endl;
}

// View Cart
void store::viewtotal() {
    cout << "\nCurrent total Amount: " << totalAmount << " Rs" << endl;
}

// ===================Main function===================
int main() {
    int mainChoice;

    do {
        cout << "\n===== Welcome to Billing System =====" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login & Menu" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            s1.userinfo();   // Register
        }
        else if (mainChoice == 2) {
            s1.logininfo();  // Login

            int choice;
            do {
                cout << "\n<---- Menu ---->" << endl;
                cout << "1. Select Item" << endl;
                cout << "2. View Totel" << endl;
                cout << "3. Payment" << endl;
                cout << "4. Feedback" << endl;
                cout << "5. Logout" << endl;
                cout << "Enter your choice: ";
                cin >> choice;

                if (choice == 1) {
                    s1.items();
                }
                else if (choice == 2) {
                    s1.viewtotal();
                }
                else if (choice == 3) {
                    s1.payment();
                }
                else if (choice == 4) {
                    s1.feedback();
                }
                else if (choice == 5) {
                    cout << "Logging out..." << endl;
                }
                else {
                    cout << "Invalid choice!" << endl;
                }

            } while (choice != 5);
        }
        else if (mainChoice == 3) 
		{
            cout << "Exiting system. Goodbye!" << endl;
            break;
        }
        else 
		{
            cout << "Invalid choice! Please enter 1, 2, or 3." << endl;
        }

    } while (mainChoice != 3);

    return 0;
}

