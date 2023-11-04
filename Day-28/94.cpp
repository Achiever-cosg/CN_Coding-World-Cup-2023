// Secret Pattern

int secretCode(int n, vector<int> &a) {
    // Write your code here.
    for(int i=0; i<a.size()-2; i++)
    {
        int tempSum = a[i] + a[i+1]+a[i+2];
        if(tempSum % 10 == 0)
            return 1;
    }

    return 0;
}
