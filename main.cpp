#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define mk make_pair
#define pb push_back
#define F first
#define S second
bool comp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.S<p2.S;
}
void solve()
{
    int n;
    cin>>n;
    vector<pair<int,int>> v1,v2;
    int a,b;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        cin>>b;
        v1.pb(mk(a,b));
    }
/*    for(int i=0;i<n;i++)
    {
        cout<<"("<<v1.at(i).F<<","<<v1.at(i).S<<")"<<" ";
    }
    */

  sort(v1.begin(),v1.end(),comp);
   /*    for(int i=0;i<n;i++)
    {
        cout<<"("<<v1.at(i).F<<","<<v1.at(i).S<<")"<<" ";
    }
    */
 v2.pb(v1.at(0));
 int i,j;
 for( i=0,j=0;i<n-1;i++)
 {
     if(v2.at(j).S<v1.at(i+1).F)
     {
         v2.pb(v1.at(i+1));
         j++;
     }
 }
 for(int i=0;i<=j;i++)
 {
     cout<<"("<<v2.at(i).F<<","<<v2.at(i).S<<")"<<" ";
 }

}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
