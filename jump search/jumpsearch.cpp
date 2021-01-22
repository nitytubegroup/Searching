#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
    int x = 610;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = -1;
    ////jumpsearch
    int step = sqrt(n);
    int limit = -1;
    for (int i = step - 1; i < n; i += step)
    {
        if (arr[i] >= x)
        {
            limit = i;
            break;
        }
    }
    //linear search parameters
    int start, end;
    if (limit == -1)
    {
        start = (n / step) * step;
        end = n - 1;
    }
    else
    {
        start = limit - step + 1;
        end = limit;
    }
    for (int i = start; i <= end; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            cout << x << " is found at index " << index << "\n";
            break;
        }
    }
    if (index == -1)
        cout << x << " is not present in the array\n";
    return 0;
}