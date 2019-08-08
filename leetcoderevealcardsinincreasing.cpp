class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& vec) {
        sort(vec.begin(),vec.end(),greater<int>());
        deque<int> ans;
        
        
        for(int i=0; i<vec.size(); i++){
        ans.push_front(vec[i]);
        rotate(ans.rbegin(),ans.rbegin()+1,ans.rend());
        }
        
        for(int i=0; i<ans.size(); i++){
            vec[i] = ans[i];
        }
        rotate(vec.begin(),vec.begin()+1,vec.end());
        
        return vec;
        
    }
};
