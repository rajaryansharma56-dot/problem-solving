class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {

        vector<int> a, b;

        for(int i = 0; i < nums1.size(); i++)
        {
            bool found = false;

            for(int j = 0; j < nums2.size(); j++)
            {
                if(nums1[i] == nums2[j])
                    found = true;
            }

            if(found == false && find(a.begin(), a.end(), nums1[i]) == a.end())
                a.push_back(nums1[i]);
        }

        for(int i = 0; i < nums2.size(); i++)
        {
            bool found = false;

            for(int j = 0; j < nums1.size(); j++)
            {
                if(nums2[i] == nums1[j])
                    found = true;
            }

            if(found == false && find(b.begin(), b.end(), nums2[i]) == b.end())
                b.push_back(nums2[i]);
        }

        return {a, b};
    }
};