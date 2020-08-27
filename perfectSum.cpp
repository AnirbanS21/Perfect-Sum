#include <bits/stdc++.h>
using namespace std;
static int cnt;
void Compute(int n,int a[],int k,int i)
{
  int b[n];
  for(int m=0; m<n;m++)
    b[m]=0;
  int j=n-1;
  while(i>0)
  {
    b[j]=i%2;
    i=i/2;
    j--;
  }
  int sum=0;
  for (int m = 0; m < n; m++)
    if (b[m] == 1)
    {
      sum = sum + a[m];
    }
  if(sum==k)
  {
    cnt++;
  }
}

int PerfectSums(int n,int a[], int k)
{
  int x = pow(2, n);
  for(int i=1;i<x;i++)
    Compute(n,a,k,i);
  return cnt;
}


int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    cin>>k;
    cout<<"Result: "<<PerfectSums(n,a,k)<<endl;
}


/*****************************OUTPUT****************************
anirban@LAPTOP-LOQP78LI:/mnt/c/Users/anirb/Desktop$ g++ perfectSum.cpp
anirban@LAPTOP-LOQP78LI:/mnt/c/Users/anirb/Desktop$ ./a.out
5
4 7 8 2 3
12
Result: 2


*/
