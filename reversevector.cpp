#include <iostream>
#include <vector>
#include <algorithm>  // Required for reverse()

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Reverse the vector
    reverse(v.begin(), v.end());

    for(int i : v) {
        cout << i << " ";
    }

    return 0;
}
