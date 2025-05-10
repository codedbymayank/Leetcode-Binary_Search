#include<iostream>
#include<vector>
using namespace std ;
bool dupcheck(char ch , vector<char> check)
    {
        for(int i = 0 ; i < check.size() ; i++)
            {
                if(ch == check[i])
                {
                    return true ;
                }
            }

        return false;
    }

    int calculatingcount(char ch , int startindex , vector<char> vwl)
    {
        int startcount = 0  ;
        for(int st = startindex ; st < vwl.size() ; st++)
            {
                if(vwl[st]==ch)
                {
                    startcount++;
                }
            }

        return startcount ;
    }

 int maxFreqSum(string s) {
        vector<char> vwl ;
        vector<char> conso ;

        for(int i = 0 ; i < s.length() ; i++)
          {
            if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u')
            {
                vwl.push_back(s[i]) ;
            }
             else
            {
                conso.push_back(s[i]) ;
            }
          }

        //For Vowels
        int maxvowcount = 0 ;
        int findcount  = 0 ;
        vector<char> check;
        for(int i = 0 ; i < vwl.size() ; i++)
            {
                char ch = vwl[i];
                
                   bool res = dupcheck(ch,check);
                    if(res)
                    {
                        
                    }
                    else
                    {
                       findcount = calculatingcount(ch , i , vwl);
                        check.push_back(ch);
                    }
                

                maxvowcount = max(maxvowcount,findcount);
                findcount = 0 ;
                
                
            }

        //For Consonant
        int maxconscount = 0 ;
        int findconscount  = 0 ;
        vector<char> conscheck;
        for(int i = 0 ; i < conso.size() ; i++)
            {
                char ch = conso[i];
                
                   bool res = dupcheck(ch,conscheck);
                    if(res)
                    {
                        
                    }
                    else
                    {
                       findconscount = calculatingcount(ch , i , conso);
                        conscheck.push_back(ch);
                    }
                

                maxconscount = max(maxconscount,findconscount);
                findconscount = 0 ;
                
                
            }


        return (maxconscount+maxvowcount);
    }

int main()
{
    int result = maxFreqSum("aeiaeia");
    cout << result << endl;
}