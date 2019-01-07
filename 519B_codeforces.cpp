#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n, x, t, d;
    cin>>n;
    int c[n];
    int a[n - 1];
    int b[n - 2];
    for (int i = 0; i < n; i++)
        cin>>c[i];
    for (int i = 0; i < n - 1; i++)
        cin>>a[i];
    for (int i = 0; i < n - 2; i++)
        cin>>b[i];
    sort(a, a + (n - 1));
    sort(b, b + (n - 2));
    sort(c, c + n);
    for (int i = 0; i < n ; i++)
        if (c[i] != a[i])
        {
            t = c[i];
            break;
        }
    for (int i = 0; i < n - 1; i++)
        if (a[i] != b[i])
        {
            d = a[i];
            break;
        }
    cout<<t<<endl<<d;
    return 0;
}
