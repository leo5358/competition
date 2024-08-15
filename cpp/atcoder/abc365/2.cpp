#include <iostream>
#include <vector>
#include <algorithm>
#define fin ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int main() {
	fin
    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int max1 = INT_MIN, max2 = INT_MIN;
    int max1_index = -1, max2_index = -1;

    // Find the maximum value and its index
    for (int i = 0; i < N; ++i) {
        if (A[i] > max1) {
            max2 = max1;
            max2_index = max1_index;
            max1 = A[i];
            max1_index = i;
        } else if (A[i] > max2) {
            max2 = A[i];
            max2_index = i;
        }
    }

    // Since the output requires 1-based index, add 1 to max2_index
    cout << max2_index + 1 << endl;

    return 0;
}