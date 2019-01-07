#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    string n, m;
    cin>>n>>m;
    string a = n;
    sort(a.begin(), a.end());
    if (a[0] == '0')
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != '0')
            {
                swap(a[i], a[0]);
                break;
            }
        }
    }
    if (a == m)
        cout<<"OK";
    else
        cout<<"WRONG_ANSWER";
    return 0;
}
