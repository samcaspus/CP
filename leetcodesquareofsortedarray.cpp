#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& vec) {
        for(int i=0; i<vec.size(); i++){
            vec[i] = vec[i]*vec[i];
        }
        
        sort(vec.begin(),vec.end());
    return vec;    
    }
    
};
