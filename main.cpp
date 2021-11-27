#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    if (n%100==0) cout<<n/100; else cout<<n/100+1;
    return 0;
}
