class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> even;
        vector<int>odd;
        for(int x: A){
            if(x%2==0){
                even.push_back(x);
            }else{
                
                odd.push_back(x);
            }
        }
        for(int x: odd){
            even.push_back(x);
        }
        return even;
    }
};
