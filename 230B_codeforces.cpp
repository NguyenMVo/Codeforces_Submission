#include <iostream>
#include <cmath>

bool Prime (long long n)
{
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
    return true;
}

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 1 && ceil(sqrt(a[i])) == sqrt(a[i]) && Prime(sqrt(a[i])) == 1)
                cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
