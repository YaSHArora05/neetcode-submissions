class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int s: nums){
            mp[s]++;
        }
        vector<vector<int>>buc(nums.size()+1);
        for(auto it:mp){
            buc[it.second].push_back(it.first);
        }
        vector<int> result ;
        for(int i=buc.size()-1;i>=0&&result.size()<k;i--){
            for(int num:buc[i]){
                result.push_back(num);
                if(result.size()==k) break;
        
            }
        }return result;
    }
};
