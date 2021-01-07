#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 7, 9, 8, 4, 12, 11, 3, 2, 5};
    int x = 12;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        cout << "Element is not present in array\n";
    else
        cout << "Element is present at index " << index << "\n";
    return 0;
}