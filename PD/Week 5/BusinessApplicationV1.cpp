#include <iostream>
#include <conio.h>
using namespace std;

void header();
void login();

void user_menu();
void user_menu_option(int);
void catalogue();
float calculateCostPerProduct(float, int, float);
void printProductData(string, float, int, float, float);

void admin_menu();
void admin_menu_option(int);

main() {
    system("cls");

    header();
    while(true)
    {
        login();
    }
    
}

void admin_menu() {
    int option;

    cout << "Welcome Admin , " << endl;
    cout << "What Are You Looking to Do ?  " << endl;
    cout << "1. Check Catalogue   " << endl;
    cout << "2. Update Stock      " << endl;
    cout << "3. Exit Program      " << endl;
    cout << "Select your Option: ";
    cin >> option;
    if (option == ( 1 || 2 || 3 ))
    {
    cout << "You have Selceted Option: " << option << endl;
    }
    admin_menu_option(option);
}

void admin_menu_option(int x) {
    int option = x;
    if (option == 1 )
    {
        catalogue();
    }
    else if (option == 2 )
    {
        cout << "CART";
    }
    else if (option == 3 )
    {
        cout << "Exiting Program, Have a good Day!" << endl;
    }
    else {
        cout << "Enter a Valid Option";
    }
}

void user_menu() {
    int option;

    cout << "Welcome Sir/Ma'am , " << endl;
    cout << "What Are You Looking to Do ? " << endl;
    cout << "1. View Catalogue            " << endl;
    cout << "2. Add Products             " << endl;
    cout << "3. Check your Cart           " << endl;
    cout << "4. Go to Checkout            " << endl;
    cout << "5. Exit Program              " << endl;
    cout << "Select your Option: ";
    cin >> option;
    if (option == (1 || 2 || 3 || 4 || 5 || 6 || 7 ) )
    {
    cout << "You have Selceted Option: " << option << endl;
    }
    user_menu_option(option);
}

