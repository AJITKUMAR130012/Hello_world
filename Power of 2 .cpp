
//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1

bool isPowerofTwo(long long n){
        if(n==0) return false;
        while(n)
        {
            if(n==1) return true;
            else
            {
                if(n&1)
                {
                    return false;
                }
            }
            n=n>>1;
        }
        
        // Your code here    
        
    }
