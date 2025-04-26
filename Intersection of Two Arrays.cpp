#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

bool BinarySearch(int no , vector<int> nums2)
{
    int start = 0 ;
    int end = nums2.size() - 1 ;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(nums2[mid]==no)
        {
            return true ;
        }
        else if(no>nums2[mid])
        {
            start = mid + 1 ;
        }
        else
        {
            end = mid - 1 ;
        }
    }

    return false;
}

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result ;
        vector<int> res ;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        for(int i = 0 ; i < nums1.size() ; i++)
        {
            bool res = BinarySearch(nums1[i],nums2);
            if(res)
            {
                result.insert(nums1[i]);
            }
        }

        for(auto val : result)
        {
            res.push_back(val);
        }

        return res;
}


int main()
{
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    vector<int> res = intersection(nums1,nums2);
    for(auto val : res)
        {
           cout << val << " " ;
        }
}