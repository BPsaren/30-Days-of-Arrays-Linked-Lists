int Solution::solve(vector<int> &A) {
    int odd_count = 0;
    int even_count = 0;
    
    for (int num : A) {
        if (num % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    
    return min(odd_count, even_count);
}
