#include <iostream>
using namespace std;
int problem4() {
    int N;
    cin >> N;
    int oneG = 50;
    int freeComps = (oneG - (N - (N/oneG * oneG)))%oneG;
    cout << freeComps << endl;
    return 0;
}
