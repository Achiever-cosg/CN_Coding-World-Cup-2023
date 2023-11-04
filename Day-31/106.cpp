// Swap for maximum performance

int maxSwap(vector<int> &a){
    // Write your code here
    int n = a.size();
    int numToSwap = min(a[0], a[n-1]);
    
    for(int i=1; i<n-1; i++)
    {
        numToSwap = max(numToSwap, a[i]);
    }

    return numToSwap + max(a[0], a[n-1]);
}