#include <iostream>
using namespace std;

int main()
{
int a, b, l, N ;
cin>>a>>b>>l>>N;
            int s = 0;
            s = a + ((N - 1) * 2 * a) + b * (N-1) * 2 + l*2;
            cout<<s;
return 0;
}