//https://practice.geeksforgeeks.org/problems/gray-code4907/1 

int getGray(int n) {
        // code here
        return n^(n>>1);
    }
