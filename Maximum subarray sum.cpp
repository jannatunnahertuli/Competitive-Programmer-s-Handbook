// page 23 algorithm 23 /.....this algorithm efficiency is o(1)
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,array[100000];
    cin>>n;
    for(int k=0; k<n; k++)
    {
        cin>>array[k];
    }
      int best = 0, sum = 0;
           for (int k = 0; k < n; k++) {
           sum = max(array[k],sum+array[k]);
        best = max(best,sum);
}
             cout<<"The maximum Subarray is" <<endl;
            cout << best << "\n";
   return 0;
}
