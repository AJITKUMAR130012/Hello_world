//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1


int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        int ans=0;
        int t[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 or j==0) t[i][j]=0;
                if(i>=1 and j>=1)
                {
                    

                   if(s1[i-1]==s2[j-1])
                   {
                      t[i][j]=1+t[i-1][j-1];
                      ans=max(ans,t[i][j]);
                   }
                   if(s1[i-1]!=s2[j-1])
                   {
                      t[i][j]=0;
                   }
                }
            }
        }
        
        
        return ans;
    }
