    #include <iostream>
    using namespace std;

    int main()
    {
        int num, expected_sum;

        cout << "Enter the number of Array inputs : ";
        cin >> num;
        cout << "Enter the Sum : ";
        cin >> expected_sum;

        int arr[num];

        for (int i = 0; i < num; i++)
        {
            cout << "Enter the Array input : ";
            cin >> arr[i];
        }

        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {
                if (arr[i] + arr[j] == expected_sum)
                {
                    cout << "The pair is " << arr[i] << " and " << arr[j] << endl;
                }
                
            }
            
        }
        

        return 0;
    }