class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        map<char,int>mp1,mp2;
        for(int i=0;i<a.length();i++)
        {
            mp1[a[i]]++;
        }
        for(int i=0;i<b.length();i++)
        {
            mp2[b[i]]++;
        }
        for(auto it1=mp1.begin(),it2=mp2.begin();it1!=mp1.end()||it2!=mp2.end();it1++,it2++)
        {
            if(it1->first!=it2->first || it1->second!=it2->second)
              return 0;
        }
        return 1;
    }

};
