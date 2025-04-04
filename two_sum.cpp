#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
            
    vector<int> r;
    unordered_map<int,int> m;
    int diff;
    
    for(int i=0 ; i<nums.size() ; i++){
        diff = target - nums[i];
    
        if(m.find(diff) != m.end() && m.find(diff)->second != i){
            
                r.push_back(m.find(diff)->second);
                r.push_back(i);
        
                return r;
            }
            m[nums[i]] = i;
        }
    return r;
}

int main() {

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    
    cout << result[0] << " " << result[1] << endl; 
    
    return 0;
}