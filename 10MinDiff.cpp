//Minimize the Heights
#include<bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{

    sort(arr, arr + n);

    int ans = arr[n - 1] - arr[0];

    int smallest = arr[0] + k;
    int largest = arr[n - 1] - k;
    int mi, ma;

    for (int i = 0; i < n - 1; i++)
    {
        mi = min(smallest, arr[i + 1] - k);
        ma = max(largest, arr[i] + k);

        if (mi < 0)
            continue;

        ans = min(ans, ma - mi);
    }

    return ans;
}

int main()
{
    int arr[] = {3, 9, 12, 16, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int ans = getMinDiff(arr, n, k);

    cout << "Minimum difference between the shortest and tallest towers is: " << ans << endl;

    return 0;
}
