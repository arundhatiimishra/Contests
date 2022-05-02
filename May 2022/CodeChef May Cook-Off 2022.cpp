/* 
   CodeChef May Cook-Off 2022
   Contest Link - https://www.codechef.com/COOK141?itm_campaign=contest_listing
*/



/*
   Question 1
   Question Link - https://www.codechef.com/problems/DOUBLEDDIST
   Doubled Distances - DOUBLEDDIST
*/

/*
   Time Complexity - O(N*log N) where N is size of vector A
   Space Complexity - O(1) 
*/

#include<bits/stdc++.h>
using namespace std;
#define int long long

int32_t main(){
    int T;
    cin>>T;
    for(int k=1;k<=T;k++){
        int N;
        cin>>N;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        sort(A.begin(),A.end());
        int count=0;
        for(int i=1;i<N-1;i++){
            if(A[i]-A[i-1]==2*(A[i+1]-A[i])||2*(A[i]-A[i-1])==A[i+1]-A[i]){
                count++;
            }else{
                break;
            }
        }
        if(count==N-2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}