//using quickselect method
#include <bits/stdc++.h>
using namespace std;


int partition(int arr[], int left, int right)
{
    int pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}


int quickSelect(int arr[], int left, int right, int k)
{
    if (left <= right)
    {
        int pi = partition(arr, left, right);


        if (pi == k - 1)
        {
            return arr[pi];
        }

        else if (pi > k - 1)
        {
            return quickSelect(arr, left, pi - 1, k);
        }

        else
        {
            return quickSelect(arr, pi + 1, right, k);
        }
    }
    return INT_MAX;
}

int main()
{
    int arr[] = {12, 3, 5, 7, 19, 26, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;  // Finding the 3rd smallest element

    int result = quickSelect(arr, 0, n - 1, k);

    cout << "The " << k << "rd smallest element is " << result << endl;

    return 0;
}
