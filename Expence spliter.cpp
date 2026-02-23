#include <iostream>
#include <string>
using namespace std;

//<=================================================== Base Class ===============================================================>
class ExpenseSplitter
{
protected:
    string id = "admin";
    string pass = "admin@1";
    string userName[10];
    float paidAmount[10];
    float owesAmount[10];
    string expenseDesc[50];
    string expensePaidBy[50];
    float expenseAmount[50];
    int totalUsers;
    int totalExpenses;
    friend int main();

public:
    string option;
    string uid;
    string upass;
    char op;

    ExpenseSplitter()
    {
        totalUsers = 0;
        totalExpenses = 0;
        for (int i = 0; i < 10; i++)
        {
            userName[i] = "";
            paidAmount[i] = 0;
            owesAmount[i] = 0;
        }
        for (int i = 0; i < 50; i++)
        {
            expenseDesc[i] = "";
            expensePaidBy[i] = "";
            expenseAmount[i] = 0;
        }
    }
};

//<================================================= Inheritance ======================================================>
class Management : public ExpenseSplitter
{
public:
    void addUsers();
    void addExpenses();
    void calculateOwes();
    void showSummary();
    int startSystem();
};

Management s1;

//<================================================= Add Users Function ======================================================>
void Management::addUsers()
{
    cout << "<------------------ ADD USERS ------------------->" << endl << endl;
    cout << "Enter number of users: ";
    cin >> totalUsers;
    cin.ignore();

    for (int i = 0; i < totalUsers; i++)
    {
        cout << "Enter name of user " << i + 1 << ": ";
        getline(cin, userName[i]);
        paidAmount[i] = 0;
        owesAmount[i] = 0;
    }

    cout << "Users added successfully!" << endl;
}

//<================================================= Add Expenses Function ======================================================>
void Management::addExpenses()
{
    cout << "<------------------ ADD EXPENSES ------------------->" << endl << endl;
    cout << "Enter number of expenses to add: ";
    cin >> totalExpenses;
    cin.ignore();

    for (int i = 0; i < totalExpenses; i++)
    {
        string paidBy;
        float amount;
        string desc;

        cout << "Expense " << i + 1 << " description: ";
        getline(cin, desc);
        cout << "Paid by (user name): ";
        getline(cin, paidBy);
        cout << "Amount: ";
        cin >> amount;
        cin.ignore();

        bool found = false;
        for (int j = 0; j < totalUsers; j++)
        {
            if (userName[j] == paidBy)
            {
                paidAmount[j] += amount;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "User not found! Expense skipped." << endl;
        else
        {
            expenseDesc[i] = desc;
            expensePaidBy[i] = paidBy;
            expenseAmount[i] = amount;
            cout << "Expense added successfully!" << endl;
        }
    }
}

//<================================================= Calculate Owes Function ======================================================>
void Management::calculateOwes()
{
    float total = 0;
    for (int i = 0; i < totalUsers; i++)
        total += paidAmount[i];

    float perPerson = total / totalUsers;

    for (int i = 0; i < totalUsers; i++)
        owesAmount[i] = perPerson - paidAmount[i];
}

//<================================================= Show Summary Function ======================================================>
void Management::showSummary()
{
    calculateOwes();
    cout << endl << "<------------------ SUMMARY ------------------->" << endl << endl;

    cout << "All Expenses:" << endl;
    cout << "Description\t\tPaid By\t\tAmount" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < totalExpenses; i++)
    {
        cout << expenseDesc[i] << "\t\t" << expensePaidBy[i] << "\t\t" << expenseAmount[i] << endl;
    }

    cout << endl << "Per User Summary:" << endl;
    cout << "Name\t\tPaid\t\tOwes/Receives" << endl;
    cout << "---------------------------------------------" << endl;
    for (int i = 0; i < totalUsers; i++)
    {
        cout << userName[i] << "\t\t" << paidAmount[i] << "\t\t" << owesAmount[i] << endl;
    }

    cout << endl << "Simplified settlement suggestion:" << endl;
    for (int i = 0; i < totalUsers; i++)
    {
        if (owesAmount[i] > 0)
            cout << userName[i] << " should pay " << owesAmount[i] << endl;
        else if (owesAmount[i] < 0)
            cout << userName[i] << " should receive " << -owesAmount[i] << endl;
    }
}

//<================================================= Start System Function ======================================================>
int Management::startSystem()
{
    do
    {
        cout << endl << "<==================== EXPENSE SPLITTER ====================>" << endl << endl;
        cout << "1. Add Users" << endl;
        cout << "2. Add Expenses" << endl;
        cout << "3. Show Summary" << endl;
        cout << "4. Exit" << endl << endl;

        cout << "Enter your option--> ";
        cin >> option;
        cin.ignore();

        if (option == "1")
            addUsers();
        else if (option == "2")
            addExpenses();
        else if (option == "3")
            showSummary();
        else if (option == "4")
            cout << "Exiting Expense Splitter..." << endl;
        else
            cout << "Invalid input!!!" << endl;

    } while (option != "4");

    return 0;
}

//<================================================= Main Function ======================================================>
int main()
{
    cout << "<=======================================================================>" << endl << endl;
    cout << "                  Welcome to Expense Splitter System                     " << endl << endl;
    cout << "<=======================================================================>" << endl << endl;

    do
    {
        cout << "<-------------------------------------------------------------------->" << endl;
        cout << "                               LOGIN PAGE                             " << endl;
        cout << "<-------------------------------------------------------------------->" << endl << endl;

        cout << "Enter User ID --> ";
        cin >> s1.uid;

        if (s1.uid == s1.id)
        {
            do
            {
                cout << "Enter Password--> ";
                cin >> s1.upass;
                if (s1.upass == s1.pass)
                {
                    cout << endl << "Login Successful!" << endl << endl;
                    s1.startSystem();
                }
                else
                {
                    cout << "-------------------------------------" << endl;
                    cout << "Invalid password! Try Again." << endl;
                }
            } while (s1.upass != s1.pass);
        }
        else
        {
            cout << endl;
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
            cout << "        Invalid User ID !!       " << endl;
            cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl << endl;
            cout << "<-------------------------------->" << endl;
            cout << "    Do you want to try again ?    " << endl;
            cout << "   Enter Y for yes and N for no   " << endl;
            cout << "<-------------------------------->" << endl << endl;
            cout << "Enter Your Choice--> ";
            cin >> s1.op;
            cout << "==========================" << endl;

            if (s1.op == 'n' || s1.op == 'N')
            {
                cout << endl << "Exiting system. Thank you!" << endl;
                break;
            }
        }
    } while (s1.op != 'N' && s1.op != 'n');
}

