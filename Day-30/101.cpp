// Double SCore Beauty

int doubleBeauty(int k, vector<int> &a)
{
    // Write your code here

    priority_queue<int> pq; // max-heap
    for(int x: a)
    {
        pq.push(x);
    }

    long long ans = 0;
    while(!pq.empty() && k--)
    {
        ans += 2*pq.top();
        pq.pop();
    }

    return ans;
}