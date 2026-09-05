class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     int n=nums.size();
     int longest=0;
     set<int> st;
     for(int i=0;i<n;i++){
        st.insert(nums[i]);
     }  int cnt=0;
     int prev=INT_MIN; 
     for(int x:st){
        if(x==prev+1&&prev!=INT_MIN) cnt++;
        else cnt=1;
       prev=x;
        longest=max(cnt,longest);
     }return longest;
    }
};
