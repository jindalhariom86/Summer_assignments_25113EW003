#include <iostream>
using namespace std;

int main()
{
    int num, sum = 0;
    float avg;

    cout << "Enter the number of Arrray inputs : ";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " Array input : ";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
    sum += arr[i];
    }

    avg = float(sum) / float(num);
    
    cout << "The sum of the Array is : " << sum << endl;
    cout << "The Average of the Array is : " << avg;

    return 0;
}