// Majority

int maximumLength(vector<int> &a){
    // Write your code here
    unordered_map<int, int> mpp;

    for(int x: a)
    {
        mpp[x]++;
    }

    vector<pair<int, int>> v;
    int ans = 0;
    for(auto it: mpp)
    {
        ans = max(ans, it.second);
        v.push_back({it.first, it.second});
    }

    sort(v.begin(), v.end(), [&](pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    });

    int cnt = ans;
    for(int i=v.size()-1; i>=1; i--)
    {
        int freq = v[i].second;
        if(freq < cnt)
        {
            ans += freq;
            cnt -= freq;
            
        }
        else if(freq > cnt)
        {
            ans += cnt;
            return ans;
        }
        else    
            return ans + freq;
    }

    return ans;

}