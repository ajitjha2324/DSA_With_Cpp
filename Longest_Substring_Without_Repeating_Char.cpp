#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubstring(string& str){
    unordered_map<char, int> lastIndex;
    int maxLength = 0;
    int left = 0;

    for(int right = 0; right <= str.size(); right++){
        char c = str[right];

        if(lastIndex.find(c) != lastIndex.end()){
            left = max(left, lastIndex[c] + 1);
        }

        lastIndex[c] = right;
        maxLength = max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main(){
    string str = "abcdfgabcbb";
    cout << longestSubstring(str);
}