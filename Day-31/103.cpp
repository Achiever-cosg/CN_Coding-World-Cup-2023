// Dreaded Runs

int findLen(int n, int x, vector<int> &a){
	// Write your code here.
	int  cnt = 0;
	for(int it: a)
	{
		if(it == x)
			cnt++;
	}

	return a.size() - cnt;
}