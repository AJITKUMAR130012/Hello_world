// https://practice.geeksforgeeks.org/problems/substrings-of-length-k-with-k-1-distinct-elements/1/?problemType=functional&difficulty[]=1&page=1&sortBy=newest&category[]=sliding-window&query=problemTypefunctionaldifficulty[]1page1sortBynewestcategory[]sliding-window#
 
 int countOfSubstrings(string s, int k) {
        // code here
        map<char,int> m;
        int i=0,j=0,n=s.length(),cn=0,ans=0;
        while(j<n)
        {
            m[s[j]]++;
            if(m[s[j]]==1) cn++;
            if(j-i+1<k) j++;
            else if(j-i+1==k)
            {
                if(cn+1==k)
                {
                    ans++;
                }
                m[s[i]]--;
                if(m[s[i]]==0) cn--;
                
                
                i++;
                j++;
            }
        }
        return ans;
        
    }
