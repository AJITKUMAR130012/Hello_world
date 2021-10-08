//https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

long long maxSubarraySum(int arr[], int n){
        
        long long sum=0,ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            ans=max(ans,sum);
            if(sum<0) sum=0;
        }
    
    return ans;
        
    }
