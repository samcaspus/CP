class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        sort(arr1.begin(),arr1.end());
        vector<int> temp;
        vector<int> ans;
        
        for(int x: arr2){
            if(binary_search(arr1.begin(),arr1.end(),x) && !binary_search(ans.begin(),ans.end(),x)){
                int count = abs(lower_bound(arr1.begin(),arr1.end(),x)-upper_bound(arr1.begin(),arr1.end(),x));

                for(int i=0; i<count; i++){
                    ans.push_back(x);
                }
            }
            
        }
        
        sort(arr2.begin(),arr2.end());
        for(int x: arr1){
            if(!binary_search(arr2.begin(),arr2.end(),x)){
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};
