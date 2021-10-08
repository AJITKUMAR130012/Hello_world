//https://practice.geeksforgeeks.org/viewSol.php?subId=c8a93b879e04826de5b0917c8a132fd5&pid=701342&user=chaturvediajit545


vector <int> calculateSpan(int price[], int n)
    {
       vector<int> v;
       stack<pair<int,int>> s;
       for(int i=0;i<n;i++)
       {
           if(s.size()==0) v.push_back(i+1);
           else if(s.size()>0 and s.top().first>price[i])
           {
               v.push_back(i-s.top().second);
           }
           else if(s.size()>0 and s.top().first<=price[i])
           {
               while(s.size()>0 and s.top().first<=price[i])
               {
                   s.pop();
               }
               if(s.size()==0)
               v.push_back(i+1);
               else
               v.push_back(i-s.top().second);
           }
           s.push({price[i],i});
       }
       return v;
       
    }
