1class Solution {
2public:
3    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
4        int index =m+n-1;
5        int left =m-1;
6        int right =n-1;
7         
8        while( left>=0 && right>=0)
9        {
10            if(nums1[left]>nums2[right])
11            {
12                nums1[index]=nums1[left];
13                left--;
14                index--;
15            }
16            else{
17                nums1[index]=nums2[right];
18                right--;
19                 index--;
20            }
21           
22        }
23            while(right>=0)
24            {
25                nums1[index]=nums2[right];
26                right--;
27                index--;
28            }
29        }
30    
31};