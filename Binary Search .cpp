//https://practice.geeksforgeeks.org/problems/binary-search-1587115620/1



int binarysearch(int arr[], int n, int k){
        // code here
        int start=0,end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==k)
            {
                start=mid+1;
            }
            else if(arr[mid]<k) start=mid+1;
            else end=mid-1;
            
        }
        if(arr[start]==k) return start;
        else if(arr[end]==k) return end;
        else return -1;
    }
