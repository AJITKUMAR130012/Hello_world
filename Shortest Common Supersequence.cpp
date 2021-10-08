//https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1


int shortestCommonSupersequence(string s1, string s2, int m, int n)
    {
        //code here
        int t[m+1][n+1];
        for(int i=0;i<=m;i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i==0 or j==0) t[i][j]=0;
                if(i>=1 and j>=1)
                {
                    if(s1[i-1]==s2[j-1])
                    {
                        t[i][j]=1+t[i-1][j-1];
                    }
                    if(s1[i-1]!=s2[j-1])
                    {
                        t[i][j]=max(t[i-1][j],t[i][j-1]);
                    }
                }
            }
        }

        return m+n-t[m][n];
    }
