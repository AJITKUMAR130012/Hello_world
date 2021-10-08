
//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

int search(string s1, string s2) {
	    int i=0,j=0,ans=0,k=s1.length();
	    int n=s2.length();
	    map<char,int> m;
	    int cn=0;
	    for(int i=0;i<k;i++)
	    {
	        m[s1[i]]++;
	        if(m[s1[i]]==1)
	        cn++;
	    }
	    
	    while(j<n)
	    {
	        if(m.find(s2[j])!=m.end())
	        {
	            m[s2[j]]--;
	            if(m[s2[j]]==0) cn--;
	        }
	        if(j-i+1<k) j++;
	        else if(j-i+1==k)
	        {
	            if(cn==0) ans++;
	            if(m.find(s2[i])!=m.end())
	            {
	                m[s2[i]]++;
	                if(m[s2[i]]==1) cn++;
	            }
	            i++;
	            j++;
	        }
	    }
	    return ans;
	    
	}
