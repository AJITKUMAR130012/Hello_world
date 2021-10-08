//https://practice.geeksforgeeks.org/problems/distribute-n-candies/1

vector<long long> distributeCandies(int N, int K) {
        // code here
        vector<long long> ans(K,0);
        int p=1;
        while(N>0)
        {
            if(N>=p)
            {
            ans[(p-1)%K]+=p;
            N=N-p;
            }
            else
            {
                ans[(p-1)%K]+=N;
                N=0;
            }
            p++;
        }
        return ans;
    }
