class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        map<char,int> m;
        for(int i=0; i<chars.length(); i++){
            m[chars[i]]++;
        }
        int ans=0;
        map<char,int> duplicate = m;
        for(int i=0; i<words.size(); i++){
           
            map<char,int> temp;
            for(int j=0; j<words[i].size(); j++){
                temp[words[i][j]]++;
            }
            int count=0;
            for(int j=0; j<words[i].size(); j++){
            if(temp[words[i][j]] <= duplicate[words[i][j]]){
                count++;
            }
            }
            if(count==words[i].size()){
                ans+=count;
            }
            temp.clear();
            
        }
        return ans;
    }
};
