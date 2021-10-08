//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1

int kthSmallest(int arr[], int l, int r, int k) {
        
        
        
        
         priority_queue<int> q;
        for(int i=l;i<=r;i++)
        {
            q.push(arr[i]);
            if(q.size()>k) q.pop();
        }
        return q.top();
        //code here
    }
