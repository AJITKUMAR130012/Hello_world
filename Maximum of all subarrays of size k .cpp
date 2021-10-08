//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

vector <int> max_of_subarrays(int *a, int n, int k)
    {
        // your code here
        vector<int> ans;
        list<int> l;
        int i=0,j=0;
        while(j<n)
        {
            if(l.empty()) l.push_back(a[j]);
            else if(!l.empty() and l.back()<a[j])
            {
                while(!l.empty() and l.back()<a[j])
                {
                l.pop_back();
                }
                l.push_back(a[j]);
            }
            else
                l.push_back(a[j]);
            if(j-i+1<k) j++;
            else if(j-i+1==k)
            {
               ans.push_back(l.front()) ;
               if(l.front()==a[i]) l.pop_front();
               i++;
               j++;
            }
        }
        
        /*
        while(j<n)
        {
            while(!l.empty() and l.back()<a[j])
            {
                l.pop_back();
            }
            l.push_back(a[j]);
            if(j-i+1<k) j++;
            else if(j-i+1==k)
            {
                ans.push_back(l.front());
                if(a[i]==l.front()) l.pop_front();
                i++;
                j++;
            }
        }
        */
        
        
        return ans;
    }
