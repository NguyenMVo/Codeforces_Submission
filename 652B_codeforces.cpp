#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin>>a[i];
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (i % 2 == 0 && a[i] > a[j])
                swap(a[i], a[j]);
            else if (i % 2 != 0 && i > 0 && a[j] > a[i])
                swap(a[i], a[j]);
        }
    for (int i = 0; i < n; i++)
        cout<<a[i]<<endl;
    return 0;
}
