
https://practice.geeksforgeeks.org/problems/count-ways-to-reach-the-nth-stair-1587115620/1/?problemType=functional&difficulty[]=1&page=1&category[]=sliding-window&query=problemTypefunctionaldifficulty[]1page1category[]sliding-window#


long long t[10001],m=1e9+7;
    long long fun(long long n)
    {
        if(n==1) return 1;
        if(n==2) return 2;
        if(t[n]!=-1) return t[n];
        else return t[n]=(fun(n-1)+fun(n-2))%m;
        
    }
    
    
    int countWays(int n)
    {
        memset(t,-1,sizeof(t));
        // your code here
         return fun(n);
    }
