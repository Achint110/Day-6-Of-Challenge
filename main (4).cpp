class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
         map<int,int>p;
         for(int i=0;i<nums.size();i++){
         p[nums[i]]++;

         }
        int maxi=INT_MIN;
        for(auto i:p){
            if(i.second >maxi){
                maxi=i.second;
            }
        }
        int count=0;
for(auto i:p){
    if(i.second==maxi)
    count++;
}
int ans=count*maxi;
return ans;


    }
};