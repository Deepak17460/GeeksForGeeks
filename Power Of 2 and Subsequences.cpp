 long long numberOfSubsequences(int N, long long A[]){
        long long ct=0;
        int mod=1e9+7;
        for(int i=0;i<N;i++)
        if(floor(log2(A[i]))==ceil(log2(A[i]))) ct++;
        long long res=1;
        while(ct--){
            res=(res%mod*2)%mod;
        }
        return (res-1)%mod;
    }
