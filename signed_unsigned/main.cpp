#include <iostream>
#include <vector>

int main()
{
    using namespace std;

    const int max = 10;
    vector<int> v(max, 77);

    for(int i=0; i < v.size(); ++i) {
        cout << v[i] << endl;
    }
    return 0;
}
