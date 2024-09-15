#include <iostream>
using namespace std;
int problem3() {
    float tempInCelsius;
    cin >> tempInCelsius;
    float tempInFarenheit = tempInCelsius * (9./ 5) + 32;
    cout << "The temperature in Farenheit is equal to " << tempInFarenheit;
    return 0;
}
