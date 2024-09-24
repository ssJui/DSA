// rotateing the array by one position in clock-wise direction.
//{1, 2, 3, 4, 5} to {5, 1, 2, 3, 4}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int last = arr[size-1];

    for (int i = size - 1; i > 0; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[0] = last;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

