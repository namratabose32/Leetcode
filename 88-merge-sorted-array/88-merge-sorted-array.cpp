class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        for(i=0;i<n;i++)
            nums1.erase(nums1.end()-1);
        i=0;
        while(j<nums2.size() && i<nums1.size()){
            if(nums1[i]>=nums2[j]){
                nums1.insert(nums1.begin()+i,nums2[j]);
                i++;
                j++;
            }else
                i++;
        }
        while(j<n){
            nums1.push_back(nums2[j]);
            j++;
        }
    }
};