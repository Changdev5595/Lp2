#include<iostream>
using namespace std;

class Solution {
    public:
        void pattern1(int n)
        {
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=n;j++)
                {
                    cout<<"*";
                }
                cout<<endl;
            }
        }
    };
    int main()
    {
        int n;
        cout<<"enter a no:";
        cin>>n;
        Solution sol;
        sol.pattern1(n);
        return 0;
    }
