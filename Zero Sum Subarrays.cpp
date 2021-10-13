https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1


ll findSubarray(vector<ll> arr, int n ) {
        //code here
        
        
        long long A[1000001];
        A[0]=arr[0];
        int ans=0;
        unordered_map<int,int> m;
        for(int i=1;i<n;i++)
        {
            A[i]=A[i-1]+arr[i];
        }
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            ans+=m[A[i]];
            m[A[i]]++;
            
            
        }
       
      
        return ans;
    }
