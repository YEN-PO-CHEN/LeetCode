#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> hash;
    hash = {{"Kevin", 1}, {"john", 10}, {"joel", 8}};
    for (auto it = hash.begin(); it != hash.end(); ++it)
        cout << it->first << " " << it->second << endl;

    cout << "hash's buckets contain:\n";
    for (unsigned i = 0; i < hash.bucket_count(); ++i)
    {
        cout << "bucket #" << i << " contains:";
        for (auto local_it = hash.begin(i); local_it != hash.end(i); ++local_it)
            cout << " " << local_it->first << ":" << local_it->second;
        cout << endl;
    }
    return 0;
}