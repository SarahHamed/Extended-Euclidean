#include <iostream>
#include <stdio.h>

using namespace std;
long long z=0;
long long zz=1;
 long long MulInverse=0;
   long long AdditiveInverse( long long N, long long M)
    {
   if(N>M)
    {
        while(N>M)
        N=N-M;
    }
     z=M-N;

     return z;
    }

    void MultiplicativeInverse( long long N, long long M)
    {
    long long A1=1,A2=0,A3=M,B1=0,B2=1,B3=N;
    long long Q=0,t1=0,t2=0,t3=0;
    while(B3>1)
    {
        Q=A3/B3;
        t1=A1;
        t2=A2;
        t3=A3;
        A1=B1;
        A2=B2;
        A3=B3;
        B1=t1-Q*A1;
        B2=t2-Q*A2;
        B3=t3%B3;

    }
    if(B3==0)
       {
           zz=B3;
        //cout<<"IMPOSSIBLE"<<endl;
        }
    else if(B3==1)
    {
        while(B2<0)
        {
            B2=B2+M;
        }
       // cout<<B2<<endl;     //B2 is the inverse
       while(B2>M)
        B2=B2-M;
       MulInverse=B2;
    }
    }
int main()
{
    long long AddInv=0;
   long long M=0,N=0;
    scanf("%I64d %I64d",&M,&N);
   //cin>>M;
   //cin>>N;
  // cout<<M<< " "<<N<<endl;
     while(N<0)
      {  N=N+M;}
    AddInv=AdditiveInverse( N,M );
    MultiplicativeInverse(N,M);

    if(zz==0)
        cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<AddInv<<" "<<MulInverse<<endl;
        }

    return 0;
}
