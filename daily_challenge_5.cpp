// Daily Challenge 5
#include<iostream>
#include<iomanip>
using namespace std;
#define Pi 3.141592653589793238
class Area {
private:
    int areaSquare;
    int areaCube;
    float areaCircle;
public:
    // Area of the Square
    void area(int a) {
        areaSquare = a * a;
        cout << areaSquare << endl;
    }

    // Surface area of the Cube
    void area(double s) {
        areaCube = 6 * s * s;
        cout << areaCube << endl;
    }

    // Area of the Circle
    void area(float r) {
        areaCircle = Pi * r * r;
        cout << fixed << setprecision(3) << areaCircle << endl;
    }
};

int main() {
    int a;
    double s;
    float r;
    cin >> a >> s >> r;

    Area obj;
    obj.area(a);
    obj.area(s);
    obj.area(r);

    return 0;
}
