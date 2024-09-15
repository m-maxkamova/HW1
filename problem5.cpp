#include <iostream>
using namespace std;
int problem5() {
    float x, y;
    cin >> x >> y;
    y*= 30.48;
    cout << (y > x);
    return 0;
}
