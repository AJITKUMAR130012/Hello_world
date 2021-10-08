//https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1

long long int PowMod(long long int x,long long int n,long long int M)
		{
		    // Code here
		    long long int  ans=1;
		    while(n)
		    {
		        if(n&1) ans=mul(ans,x,M);
		        x=mul(x,x,M);
		        n>>=1;
		    }
		    return ans;
		}
