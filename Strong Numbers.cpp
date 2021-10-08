//https://practice.geeksforgeeks.org/problems/strong-numbers4336/1

int fact(int n)
	{
	    if(n==0 or n==1) return 1;
	     return n*fact(n-1);
	}
		int is_StrongNumber(int n)
		{
		    // Code here.
		    int m=n;
		    int sum=0;
		    while(m)
		    {
		        int rem=m%10;
		        sum+=fact(rem);
		        m=m/10;
		        
		    }
		 //   cout<<sum;
		    if(sum==n) return 1;
		    else return 0;
		}
