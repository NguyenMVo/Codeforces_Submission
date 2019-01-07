#include <iostream>

using namespace std;
int main()
{
    long long a, b, c;
    cin>>a>>b>>c;
    long long x = 2 * (a + b);
    long long y = a + b + c;
    long long z = 2 * (a + c);
    long long t = 2 * (b + c);
    cout<<min(min(x, y), min(z, t));
    return 0;
}
