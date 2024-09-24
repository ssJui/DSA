// C++ program to find Intersection of two sorted arrays
//using two pointers
#include<bits/stdc++.h>
using namespace std;

void printIntersection(int arr1[], int n, int arr2[], int m)
{
    int i = 0, j = 0;

    while(i<n && j<m)
    {
        if(arr1[i] < arr2[j])
        {
            i++;
        }
        else if(arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }

}

int main()
{
    int arr1[] = {1, 2, 4, 5, 6};
    int arr2[] = {2, 3, 5, 7};

    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    printIntersection(arr1, n, arr2, m);

    return 0;
}
