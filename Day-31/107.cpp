// Swap Sum

int swapSum(int k, vector<int> &a, vector<int> &b)
{
    // Write your code here
    int n = a.size();
    long long sum = 0;
    vector<pair<int, int>> v;

    for(int i=0; i<n; i++)
    {
       int diff = abs(a[i]-b[i]);
       v.push_back({i, diff});
    }

    sort(v.begin(), v.end(), [&](pair<int, int>& a, pair<int, int>& b)
    {
        return a.second > b.second;
    });

    for(auto it: v)
    {
        int index = it.first;
        if(a[index] < b[index])
        {
            if(k)
            {
                sum += b[index];
                k--;
            }
            else
                sum += a[index];
        }
        else    
            sum += a[index];
    }

    return sum;
}