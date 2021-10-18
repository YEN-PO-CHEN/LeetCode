#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long tri[38];
    tri[0] = 0;
    tri[1] = 1;
    tri[2] = 1;
    for (auto i{3}; i < n + 1; ++i)
        tri[i] = tri[i - 3] + tri[i - 2] + tri[i - 1];
    cout << tri[n];
    return 0;
}
