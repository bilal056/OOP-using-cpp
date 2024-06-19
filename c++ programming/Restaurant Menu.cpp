// Program: Restaurant Menu
// Description: This program simulates a restaurant menu system where users can view the menu, select items, and generate a check including tax.
#include <iostream>
using namespace std;
const int MAX_ITEMS = 7;

// Structure to hold menu items and their prices
struct menuItemType
{
    string menuitem[MAX_ITEMS];
    double menuPrice[MAX_ITEMS];
};

// Function prototypes
void getData(menuItemType menu_list);
void showMenu(menuItemType menu_list);
void printCheck(menuItemType menu_list);

int main()
{
    menuItemType menu_list;

    getData(menu_list);

    return 0;
}

// Loads data into the menu list
void getData(menuItemType menu_list)
{
    menu_list.menuitem[0] = "Plain Egg";
    menu_list.menuitem[1] = "Muffin";
    menu_list.menuitem[2] = "French Toast";
    menu_list.menuitem[3] = "Fruit Basket";
    menu_list.menuitem[4] = "Cereal";
    menu_list.menuitem[5] = "Coffee";
    menu_list.menuitem[6] = "Tea";

    menu_list.menuPrice[0] = 1.45;
    menu_list.menuPrice[1] = 0.99;
    menu_list.menuPrice[2] = 1.99;
    menu_list.menuPrice[3] = 2.49;
    menu_list.menuPrice[4] = 0.69;
    menu_list.menuPrice[5] = 0.50;
    menu_list.menuPrice[6] = 0.75;
    showMenu(menu_list);
}

// Displays the menu and prompts user for selection
void showMenu(menuItemType menu_list)
{
    cout<<"Menu"<<"\t\t\t"<<"Price"<<endl<<endl;
    cout<<"1."<<"Plain Egg"<<"\t\t"<<"$"<<"1.45"<<endl;
    cout<<"2."<<"Muffin"<<"\t\t"<<"$"<<"0.99"<<endl;
    cout<<"3."<<"Plain French Toast"<<"\t"<<"$"<<"1.99"<<endl;
    cout<<"4."<<"Plain Fruit Basket"<<"\t"<<"$"<<"2.49"<<endl;
    cout<<"5."<<"Plain Cereal"<<"\t\t"<<"$"<<"0.69"<<endl;
    cout<<"6."<<"Plain Coffe"<<"\t\t"<<"$"<<"0.50"<<endl;
    cout<<"7."<<"Plain Tea"<<"\t\t"<<"$"<<"0.75"<<endl;
    cout<<"Choose the Item from Menu By Number: "<<endl;

    printCheck(menu_list);
}

// Calculates and prints the check
void printCheck(menuItemType menu_list)
{
    int choose = 0;
    float Total_Item = 0.0;
    float Tax = 0.05;
    int items_collect = 0;

    cout << "Select Item you Want by number: "<<endl;
    while (1)
    {
        cin >> choose;
        if ( choose > 0 && choose <= MAX_ITEMS )
        {
            Total_Item += menu_list.menuPrice[choose-1];
            items_collect++;
            cout<<menu_list.menuitem[choose-1]<<"\t"<<menu_list.menuPrice[choose-1]<<endl;
        }
        else if (choose == 0)
        {
            break;
        }
    }

    cout<<"Total amount: "<<"$"<<Total_Item<<endl;
    Tax *= items_collect;
    cout<<"Tax: "<<"$"<<Tax<<endl;
    cout<<"Amount Due: "<<"$"<<Tax+Total_Item<<endl;
}
