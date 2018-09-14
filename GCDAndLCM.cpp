#include <iostream>

using namespace std;

long hcf(long a,long b)
    {
        if(b%a==0)
            return a;
        else
            return hcf(b%a,a);
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long x,y,k,l;
    cin>>x>>y;
    if(x<y)
      {
          k=hcf(x,y);
        l=(x*y)/k;
        cout<<k<<" "<<l<<endl;
      }
      else
        {
          k=hcf(y,x);
        l=(x*y)/k;
        cout<<k<<" "<<l<<endl;
      }
    }

    return 0;
}
