//https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

int doUnion(int a[], int n, int b[], int m)  {
        //code here
     //   unordered_set<int> s;
        unordered_set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
    //    s=s1.union(s2);
        return s.size();
        
    }
