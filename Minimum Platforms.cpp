//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1

int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	int ans=INT_MIN;
    	vector<int> v(arr,arr+n);
    	sort(v.begin(),v.end());
    	sort(dep,dep+n);
    	for(int i=0;i<n;i++)
    	{
    	//    int x=upper_bound(v.begin(),v.end(),dep[i])-(v.begin())
    	    ans=max(ans,int(upper_bound(v.begin(),v.end(),dep[i])-(v.begin()+i)));
    	}
    	return ans;
    }
