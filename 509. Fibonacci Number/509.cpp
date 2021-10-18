#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0);
    a[0] = 0;
    a[1] = 1;
    for (auto i = 2; i < n + 1; ++i)
        a[i] = a[i - 2] + a[i - 1];
    cout << a[n] << "\n";
    return 0;
}
