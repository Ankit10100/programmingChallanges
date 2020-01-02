//Jolly Jumpers

/*
 * Problem is straight forward, no explanation needed.
 * 
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    vector<int> inp;
    vector<int> values;
    while(cin>>n)
    {
        inp.clear();
        values.clear();
        values.resize(n);
        //Reading input
        for(int i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            inp.push_back(temp);
            values[i] = 0;
        }
        //Looping through inp and taking difference
        for(int i=0; i<(n-1); i++)
        {
            int diff = abs(inp[i]-inp[i+1]);
            values[diff] = 1;
        }
        //Looping through values and checking if everything is present.
        bool jolly = true;
        for(int i=1; i<n; i++)
        {
            if(values[i] == 0)
            {
                cout<<"Not jolly"<<endl;
                jolly = false;
                break;
            }
        }
        if(jolly)
            cout<<"Jolly"<<endl;
    }
    return 0;
}