// Rohit-Virat Run Pair

vector<int> findPair(int x, int y) {
	// Write your code here.

	int sum = (x+y), diff = (x-y);

	if(sum%2 == 0 && diff%2 == 0)
	{
		if(diff == 0)
			return {sum/2, 0};
		else
			return {sum/2, diff/2};
	}
	else
		return {-1, -1};
}