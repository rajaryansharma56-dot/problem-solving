class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        int even_count=0;

        for(int i=0; i<n; i++){
            int k=nums[i];
            int digit_count=0;

            while(k>0){
                k=k/10;
                digit_count++;
            
            }

            if(digit_count%2==0){
                even_count++;
            }

        }

        return even_count;
        
    }
};