#include <iostream>
class Point
{
public:
    Point(double x, double y) : x(x), y(y) {};
    void print()
    {
    std::cout << "(" << x << ", " << y << ")\n";
    }
    double Y(double y_) {y=y_; return y;}
    double X(double x_) {x=x_; return x;}
    private:
    double x{}, y{};
};
