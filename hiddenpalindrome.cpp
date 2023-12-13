#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    int i = 0;
    int j = s.length() - 1;

    while(i < j){
        if(s[i] != s[j])
        {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main()
{
    string line;
    getline(cin, line);
    int count = 0;
    int largestCount = 0;

    for(int i = 0; i < line.length(); i++){
        for(int j = i + 1; j <= line.length(); j++){
            string substring = line.substr(i, j - i);
            if(isPalindrome(substring)){
                count = substring.length();
                largestCount = max(count, largestCount);
            }
        }
    }

    cout << largestCount;
}