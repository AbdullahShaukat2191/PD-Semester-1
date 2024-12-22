// Create a Business Applicationm with CRUD Operations and other user and Admin Functionalities
#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
using namespace std;

void Header();
void SubHeader();
string LoginPage();
bool IfUser(string, string);
string AdminMenu();
string UserMenu(string);
void Catalogue();
void ShowUsers();
void ShowCart(string[], float[], float[], float[], int[]);
void ShowCheckOut(string[], float[], float[], float[], int[]);
void ManageStock();
void UpdateStock();
void DeleteStock();
void ExitProgram();
bool isValidPassword(string);
bool isValidUsername(string);
bool addUser(string, string);
float calculateCostPerProduct(float, int, float);
void printProductData(string, float, int, float, float);
void loadUsers();
void saveUsers();
void saveProducts();
void loadProducts();
string getField(string, int);
int myStoi(string);

const int ArraySize = 100;
int userCount = 0;
int productCount = 0;

string users[ArraySize] = {};
string passwords[ArraySize] = {};
string role[ArraySize] = {};

string productName[ArraySize] = {};
int productPrice[ArraySize] = {};
int productQuantity[ArraySize] = {};
int productTax[ArraySize] = {};

main()
{
    loadUsers();
    loadProducts();
    system("cls");

    string LoginOption = "";
    string AdminOption = "";
    string UserOption = "";

    while (LoginOption != "3")
    {
        LoginOption = LoginPage();
        if (LoginOption == "1")
        {
            system("cls");
            Header();
            SubHeader();
            cout << "SignUp Menu: " << endl
                 << endl;
            string newName;
            string newPassword;

            cout << "Enter Your Name: ";
            cin >> newName;
            cout << "Create Your Password: ";
            cin >> newPassword;
            cout << endl;

            if (addUser(newName, newPassword))
            {
                cout << "User Added Successfully!" << endl;
                getch();
                system("cls");
            }
            else
            {
                cout << "Failed to add user!" << endl;
                cout << "Ensure that Username is Unique and Valid" << endl;
                getch();
                system("cls");
            }
        }
        else if (LoginOption == "2")
        {
            system("cls");
            Header();
            SubHeader();
            cout << "SignIn Menu: " << endl
                 << endl;
            string name;
            string password;

            cout << "Enter Your Name: ";
            cin >> name;
            cout << "Password: ";
            cin >> password;

            if (name == "Abdullah" && password == "2191")
            {
                while (AdminOption != "4")
                {
                    system("cls");
                    AdminOption = AdminMenu();

                    if (AdminOption == "1")
                    {
                        ShowUsers();
                    }
                    else if (AdminOption == "2")
                    {
                        Catalogue();
                    }
                    else if (AdminOption == "3")
                    {
                        ManageStock();
                    }
                    else if (AdminOption == "4")
                    {
                        ExitProgram();
                    }
                    else
                    {
                        cout << "Please Enter a Valid Option!" << endl;
                        getch();
                        system("cls");
                    }
                }
            }
            else if (IfUser(name, password))
            {
                while (UserOption != "5")
                {
                    system("cls");

                    string names[3] = {"\t", "\t", "\t"};
                    float price[3] = {0, 0, 0}, tax[3] = {0, 0, 0}, total[3] = {0, 0, 0};
                    int quantity[3] = {0, 0, 0};
                    string product[2], decision;

                    UserOption = UserMenu(name);

                    if (UserOption == "1")
                    {
                        Catalogue();
                    }
                    else if (UserOption == "2")
                    {
                        system("cls");
                        Header();
                        SubHeader();

                        for (int i = 0; i < 3; i++)
                        {
                            cin.ignore();
                            cout << "Enter the Name of Product " << i + 1 << ": ";
                            getline(cin, names[i]);
                            while (true)
                            {
                                bool number = false;
                                for (int j = 0; j < names[i].length(); j++)
                                {
                                    if (names[i][j] >= '0' && names[i][j] <= '9')
                                    {
                                        number = true;
                                        break;
                                    }
                                }
                                if (number)
                                {
                                    cout << "Please Enter a Valid Product name!" << endl
                                         << endl;
                                    cout << "Enter the Name of Product " << i + 1 << ": ";
                                    getline(cin, names[i]);
                                }
                                else
                                {
                                    break;
                                }
                            }
                            cout << "Enter the Price: ";
                            cin >> price[i];
                            cout << "Enter the Quantity: ";
                            cin >> quantity[i];
                            cout << "Enter the Tax Rate on Product " << i + 1 << " (%): ";
                            cin >> tax[i];
                            cout << endl;

                            if (i != 2)
                            {
                                cout << "Would you like to add another Product? (Yes/No): ";
                                cin >> product[i];
                                cout << endl;

                                if (product[i] == "yes")
                                {
                                    continue;
                                }
                                else if (product[i] == "no")
                                {
                                    break;
                                }
                                else
                                {
                                    cout << "Invalid Option!" << endl;
                                    cout << "Care to Try again?" << endl;
                                    while (product[i] != "yes" || product[i] != "no")
                                    {
                                        cout << "Would you like to add another Product? (Yes/No): ";
                                        cin >> product[i];
                                        cout << endl;
                                        if (product[i] == "yes" || product[i] == "no")
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                        }

                        cout << "Would you like you Like to head to Cart or Checkout ?: ";
                        cin >> decision;

                        if (decision == "cart")
                        {
                            ShowCart(names, price, tax, total, quantity);
                            cout << endl;
                            cout << "Heading to Checkout..." << endl;
                            getch();

                            ShowCheckOut(names, price, tax, total, quantity);
                        }
                        else if (decision == "checkout")
                        {
                            ShowCheckOut(names, price, tax, total, quantity);
                        }
                    }
                    else if (UserOption == "3")
                    {
                        ShowCart(names, price, tax, total, quantity);
                    }
                    else if (UserOption == "4")
                    {
                        ShowCheckOut(names, price, tax, total, quantity);
                    }
                    else if (UserOption == "5")
                    {
                        ExitProgram();
                    }
                    else
                    {
                        cout << "Please Enter a Valid Option!" << endl;
                        getch();
                        system("cls");
                    }
                }
            }
            else
            {
                cout << "InValid Credidentials!" << endl;
                getch();
                system("cls");
            }
        }
        else if (LoginOption == "3")
        {
            ExitProgram();
        }
        else
        {
            cout << "Invalid Option!" << endl;
            getch();
            system("cls");
        }
    }
}

string LoginPage()
{
    Header();
    SubHeader();
    cout << "Login Menu: " << endl
         << endl;

    string option;

    cout << "How May we help you Today ? " << endl
         << endl;
    cout << "1. SignUp to Veezo Verpali: " << endl;
    cout << "2. SignIn to Veezo Verpali: " << endl;
    cout << "3. Exit the Program: " << endl
         << endl;
    cout << "Enter your Choice from the Above Options: ";
    cin >> option;

    return option;
}

bool IfUser(string name, string password)
{
    for (int i = 0; i < userCount; i++)
    {
        if (name == users[i] && password == passwords[i])
        {
            return true;
        }
    }
    return false;
}
bool isValidUsername(string newName)
{

    int count = 0;
    while (newName[count] != '\0')
    {
        count++;
    }

    if (count < 3)
        return false;

    for (int i = 0; i < userCount; i++)
    {
        if (users[i] == newName)
            return false;
    }

    return true;
}
bool isValidPassword(string password)
{
    for (int i = 0; i < password.length(); i++)
    {
        char ch = password[i];

        if (!((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') || (ch = ' ')))
        {
            return false;
        }
    }
    return true;
}
bool addUser(string newName, string newPassword)
{
    {
        if (userCount < ArraySize && isValidUsername(newName) && isValidPassword(newPassword))
        {
            users[userCount] = newName;
            passwords[userCount] = newPassword;
            userCount++;
            saveUsers();
            return true;
        }
    }
    return false;
}
string UserMenu(string name)
{
    Header();
    SubHeader();
    cout << "User Menu: " << endl
         << endl;

    string option;

    cout << "Welcome " << name << ", " << endl;
    cout << "What Are You Looking to Do ? " << endl
         << endl;
    cout << "1. View Catalogue: " << endl;
    cout << "2. Add Products: " << endl;
    cout << "3. Check your Cart: " << endl;
    cout << "4. Go to Checkout: " << endl;
    cout << "5. Exit Program: " << endl
         << endl;
    cout << "Please select your Option: ";
    cin >> option;
    if (option == "1" || option == "2" || option == "3" || option == "4" || option == "5")
    {
        cout << "You have Selceted Option: " << option << endl;
    }
    return option;
}

string AdminMenu()
{
    Header();
    SubHeader();
    cout << "Admin Menu: " << endl
         << endl;

    string option;

    cout << "Welcome Abdullah, " << endl;
    cout << "What Are You Looking to Do ?" << endl
         << endl;
    cout << "1. Check Users: " << endl;
    cout << "2. Check Stock: " << endl;
    cout << "3. Manage Stock: " << endl;
    cout << "4. Exit Program: " << endl
         << endl;
    cout << "Select your Option: ";
    cin >> option;
    if (option == "1" || option == "2" || option == "3" || option == "4")
    {
        cout << "You have Selceted Option: " << option << endl;
    }
    return option;
}

void ExitProgram()
{
    cout << endl;
    cout << "Thank You for Visiting Veezo Verpali, See you next Time !";
    Sleep(1000);
    system("cls");
}

void Catalogue()
{
    system("cls");
    Header();
    SubHeader();
    cout << "Catalogue: " << endl
         << endl;
    cout << "                   -Available Products-" << endl
         << endl;
    cout << " Product Name: \t Price:  In Stock: " << endl
         << endl;

    for (int i = 0; i < productCount; i++)
    {
        cout << i + 1 << ". " << productName[i] << "\t " << productPrice[i] << "\t " << productQuantity[i] << endl;
    }

    cout << endl
         << endl;

    cout << "Press any Key to Continue...";
    getch();
}

void ShowUsers()
{
    system("cls");
    Header();
    SubHeader();

    cout << "Current Users: " << endl
         << endl;
    cout << " User Name: \t Passwords:    Role: " << endl
         << endl;

    for (int i = 0; i < userCount; i++)
    {
        cout << i + 1 << ". " << users[i] << "\t " << passwords[i] << "\t       " << role[i] << endl;
    }

    cout << endl
         << endl;

    cout << "Press any Key to Continue...";
    getch();
}

void ManageStock()
{
    system("cls");
    Header();
    SubHeader();
    cout << "Stock Management Menu:" << endl
         << endl;

    string option;

    cout << "1. Update Stock: " << endl;
    cout << "2. Delete Stock: " << endl;
    cout << endl;
    cout << "Enter Your Prefered Option: ";
    cin >> option;

    if (option == "1")
    {
        UpdateStock();
    }
    else if (option == "2")
    {
        DeleteStock();
    }
    else
    {
        cout << "Invalid Option!" << endl;
        getch();
    }
}

void UpdateStock()
{
    system("cls");
    Header();
    SubHeader();
    cout << "Stock Update Menu:" << endl
         << endl;

    cout << "                   -Available Products-" << endl
         << endl;
    cout << " Product Name: \t Price:  In Stock: " << endl
         << endl;

    for (int i = 0; i < productCount; i++)
    {
        cout << i + 1 << ". " << productName[i] << "\t " << productPrice[i] << "\t" << productQuantity[i] << endl;
    }

    cout << endl;
    string option;
    cout << "Choose Which Item to Update: ";
    cin >> option;
    cout << endl;

    if (stoi(option) > 0 && stoi(option) <= productCount)
    {
        cin.ignore();
        int item = stoi(option);
        cout << "Set new name for Item " << item << ": ";
        getline(cin, productName[item - 1]);
        cout << "Set new Price: ";
        cin >> productPrice[item - 1];
        cout << "Set new Quantity: ";
        cin >> productQuantity[item - 1];

        cout << endl;
        cout << "Item Updated Successfully!" << endl;

        saveProducts();
        cout << "Press any Key to Continue...";
        getch();
    }
    else
    {
        cout << "Invalid Option!" << endl;
        getch();
    }
}

void DeleteStock()
{
    system("cls");
    Header();
    SubHeader();
    cout << "Stock Delete Menu:" << endl
         << endl;
    string option;
    cout << "                   -Available Products-" << endl
         << endl;
    cout << " Product Name: \t Price:  In Stock: " << endl
         << endl;

    for (int i = 0; i < productCount; i++)
    {
        cout << i + 1 << ". " << productName[i] << "\t" << productPrice[i] << "\t" << productQuantity[i] << endl;
    }

    cout << endl;

    cout << "Choose Which Item to Delete: ";
    cin >> option;
    cout << endl;

    if (stoi(option) > 0 && stoi(option) <= productCount)
    {
        int item = stoi(option);
        productName[item - 1] = "\t";
        productPrice[item - 1] = 0;
        productQuantity[item - 1] = 0;

        cout << "Item Deleted Successfully!" << endl;
        saveProducts();
        cout << "Press any Key to Continue...";
        getch();
    }
    else
    {
        cout << "Invalid Option!" << endl;
        getch();
    }
}

void ShowCart(string n[], float p[], float tax[], float tot[], int q[])
{
    system("cls");
    Header();
    SubHeader();

    cout << endl
         << endl;
    cout << "Your Cart:" << endl
         << endl;
    cout << "Product Name:" << "\t " << "Price:  " << "Quantity: " << "\t " << "Tax:" << "\t" << "Total Per Product:" << endl;
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". ";
        printProductData(n[i], p[i], q[i], tax[i], tot[i] = calculateCostPerProduct(p[i], q[i], tax[i]));
    }

    cout << endl
         << endl;
    cout << "Press any Key to Continue...";
    getch();
}

void ShowCheckOut(string n[], float p[], float tax[], float tot[], int q[])
{
    system("cls");
    Header();
    SubHeader();

    cout << "CheckOut: " << endl
         << endl;
    for (int i = 0; i < 3; i++)
    {
        tot[i] = calculateCostPerProduct(p[i], q[i], tax[i]);
    }

    float totalPayable = tot[0] + tot[1] + tot[2];

    cout << "Total Payable Amount (including tax): Rs." << totalPayable << endl;
    cout << endl
         << endl;
    cout << "Thanks for visiting Veezo Verpali, Hope you come Again !!" << endl;
    cout << "Press any Key to Continue...";
    getch();
}

void loadUsers()
{
    fstream userFile("Users.txt", ios::in);
    fstream passFile("pass.txt", ios::in);
    fstream roleFile("role.txt", ios::in);

    string userName, userPass, userRole;

    while (getline(userFile, userName) && getline(passFile, userPass) && getline(roleFile, userRole))
    {
        if (userCount < ArraySize)
        {
            users[userCount] = userName;
            passwords[userCount] = userPass;
            role[userCount] = "user";
            userCount++;
        }
        else
        {
            cout << "Maximum user capacity reached. Cannot load more users." << endl;
            break;
        }
    }
    userFile.close();
    passFile.close();
    roleFile.close();
}
void saveUsers()
{
    fstream userFile;
    fstream passFile;
    fstream roleFile;
    userFile.open("Users.txt", ios::out);
    passFile.open("pass.txt", ios::out);
    roleFile.open("role.txt", ios::out);

    for (int i = 0; i < userCount; i++)
    {
        userFile << users[i] << endl;
        passFile << passwords[i] << endl;
        roleFile << role[i] << endl;
    }
    userFile.close();
    passFile.close();
    roleFile.close();
}

string getField(string record, int field)
{
    int spaceCount = 0;
    string item = "";

    for (int i = 0; i < record.size(); i++)
    {
        if (record[i] == ',')
        {
            spaceCount++;
        }
        else if (spaceCount == field)
        {
            item += record[i];
        }
    }
    return item;
}

void loadProducts()
{
    fstream file;
    file.open("products.txt", ios::in);

    string pname;
    string record;
    while (!(file.eof()))
    {
        getline(file, record);
        productName[productCount] = getField(record, 0);
        productPrice[productCount] = myStoi(getField(record, 1));
        productQuantity[productCount] = myStoi(getField(record, 2));
        productTax[productCount] = myStoi(getField(record, 3));
        productCount++;
    }
    file.close();
}

void saveProducts()
{
    fstream file;
    file.open("products.txt", ios::out);

    for (int i = 0; i < productCount; i++)
    {
        string record = productName[i] + "," +
                        to_string(productPrice[i]) + "," +
                        to_string(productQuantity[i]) + "," +
                        to_string(productTax[i]);
        file << record << endl;
    }
    file.close();
}

int myStoi(string str)
{
    int number = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        number = number * 10 + (str[i] - '0');
    }
    return number;
}

float calculateCostPerProduct(float price, int quantity, float tax)
{
    float total;
    total = price * quantity;
    total = total + total * ((tax / 100));
    return total;
}
void printProductData(string name, float price, int quantity, float tax, float total)
{
    cout << name << "\t Rs." << price << "\t  " << quantity << "\t\t " << tax << "%\tRs." << total << endl;
}

void Header()
{
    cout << "              *******************************************************************************************************" << endl;
    cout << "              *******************************************************************************************************" << endl;
    cout << "              ***       _      _  ____  ____ _______  _____                                                       ***" << endl;
    cout << "              ***       |      | |     |          /  /     \\           KID'S STORE .....BY.......                 ***" << endl;
    cout << "              ***       |      | |___  |___      /  |       |                                                     ***" << endl;
    cout << "              ***        \\    /  |     |       /    |       |                                                     ***" << endl;
    cout << "              ***         \\__/   |____ |____  /_____ \\_____/                                                      ***" << endl;
    cout << "           ******                                     _      _  ____   ___   ___     __             _____         ***" << endl;
    cout << "*****************                                     |      | |      |   \\ |   \\   /  \\    |         |           ***" << endl;
    cout << "           ******                                     |      | |___   |___/ |___/  /____\\   |         |           ***" << endl;
    cout << "              ***                                      \\    /  |      |  \\  |     |      |  |         |           ***" << endl;
    cout << "              ***                                       \\__/   |____  |   \\ |    _|_    _|_ |_____  __|__         ***" << endl;
    cout << "              ***                                                                                                 ***" << endl;
    cout << "              *******************************************************************************************************" << endl;
    cout << "              *******************************************************************************************************" << endl;
    cout << endl
         << endl;
}
void SubHeader()
{
    cout << "Welcome to Veezo Verpali, Pakistan's Largest Children's Garments Store." << endl
         << endl;
}