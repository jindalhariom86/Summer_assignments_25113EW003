#include <iostream>
using namespace std;

int main()
{
    const int TOTAL_SEATS = 10;
    bool booked[TOTAL_SEATS] = {false};

    int choice, seat;

    do
    {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. View Available Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "\nSeat Status:\n";
            for (int i = 0; i < TOTAL_SEATS; i++)
            {
                cout << "Seat " << i + 1 << " : ";
                if (booked[i])
                    cout << "Booked";
                else
                    cout << "Available";
                cout << endl;
            }
            break;

        case 2:
            cout << "Enter seat number (1-10): ";
            cin >> seat;

            if (seat < 1 || seat > TOTAL_SEATS)
            {
                cout << "Invalid seat number!\n";
            }
            else if (booked[seat - 1])
            {
                cout << "Seat already booked!\n";
            }
            else
            {
                booked[seat - 1] = true;
                cout << "Ticket booked successfully for Seat " << seat << ".\n";
            }
            break;

        case 3:
            cout << "Enter seat number to cancel (1-10): ";
            cin >> seat;

            if (seat < 1 || seat > TOTAL_SEATS)
            {
                cout << "Invalid seat number!\n";
            }
            else if (!booked[seat - 1])
            {
                cout << "Seat is not booked.\n";
            }
            else
            {
                booked[seat - 1] = false;
                cout << "Ticket cancelled successfully.\n";
            }
            break;

        case 4:
            cout << "Thank you for using the Ticket Booking System.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}