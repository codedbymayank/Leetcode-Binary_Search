#include<iostream>
#include<vector>
using namespace std;

vector<int> buildArray(vector<int>& nums) {
    vector<int> result ;
    for(int i = 0 ; i < nums.size() ; i++)
    {
        result.push_back(nums[nums[i]]) ;
    }

    return result;
}

int main()
{
    vector<int> nums = {11,21,10,6};
    vector<int> res = buildArray(nums);
    for(auto val : res)
    {
        cout << val << " " ;
    }
}