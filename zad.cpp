#include <iostream>

using namespace std;

double getSide(double x1, double y1, double x2, double y2, double px, double py) {
    return (x2 - x1) * (py - y1) - (y2 - y1) * (px - x1);
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    double px, py;                 

    cout << "Enter coordinates for point 1 (x1 y1): ";
    cin >> x1 >> y1;
    cout << "Enter coordinates for point 2 (x2 y2): ";
    cin >> x2 >> y2;
    cout << "Enter coordinates for point 3 (x3 y3): ";
    cin >> x3 >> y3;

    double area = getSide(x1, y1, x2, y2, x3, y3);

    if (area == 0) {
        cout << "The triangle does not exist." << endl;
        return 0; 
    }

    cout << "Enter coordinates for Point P (x y): ";
    cin >> px >> py;

    double d1 = getSide(x1, y1, x2, y2, px, py); 
    double d2 = getSide(x2, y2, x3, y3, px, py); 
    double d3 = getSide(x3, y3, x1, y1, px, py); 

    bool allPositive = (d1 >= 0 && d2 >= 0 && d3 >= 0);
    bool allNegative = (d1 <= 0 && d2 <= 0 && d3 <= 0);

    if (allPositive || allNegative) {
        cout << "The point is inside the triangle." << endl;
    } else {
        cout << "The point is outside the triangle." << endl;
    }

    return 0;

}
