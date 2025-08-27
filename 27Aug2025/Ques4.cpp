#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[7] = {10, 200, 30, 40, 500, 89, 100};

    // Find the maximum element using max_element
    int max1 = *max_element(arr, arr + 7);

    cout << "Maximum element: " << max1 << endl;

    return 0;
}
