#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;

    map<string, int> data;
    string s;
    while (n--) 
    {
        cin >> s;
        if (data.count(s) == 0) 
        {
            cout << "OK\n";
            data[s] = 1;
        } 
        else 
        {
            cout << s << data[s] << '\n';
            data[s] += 1;
        }
    }
    return 0;
}
