#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    
    vector<int> result ;
    vector<int> p ;
    vector<int> n ;

    for(int i = 0 ; i < nums.size() ; i++)
    {
        if(nums[i]<0)
        {
            n.push_back(nums[i]);
        }
        else
        {
            p.push_back(nums[i]);
        }
    }
   
    int i = 0 , j = 0 ;
    while(i<p.size())
    {
        result.push_back(p[i]);
        while(j<n.size())
        {
            result.push_back(n[j]);
            j++;
            break;
            
        }
        i++;
    }    
   

    return result;

}


int main()
{
   vector<int> vec = {3,1,-2,-5,2,-4,-8,4};
   vector<int> res = rearrangeArray(vec);
    for(auto val : res)
    {
        cout << val << " " ;
    }
}