//https://practice.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1


void arrange(long long a[], int n) {
        // Your code here
        
        for(int i=0;i<n;i++)
        {
            if(a[a[i]]<n) a[i]=a[a[i]]*n+a[i];
            else {
                int rem=a[a[i]]%n;
                a[i]=rem*n+a[i];
            }
        }
        for(int i=0;i<n;i++)
        {
            a[i]=a[i]/n;
        }
        
    }
