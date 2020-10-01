#include <iostream>
using namespace std;
#include <cmath>
#include <tuple>

void calculateDimensions(int s) {
    float height = sqrt(((s*s)/4.16));
    cout << height << endl;
    float width = 1.777778*height;
    cout << width;
}


int main() {
    cout << "CLASS TEST 4" << endl;
    calculateDimensions(4);

    return 0;
}
