class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = m-1;
        for(int i=m+n-1;i>=n;i--){
            nums1[i] = nums1[j--];
        }
        int n1ptr=n;
        int n2ptr = 0;
        int i=0;
        
        while(i<m+n ){
            if(n1ptr>=n+m ){
                nums1[i++] = nums2[n2ptr++];
            }else if(n2ptr>=n){
                nums1[i++] = nums1[n1ptr++];
            }else{
            if(nums1[n1ptr]>nums2[n2ptr]){
                nums1[i++] = nums2[n2ptr++];
            }else{
                nums1[i++] = nums1[n1ptr++];
            }
           }
        }
        
        
    }
};
