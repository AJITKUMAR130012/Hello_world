	
  https://practice.geeksforgeeks.org/problems/number-of-occurrence2259/1
  
  int first(int a[],int start,int end,int x)
		{
		    
		    while(start<=end)
		    {
		        int mid=start+(end-start)/2;
		        if(a[mid]==x)
		        {
		            end=mid-1;
		        }
		        else if(a[mid]<x)
		        {
		            start=mid+1;
		        }
		        else
		        {
		            end=mid-1;
		        }
		    }
		    if(a[start]==x) return start;
		    else return -1;
		    
		}
		
		int last(int a[],int start,int end,int x)
		{
		    
		    while(start<=end)
		    {
		        int mid=start+(end-start)/2;
		        if(a[mid]==x)
		        {
		            start=mid+1;
		        }
		        else if(a[mid]<x)
		        {
		            start=mid+1;
		        }
		        else
		        {
		            end=mid-1;
		        }
		    }
		    if(a[end]==x) return end;
		    else return -1;
		    
		}
		
		
		
		
	int count(int a[], int n, int x) {
	    // code here
	    int ans;
	   int  l=first(a,0,n-1,x);
	   int r=last(a,0,n-1,x);
	    if(l==-1 and r==-1) ans=0;
	    else ans=r-l+1;
	    return ans;
	 /*   int ans;
	    vector<int> v(arr,arr+n);
	    auto upper=upper_bound(v.begin(),v.end(),x);
	    auto lower=lower_bound(v.begin(),v.end(),x);
	    return ans=upper-lower;
	    */
	}
