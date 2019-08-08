class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
     vector<int> even;
        vector<int> odd;
        for(int x: A){
            if(x%2==0){
                even.push_back(x);
                
            }else{
                odd.push_back(x);
            }
        }
        vector<int> ans;
        int k=0;
        int l=0;
        
        for(int i=0; i<A.size(); i++){
            if(i%2==0){
                ans.push_back(even[k++]);
            }else{
                ans.push_back(odd[l++]);         
            }
        }
        
        return ans;
    }
};
