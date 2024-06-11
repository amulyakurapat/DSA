#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int b = INT_MIN, cursum = 0; 

    for (int i = 0; i < size; i++) {
        cursum = cursum + a[i];
        if (b < cursum)
            b = cursum;

        if (cursum < 0)
            cursum = 0;
    }
    return b;
}

// Driver Code
int main()
{
    int a[] = { -2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(a) / sizeof(a[0]);

    // Function Callb
    int max_sum = maxSubArraySum(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}