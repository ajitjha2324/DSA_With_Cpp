#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){
    vector<int>  arr{1,2,2,1,3};
    
    unordered_map<int, int> freq;

    for(int val : arr){
        freq[val]++;
    }

    for(auto p : freq){
        cout<<p.first <<" appears"<<p.second<<" times"<<endl;
    }
}