#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int A[], int n)
    {
       int zero=0;
       int one=0;
       int two=0;
       for(int i=0;i<n;i++)
       {
           if(A[i]==0)
           {
               zero++;
           }
           if(A[i]==1)
           {
               one++;
           }
           if(A[i]==2)
           {
               two++;
           }
       }
       int i=0;
       while(i<n)
       {
           while(zero)
           {
               A[i]=0;
               i++;
               zero--;
           }
             while(one)
           {
               A[i]=1;
               i++;
               one--;
           }
             while(two)
           {
               A[i]=2;
               i++;
               two--;
           }
       }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends
