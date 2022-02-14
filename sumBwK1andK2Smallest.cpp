#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
        // Your code goes here
        priority_queue <long long> pq1;
        priority_queue <long long> pq2;
        for(long long i=0;i<N;i++){
            pq1.push(A[i]);
            if(pq1.size()>K1){
                pq1.pop();
            }
        }
        long long a=pq1.top();
         for(long long i=0;i<N;i++){
            pq2.push(A[i]);
            if(pq2.size()>K2){
                pq2.pop();
            }
        }
        long long b=pq2.top();
        vector <long long> v;
        for(long long i=0;i<N;i++){
            if(A[i]>a and A[i]<b) v.push_back(A[i]);
        }
        long long ans=0;
        for(auto x:v) ans+=x;
        return ans;
    }
};

// { Driver Code Starts.
int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        cin>>n;
        long long a[n+5];
        for(int i =0;i<n;i++)
            cin >> a[i];
        
        long long k1, k2;
        cin >> k1 >> k2;
        Solution ob;
        cout << ob.sumBetweenTwoKth(a, n, k1, k2) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends