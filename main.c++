#include <iostream>

using namespace std;

int main()
{
}

int returnTotalBill()
{
    char *c;
    char *item;
    char *vegItem;
    char *nonVegItem;
    char *selectAgain;
    int billAmount = 0;
    cout << "------------------------------Welcome to Food oder----------------------------" << endl;
    cout << " ------------------------------ Please Follow Below Instraction -------------------" << endl;
    cout << "Step 1 : Enter S to start your oder" << endl;
    cout << "Step 2 : You can Oder both Veg and Non-Veg" << endl;
    cout << "Step 3 : Please press a to se;ect Veg Item" << endl;
    cout << "Step 3 : Please press a to se;ect NON Veg Item" << endl;
    cout << " Step 5 : You will get your final bill after all of your oder " << endl;

start:
    cin >> c;
    if (c == "s" || c == "S")
    {
    item:
        cout << " Please Select your chosse " << endl;
        cout << "(a) Veg Items                               (b) Non-Veg" << endl;

        cin >> item;

        if (item == "a" || item == "A")
        {
        vegItemList:
            cout << " please select 1,2,3,4,5,6 as par you choise " << endl;
            cout << "(1) Paneer - Price : 100 rs" << endl;
            cout << "(2) Bargar - Price : 120 rs" << endl;
            cout << "(3) Sandwise - Price : 50 rs" << endl;
            cout << "(4) Polao - Price : 150 rs" << endl;
            cout << "(5) Machurian - Price : 60 rs" << endl;
            cout << "(6) Bread - Price : 10 rs" << endl;

            cin >> vegItem;

            if (vegItem == "1")
            {
                billAmount = billAmount + 100;
            }
            else if (*vegItem == '2')
            {
                billAmount = billAmount + 120;
            }
            else if (vegItem == " 3")
            {
                billAmount += 50;
            }
            else if (vegItem == "4 ")
            {
                billAmount += 150;
            }
            else if (vegItem == "5")
            {
                billAmount += 60;
            }
            else if (vegItem == "6")
            {
                billAmount += 10;
            }
            else
            {
                cout << "We have't more item aviable ";
                goto vegItemList;
            }
            cout << "Did you want to add more Items y or n  ?" << endl;
            cin >> selectAgain;
            if (selectAgain == "y")
            {
                // cout << "" << endl;
                goto item;
            }
            else
            {
                cout << "Hope you will back again :) Thank You for shopping " << endl;
                return billAmount;
            }
        }
        else if (*item == 'b' || item == "B")
        {
            // cout << " please select 1,2,3,4,5,6 as par you choise " << endl;

        nonVegItemList:
            cout << " please select 1,2,3,4,5,6 as par you choise " << endl;
            cout << "(1) Chicken - Price : 100 rs" << endl;
            cout << "(2) Bargar - Price : 120 rs" << endl;
            cout << "(3) Sandwise - Price : 50 rs" << endl;
            cout << "(4) Matan - Price : 150 rs" << endl;
            cout << "(5) Machurian - Price : 60 rs" << endl;
            cout << "(6) Biriany - Price : 200 rs" << endl;

            cin >> nonVegItem;

            if (nonVegItem == "1")
            {
                billAmount = billAmount + 100;
            }
            else if (*nonVegItem == '2')
            {
                billAmount = billAmount + 120;
            }
            else if (nonVegItem == " 3")
            {
                billAmount += 50;
            }
            else if (nonVegItem == "4 ")
            {
                billAmount += 150;
            }
            else if (nonVegItem == "5")
            {
                billAmount += 60;
            }
            else if (nonVegItem == "6")
            {
                billAmount += 10;
            }
            else
            {
                cout << "We have't more item aviable ";
                goto nonVegItemList;
            }
            cout << "Did you want to add more Items y or n  ?" << endl;
            cin >> selectAgain;
            if (selectAgain == "y")
            {
                // cout << "" << endl;
                goto item;
            }
            else
            {
                cout << "Hope you will back again :) Thank You for shopping " << endl;
                return billAmount;
            }
        }
        else
        {
            cout << " You have enter wrong value :) wanna goto back " << endl;
            goto item;
        }
    } else {
        cout << "You have enterd a wrong value " << endl ;
        goto start ;
    }

    return billAmount ;
}