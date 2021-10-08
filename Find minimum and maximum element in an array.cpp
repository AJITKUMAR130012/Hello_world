 https://practice.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1

pair<long long, long long> getMinMax(long long v[], int n) {
     long long ans1=INT_MAX,ans2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(v[i]>ans2)
        {
            ans2=v[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]<ans1)
        {
            ans1=v[i];
        }
    }
    pair<int,int> ans={ans1,ans2};
  /*  ans.first=ans1;
    ans.second=ans2;
    */
    return ans;
    
}
