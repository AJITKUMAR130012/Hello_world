//https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1/?category[]=Binary%20Search&category[]=Binary%20Search&problemType=functional&page=1&query=category[]Binary%20SearchproblemTypefunctionalpage1category[]Binary%20Search


int findPeakElement(vector<int>& a) 
    {
        int start=0,end=a.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid==end)
            {
                if(a[mid]>a[mid-1]) return a[mid];
            }
            if(mid==start)
            {
                if(a[mid]>a[mid+1]) return a[mid];
            }
            if(a[mid]>a[mid+1] and a[mid-1]<a[mid] ) return a[mid];
            if(a[mid]<a[mid+1]) start=mid+1;
            else end=mid-1;
        }
    }
