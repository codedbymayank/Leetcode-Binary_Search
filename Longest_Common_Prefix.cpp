#include<iostream>
#include<vector>
using namespace std;

bool searchcharacter(char ch , int index , int start , vector<string>& v)
{
    for(int i = start ; i < v.size() ; i++)
    {
        string s = v[i] ;
        if(ch!=s[index])
        {
            return false;
        }
    }
    
    return true ;
}

string longestCommonPrefix(vector<string>& strs) {
    string result = "";
    
    string prefstring = strs[0] ;
    
    for(int i = 0 ; i < prefstring.length() ; i++)
    {
        bool res = searchcharacter(prefstring[i],i,1,strs);
        if(res)
        {
            result+=prefstring[i] ;
        }
        else
        {
            break;
        }
    }
    
    return result ;
}

int main()
{
    vector<string> v = {"cir","car"};
   string res = longestCommonPrefix(v);
   cout << res << endl;
   
}