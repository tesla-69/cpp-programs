#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function to solve the problem for one test case
int solveTestCase(int N, vector<int>& A) {
    // Counting negative numbers in the array
    int countNegatives = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] < 0)
            countNegatives++;
    }

    // If there are odd number of negatives, Alice wins
    if (countNegatives % 2 == 1) {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += abs(A[i]);
        }
        return sum; // Alice's strategy: maximize the absolute sum
    } else {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            sum += A[i];
        }
        return sum; // Bob's strategy: minimize the sum
    }
}

// Main function to read input and process each test case
int main() {
    int T; // Number of test cases
    cin >> T;
    for (int t = 0; t < T; ++t) {
        int N; // Number of elements in the array
        cin >> N;
        vector<int> A(N); // The array
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        int result = solveTestCase(N, A); // Solve the test case
        cout << result << endl; // Output the result
    }
    return 0;
}
