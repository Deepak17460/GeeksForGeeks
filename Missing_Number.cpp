// Approach 1 
// Time Complexity is O(n) & Space Complexity is O(n) using HashMap

 #include<bits/stdc++.h>
 using namespace std;

int MissingNumber(vector<int>&arr){
    int n=arr.size();
    vector<int>Hash(n+1,0);
    for(int i:arr){
        Hash[i-1]=1;
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        if(Hash[i]==0) ans=i+1;
    }
    return ans;
}

 int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int &i:arr) cin>>i;
     cout<<MissingNumber(arr)<<endl;
 }

// Approach 2
// Using summation of first N natural numbers in whcih Time Complexity is O(N) & Space Complexity is O(1)
// Time Complexity is O(n) & Space Complexity is O(1) using Natural sum approach
 #include<bits/stdc++.h>
 #define ll long long int
 using namespace std;

int MissingNumber(vector<int>&arr){
    int n=arr.size()+1;
    ll sum=n*(n+1)>>1;
    ll res =accumulate(arr.begin(), arr.end(), 0);
    return sum-res;
}

 int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int &i:arr) cin>>i;
     cout<<MissingNumber(arr)<<endl;
 }
// Approach 3
// using XOR operation
// Time Complexity is O(n) & Space Comoplexity is O(1)
 #include<bits/stdc++.h>
 #define ll long long int
 using namespace std;

int MissingNumber(vector<int>&arr){
    int n=arr.size();
    int x1=arr[0];
    int x2=1;
    for(int i=1;i<n;i++) x1=x1^arr[i];
    for(int i=2;i<=n+1;i++) x2=x2^i;
    return x1^x2;

}

 int main(){
     int n;
     cin>>n;
     vector<int>arr(n);
     for(int &i:arr) cin>>i;
     cout<<MissingNumber(arr)<<endl;
 }
