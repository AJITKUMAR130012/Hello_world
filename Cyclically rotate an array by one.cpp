
//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

void rotate(int a[], int n)
{
    int x=a[0];
    for(int i=n-1;i>=1;i--)
    {
        a[(i+1)%n]=a[i];
    }
    a[1]=x;
}
