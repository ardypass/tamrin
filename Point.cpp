#include <math.h>

class Point {
private:
    int x, y;
public:
    int getX() const {
        return x;
    }

    void setX(int x) {
        Point::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Point::y = y;
    }

    Point(int x, int y) {
        this->setX(x);
        this->setY(y);
    }


    double getDistance(Point point) {
        int subX, subY;
        subX = (point.getX() - this->getX());
        subY = (point.getY() - this->getY());
        subX *= subX;
        subY *= subY;
        return sqrt(subX + subY);
    }
};