void user_menu_option(int x) {
    int option = x;

    string name1 = "", name2 = "", name3 = "";
    float price1 = 0.0, price2 = 0.0, price3 = 0.0;
    int quantity1 = 0, quantity2 = 0, quantity3 = 0;
    float tax1 = 0.0, tax2 = 0.0, tax3 = 0.0;
    float total1 = 0.0, total2 = 0.0, total3 = 0.0;
    string product2, product3, cart, checkout, decision;

    if (option == 1 )
    {
        catalogue();
    }
    else if (option == 2 )
    {
        cout << "Enter the name of 1st Product: ";
        cin >> name1;
        cout << "Enter the price of 1st Product: ";
        cin >> price1;
        cout << "Enter the quantity of 1st Product: ";
        cin >> quantity1;
        cout << "Enter the tax rate on 1st Product (%): ";
        cin >> tax1;

        cout << endl;
        cout << "Would you like to add a Second Product (Yes/No): ";
        cin >> product2;

        if ( product2 == "yes")
        {
            cout << "Enter the name of 2nd Product: ";
            cin >> name2;
            cout << "Enter the price of 2nd Product: ";
            cin >> price2;
            cout << "Enter the quantity of 2nd Product: ";
            cin >> quantity2;
            cout << "Enter the tax rate on 2nd Product (%): ";
            cin >> tax2;

            cout << endl;
            cout << "Would you like to add a Third Product (Yes/No): ";
            cin >> product3;

            if ( product3 == "yes")
            {
                cout << "Enter the name of 3rd Product: ";
                cin >> name3;
                cout << "Enter the price of 3rd Product: ";
                cin >> price3;
                cout << "Enter the quantity of 3rd Product: ";
                cin >> quantity3;
                cout << "Enter the tax rate on 3rd Product (%): ";
                cin >> tax3;

                cout << "Would you like you Like to head to Cart or Checkout ?: ";
                cin >> decision;

                if (decision == "cart")
                {
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                    cout << "          -Cart-           " << endl;
                    cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "TotalPerProduct" << endl;
                    cout << endl;
                    printProductData(name1, price1, quantity1, tax1, total1 = calculateCostPerProduct(price1, quantity1, tax1));
                    printProductData(name2, price2, quantity2, tax2, total2 = calculateCostPerProduct(price2, quantity2, tax2));
                    printProductData(name3, price3, quantity3, tax3, total3 = calculateCostPerProduct(price3, quantity3, tax3));
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;

                    cout << endl;
                    cout << "Heading to Checkout" << endl;
                    getch();
                    
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                    total1 = calculateCostPerProduct(price1, quantity1, tax1);
                    total2 = calculateCostPerProduct(price2, quantity2, tax2);
                    total3 = calculateCostPerProduct(price3, quantity3, tax3);
                    float totalPayable = total1 + total2 + total3;
                    cout << "Total Payable Amount (including tax): " << totalPayable << endl;
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                }
                else if (decision == "checkout")
                {
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                    total1 = calculateCostPerProduct(price1, quantity1, tax1);
                    total2 = calculateCostPerProduct(price2, quantity2, tax2);
                    total3 = calculateCostPerProduct(price3, quantity3, tax3);
                    float totalPayable = total1 + total2 + total3;
                    cout << "Total Payable Amount (including tax): " << totalPayable << endl;
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                }
            }
            else
            {
                cout << "Would you like you Like to head to Cart or Checkout ?: ";
                cin >> decision;

                if (decision == "cart")
                {
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                    cout << "          -Cart-           " << endl;
                    cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "TotalPerProduct" << endl;
                    cout << endl;
                    printProductData(name1, price1, quantity1, tax1, total1 = calculateCostPerProduct(price1, quantity1, tax1));
                    printProductData(name2, price2, quantity2, tax2, total2 = calculateCostPerProduct(price2, quantity2, tax2));
                    printProductData(name3, price3, quantity3, tax3, total3 = calculateCostPerProduct(price3, quantity3, tax3));
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                }
                else if (decision == "checkout")
                {
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                    total1 = calculateCostPerProduct(price1, quantity1, tax1);
                    total2 = calculateCostPerProduct(price2, quantity2, tax2);
                    total3 = calculateCostPerProduct(price3, quantity3, tax3);
                    float totalPayable = total1 + total2 + total3;
                    cout << "Total Payable Amount (including tax): " << totalPayable << endl;
                    cout << endl << endl;
                    cout << "********************************************************************" << endl;
                }
            }


        }
        else
        {
            cout << "Would you like you Like to head to Cart or Checkout ?: ";
            cin >> decision;

            if (decision == "cart")
            {
                cout << endl << endl;
                cout << "********************************************************************" << endl;
                cout << "          -Cart-           " << endl;
                cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "TotalPerProduct" << endl;
                cout << endl;
                printProductData(name1, price1, quantity1, tax1, total1 = calculateCostPerProduct(price1, quantity1, tax1));
                printProductData(name2, price2, quantity2, tax2, total2 = calculateCostPerProduct(price2, quantity2, tax2));
                printProductData(name3, price3, quantity3, tax3, total3 = calculateCostPerProduct(price3, quantity3, tax3));
                cout << endl << endl;
                cout << "********************************************************************" << endl;
            }
            else if (decision == "checkout")
            {
                cout << endl << endl;
                cout << "********************************************************************" << endl;
                total1 = calculateCostPerProduct(price1, quantity1, tax1);
                total2 = calculateCostPerProduct(price2, quantity2, tax2);
                total3 = calculateCostPerProduct(price3, quantity3, tax3);
                float totalPayable = total1 + total2 + total3;
                cout << "Total Payable Amount (including tax): " << totalPayable << endl;
                cout << endl << endl;
                cout << "********************************************************************" << endl;
            }
        }

    }
    else if (option == 3)
    {
        cout << endl << endl;
        cout << "********************************************************************" << endl;
        cout << "          -Cart-           " << endl;
        cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "TotalPerProduct" << endl;
        cout << endl;
        printProductData(name1, price1, quantity1, tax1, total1 = calculateCostPerProduct(price1, quantity1, tax1));
        printProductData(name2, price2, quantity2, tax2, total2 = calculateCostPerProduct(price2, quantity2, tax2));
        printProductData(name3, price3, quantity3, tax3, total3 = calculateCostPerProduct(price3, quantity3, tax3));
        cout << endl << endl;
        cout << "********************************************************************" << endl;
    }
    else if (option == 4)
    {
        cout << endl << endl;
        cout << "********************************************************************" << endl;
        total1 = calculateCostPerProduct(price1, quantity1, tax1);
        total2 = calculateCostPerProduct(price2, quantity2, tax2);
        total3 = calculateCostPerProduct(price3, quantity3, tax3);
        float totalPayable = total1 + total2 + total3;
        cout << "Total Payable Amount (including tax): " << totalPayable << endl;
        cout << endl << endl;
        cout << "********************************************************************" << endl;
    }
    else if (option == 5)
    {
        cout << "Exiting Program, Have a good Day!" << endl;
    }
    else {
        cout << "Enter a Valid Option";
    }
}

void catalogue() {
    cout << endl << endl;
    cout << "********************************************************************" << endl;
    cout << "               -Available Products-" << endl;
    cout << "1. Product: Boy's Jeans \t Price: Rs.700" << endl;
    cout << "2. Product: Girl's Tights \t Price: Rs.650" << endl;
    cout << "3. Product: Boy's Jacket \t Price: Rs.1050" << endl;
    cout << "4. Product: Girl's Frock \t Price: Rs.800" << endl;
    cout << "5. Product: Girl's Shoes \t Price: Rs.550" << endl;
    cout << "6. Product: Boy's Shoes \t Price: Rs.500" << endl;
    cout << endl << endl;
    cout << "********************************************************************" << endl;
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
    cout << name << "\t" << price << "\t" << quantity << "\t\t" << tax << "\t" << total << endl;
}

void login() {
    string password;
    cout << "Enter your Password (Admin/User): ";
    cin >> password;
    if (password == "admin2191") {
        admin_menu();
    }
    else if (password == "user2191") {
        user_menu();
    }
    else {
        cout << "Enter a Valid Password!" << endl;
    }

}

void header()
{
cout << "              *******************************************************************************************************" << endl;
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
cout << "              *******************************************************************************************************" << endl;
cout << endl << endl;
}