 //https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1
 
 long long toh(int N, int from, int to, int aux) {
        // Your code here
        
        if(N==1)
        {
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            return 1;
        }
       int l= toh(N-1,from,aux,to);
         cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
        int r= toh(N-1,aux,to,from);
       return 1+l+r;  
    }
