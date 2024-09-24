//using two pointer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {-12,11,-13,-5,6,-7,5,-3,-6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start = 0, move = 0;

    while(move < n)
    {
        if(arr[move] < 0)
        {
             swap(arr[start] , arr[move]);
             start++;
        }
        move++;
    }

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}