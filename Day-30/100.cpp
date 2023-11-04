// Rashod's Plan

int countEvenParityDigits(string a) {
    // Write your code here.

    int cnt = 0;
    for(char c: a)
    {
        int temp = c-'0';
        if(temp%2 == 0)
            cnt++;
    }

    return cnt;
}
