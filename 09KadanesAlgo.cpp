//maximum subarray sum
//Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxSum = INT_MIN;
    int currentSum = 0;

    for(int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0)
        {
            currentSum = 0;
        }
    }

    cout << "maximum subarray sum is:" << " " << maxSum;

    return 0;
}
