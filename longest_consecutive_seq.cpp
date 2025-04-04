#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>
#include<vector>

using namespace std;


int longestConsecutive(vector<int>& nums) {
                
    if (nums.empty()) return 0;
                
    sort(nums.begin(),nums.end());
    int cnt=1,maxi=1;
                
    for(int i=1 ; i<nums.size() ; i++){

        if(nums[i] - nums[i-1] == 1){
            cnt++;
            maxi = max(cnt,maxi);
        }
                    
        else if(nums[i] != nums[i-1]) {
            cnt=1;
        }
    }
    return maxi;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << longestConsecutive(nums) << endl; 
    return 0;
}