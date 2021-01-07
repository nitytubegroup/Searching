#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int arr[] = {2, 3, 4, 5, 7, 8, 9, 10, 11, 12};
    int x = 8;
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0, r = n - 1;
    int index = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            index = mid;
            break;
        }
        if (arr[mid] > x)
            r = mid - 1;
        else
            l = mid + 1;
    }
    if (index == -1)
        cout << "Element is not present in array";
    else
        cout << "Element is present at index " << index;
    return 0;
}