class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size=nums1.size()-1;
        n--;
        m--;
        while(n>=0 && m>=0){
            if(nums2[n]>nums1[m]){
                nums1[size--]=nums2[n--];
            }else{
                nums1[size--]=nums1[m--];
            }
        }
        while(n>=0){
            nums1[size--]=nums2[n--];
        }
    }
};