https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1/?problemType=functional&difficulty[]=1&page=1&category[]=sliding-window&query=problemTypefunctionaldifficulty[]1page1category[]sliding-window




int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        int arr[100000];
        arr[0]=A[0];
        
        bool sign=1;
        int ans=0;
        if(arr[0]==K) ans=1;
        for(int i=1;i<N;i++)
        {
            
            arr[i]=arr[i-1]+A[i];
            if(arr[i]==K) ans=i+1;
        }
       
        
       
        unordered_map<int,int> m;
        for(int i=0;i<N;i++)
        {
            if(m.find(arr[i]-K)!=m.end())
            {
               
                ans=max(ans,(i-m[arr[i]-K]));
                
            }
            if(m.find(arr[i])==m.end())
                m[arr[i]]=i; 
        }
       return ans;
     
    } 
