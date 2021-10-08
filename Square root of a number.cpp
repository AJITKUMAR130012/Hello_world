
//https://practice.geeksforgeeks.org/problems/square-root/1

long long int floorSqrt(long long int x) 
{
    // Your code goes here  
    long long start=1,end=x;
    while(start<=end)
    {
        long long mid=start+(end-start)/2;
         long long l=mid*mid; 
        if(l==x) return mid;
        else if(l<x) start=mid+1;
        else end=mid-1;
    }
    return end;
}
