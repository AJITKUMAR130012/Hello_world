https://practice.geeksforgeeks.org/problems/equivalent-sub-arrays3731/1/?problemType=functional&difficulty[]=1&page=1&category[]=sliding-window&query=problemTypefunctionaldifficulty[]1page1category[]sliding-window

int countDistinctSubarray(int arr[], int n)
    {
        //code here.
        int i=0,j=0,cn=0,count=0,ans=0;
        unordered_set<int> s;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) s.insert(arr[i]);
        count=s.size();
      //  cout<<count;
      while(j<n)
      {
          m[arr[j]]++;
          if(m[arr[j]]==1) cn++;
          if(cn<count) j++;
          else if( cn==count)
          {
              
              while(cn==count)
              {
                  ans+=(n-j);
                  m[arr[i]]--;
                  if(m[arr[i]]==0) cn--;
                  i++;
              }
              j++;
          }
          
      }
        return ans;
    }
