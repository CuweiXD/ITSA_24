#include <iostream>  
using namespace std;

int main() {

    double r = 0.0, ans, x, sum = 0.0;  //x=利息    
    int n = 0, p = 0, i = 0;

    cin >> r >> n >> p;

    while (i < n) {

        x = (p + sum) * r;
        sum = sum + x + p;
        i++;

    }

    cout << (long long)sum << endl;
    return 0;
}