//using Linear search
#include<bits/stdc++.h>
using namespace std;

pair<int, int> getMinMax(int arr[], int size)
{
    int min, max;

    // If there is only one element
    if(size == 1)
    {
        min = arr[0];
        max = arr[0];

        return {min, max};
    }

    // If there are more than one elements,
    // then initialize min and max

    if (arr[0] > arr[1])
    {
        max = arr[0];
        min = arr[1];
    }
    else
    {
        max = arr[1];
        min = arr[0];
    }

    for(int i = 2; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];

        else if (arr[i] < min)
            min = arr[i];
    }

    return {min, max};
}

int main()
{
    int arr[] = {1000, 11, 445, 1, 330, 4000};

    int n = sizeof(arr)/sizeof(arr[0]);

    pair<int, int> minMax = getMinMax(arr, n);

    cout << "Minimum element: " << minMax.first << endl;
    cout << "Maximum element: " << minMax.second << endl;

    return 0;
}
