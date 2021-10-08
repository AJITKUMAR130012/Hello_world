

https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/?problemType=functional&difficulty[]=0&page=1&category[]=sliding-window&query=problemTypefunctionaldifficulty[]0page1category[]sliding-window

int maxLen(int arr[], int N)
    {
        // Your code here
        vector<int> pre(N,0);
        for(int i=0;i<N;i++)
        {
            if(arr[i]==0) arr[i]=-1;
        }
        map<int,int> m;
        for(int i=0;i<N;i++)
        {
            if(i==0) pre[i]=arr[i];
           
            pre[i]=pre[i-1]+arr[i];
        }
      /*   for(int i=0;i<N;i++)
        {
            cout<<arr[i]<<" ";
        }
        */
      /*  for(int i=0;i<N;i++)
        {
            cout<<pre[i]<<" ";
        }
        */
      /*  for(int i=0;i<N;i++)
        {
            i
        }
        */
        int ans=0;
        for(int i=0;i<N;i++)
        {
            if(pre[i]==0) ans=max(ans,i+1);
            else if(m.find(pre[i])!=m.end()) ans=max(ans,abs(m[pre[i]]-i));
            else 
            {
                m[pre[i]]=i;
            }
        }
        return ans;
    }
