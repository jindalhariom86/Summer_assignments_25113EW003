#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int SIZE = 100;

    int productId[SIZE];
    string productName[SIZE];
    int quantity[SIZE];
    float price[SIZE];

    int count = 0, choice;

    do
    {
        cout << "\n===== Inventory Management System =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nEnter Product ID: ";
            cin >> productId[count];

            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, productName[count]);

            cout << "Enter Quantity: ";
            cin >> quantity[count];

            cout << "Enter Price: ";
            cin >> price[count];

            count++;
            cout << "Product added successfully.\n";
            break;

        case 2:
            if (count == 0)
            {
                cout << "\nNo products available.\n";
            }
            else
            {
                cout << "\n===== Product List =====\n";

                for (int i = 0; i < count; i++)
                {
                    cout << "Product ID   : " << productId[i] << endl;
                    cout << "Product Name : " << productName[i] << endl;
                    cout << "Quantity     : " << quantity[i] << endl;
                    cout << "Price        : Rs. " << price[i] << endl;
                    cout << "-----------------------------\n";
                }
            }
            break;

        case 3:
        {
            int searchId;
            bool found = false;

            cout << "\nEnter Product ID to Search: ";
            cin >> searchId;

            for (int i = 0; i < count; i++)
            {
                if (productId[i] == searchId)
                {
                    cout << "\nProduct Found\n";
                    cout << "Product ID   : " << productId[i] << endl;
                    cout << "Product Name : " << productName[i] << endl;
                    cout << "Quantity     : " << quantity[i] << endl;
                    cout << "Price        : Rs. " << price[i] << endl;

                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Product not found.\n";
            }

            break;
        }

        case 4:
        {
            int updateId;
            bool found = false;

            cout << "\nEnter Product ID: ";
            cin >> updateId;

            for (int i = 0; i < count; i++)
            {
                if (productId[i] == updateId)
                {
                    cout << "Enter New Quantity: ";
                    cin >> quantity[i];

                    cout << "Quantity updated successfully.\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Product not found.\n";
            }

            break;
        }

        case 5:
            cout << "\nThank you for using the Inventory Management System.\n";
            break;

        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}