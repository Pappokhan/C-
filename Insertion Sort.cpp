#include <iostream>
using namespace std;

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i, key, j;

    for(i = 1; i < n; i++)
    {         key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }


    cout << "Sorted array: \n";
    for (int i=0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

