int minDifference(vector<int> &a) {
    // Write your code here.
    int n = a.size();
    sort(a.begin(), a.end());
    int minAns = INT_MAX;

    int temp = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(i == 0)
        {
            temp = a[1] - a[0];
        }
        else if(i == n-1)
        {
            temp = a[i] - a[i-1];
        }
        else
        {
            temp = min(a[i]-a[i-1], a[i+1]-a[i]);
        }

        minAns = min(temp, minAns);
    }

    return minAns;
}