//using a loop
#include <bits/stdc++.h>
using namespace std;

void ReverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }
}

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array:" << " ";
    PrintArray(arr, n);

    ReverseArray(arr, 0, n-1);

    cout << endl << "Reversed Array:" << " ";
    PrintArray(arr, n);

    return 0;
}
