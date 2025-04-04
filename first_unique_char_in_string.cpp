#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char,int> m;
      
    for(int i=0 ; i<s.size() ; i++){
        m[s[i]] += 1;
    }
    
    for(int i=0 ; i<s.size() ; i++){
        if(m[s[i]] == 1) return i;
    }

    return -1;
}

int main() {
    string s = "leetcode";
    cout << firstUniqChar(s) << endl; 
    return 0;
}
