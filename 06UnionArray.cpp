// C++ program to find union of two sorted arrays
//using two pointers
#include<bits/stdc++.h>
using namespace std;

void UnionArray(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0;

    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            cout << arr1[i] << " ";
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            cout << arr2[j] << " ";
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }

    //Print remaining elements of the larger array
    while(i < n)
    {
        cout << arr1[i] << " ";
        i++;

    }


    while(j < m)
    {
        cout << arr2[j] << " ";
        j++;
    }

}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    UnionArray(arr1, n, arr2, m);

    return 0;
}
