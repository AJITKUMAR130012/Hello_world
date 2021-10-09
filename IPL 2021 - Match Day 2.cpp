https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1/?problemType=functional&difficulty[]=1&page=1&sortBy=newest&category[]=sliding-window&query=problemTypefunctionaldifficulty[]1page1sortBynewestcategory[]sliding-window

vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        list<int> l;
        int i=0,j=0;
        vector<int> ans;
        while(j<n)
        {
            if(l.empty()) l.push_back(arr[j]);
            else
            {
                while(l.back()<arr[j] and !l.empty())
                {
                    l.pop_back();
                }
                l.push_back(arr[j]);
            }
            if(j-i+1<k) j++;
            else if(j-i+1==k)
            {
                ans.push_back(l.front());
                
                if(l.front()==arr[i])
                    l.pop_front();
                    i++;
                    j++;
            }
            
        }
        return ans;
    }
