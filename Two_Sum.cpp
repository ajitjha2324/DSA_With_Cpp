#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& num, int target){
    unordered_map<int, int> m;
    vector<int> ans;

    for(int i=0; i<num.size(); i++){
        int first = num[i];
        int second = target - first;

        if(m.find(second) != m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first] = i;
    }
    return ans;
}

int main(){
    vector<int> num = {2,7,8,9};
    int target = 15;
    vector<int> ans = twoSum(num, target);

    if(!ans.empty()){
        cout<<"Indices "<<ans[0]<<", "<<ans[1]<<endl;
        cout<<"Valueds "<<num[ans[0]]<<", "<<num[ans[1]];
    }
    else{
        cout<<"Not Found";
    }
}