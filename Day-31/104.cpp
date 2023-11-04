// Dot Ball Percentage
#include<bits/stdc++.h>
using namespace std;

bool isVowel(char input)
{
    char c = tolower(input);
       if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
           return true;
    return false;
}

int isPossible(string s)
{
    // Write your code here
    int n = s.length();
    if(n == 1){
        if(isVowel(s[0]))
            return 1;
        return 0;
    }

    int cnt = 0;
    for(char c: s)
    {
       if(isVowel(c))
           cnt++;
    }

    if(cnt >= n-cnt)
        return 1;
    else
        return 0;
}

int main()
{
    string s = "sddce";
    int ans = isPossible(s);
    cout<<ans<<endl;
    return 0;
}