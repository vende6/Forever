// c++ code to implement the above idea
#include <iostream>
#include <vector>
using namespace std;

// Function to find the Smallest Subarray with
// Sum K from an Array
int smallestSubarraySumK(vector<int>& arr, int k)
{
    int result = INT_MAX;

    for (int i = 0; i < arr.size(); ++i) {
        int sum = 0;
        for (int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if (sum == k) {
                result = min(result, (j - i + 1));
            }
        }
    }

    // Return result
    return result;
}

// Driver code
int main()
{

    vector<int> arr = { -8, -8, -3, 8 };
    int k = 5;

    int result = smallestSubarraySumK(arr, k);
    if (result == INT_MAX)
        cout << -1;
    else
        cout << result;
    return 0;
}