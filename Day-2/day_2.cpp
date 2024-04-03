int Solution::solve(vector<int> &A) {
     int n = A.size();
    int count = 0;

    // Sort the array increasing order
    sort(A.begin(), A.end());

    // Iterate from second to second-last element
    for (int i = 0; i < n; i++) {
        // Check if A[i] has a strictly smaller element at index 0
        // and a strictly greater element at index n-1
        if (A[0] < A[i] && A[i] < A[n-1]) {
            count++;
        }
    }

    return count;
    }
