#include<bits/stdc++.h>
using namespace std;

int solution1(string s)
{
  int N= s.length();
  
  string a="farhan";
  int M= a.length();

  for (int i = 0; i <= N - M; i++) 
  {
        int j;
        for (j = 0; j < M; j++)
        if (s[i + j] != a[j])
                break;
        
          if (j == M)
          return 1;
  }
  return -1;
}

int solution2(string s)
{
  int N= s.length();
  
  string a="raju";
  int M= a.length();

  for (int i = 0; i <= N - M; i++) 
  {
        int j;
        for (j = 0; j < M; j++)
        if (s[i + j] != a[j])
                break;
        
          if (j == M)
          return 1;
  }
  return -1;
}

int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    string s;
    cin>>s;
    int r1=solution1(s);
    int r2=solution2(s);
  
    int final=r1+r2;
    if(final==2)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
  }

  return 0;
}
