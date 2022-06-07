vector<int> Solution::repeatedNumber(const vector<int> &A) {

    int n = A.size();
    int max_sum = n*(n+1)/2;
    int max_sq_sum = n*(n+1)*(2*n+1)/6;
    
    int sum = 0;
    int sq_sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += A[i];
        sq_sum += A[i]*A[i];
    }

    int final_diff = max_sum - sum;
    int sq_diff = max_sq_sum - sq_sum;

    int final_sum = sq_diff/final_diff;

    vector<int> res;
    res.push_back((final_sum - final_diff)/2);
    res.push_back((final_diff+final_sum)/2);

    return res;
}