#ifndef FIGURE_H
#define FIGURE_H
#include <array>
#include <vector>
#include <chrono>

using namespace std::chrono;

using namespace std;

class Figure
{
protected:
    float x, y;
    float xv, yv;
    array <float,3> color;
public:
    Figure(float _x, float _y, array <float,3> _color);
    virtual void draw() = 0;
    virtual void traslacion() = 0;
    virtual float distance(float _x, float _y) = 0;

    float getX()const;
    float getY()const;
    void setX(float value);
    void setY(float value);

    array<float,3> getColor() const;
    void setColor(const array<float,3> &value);

    float getYv() const;
    void setYv(double value);

    float getXv() const;
    void setXv(double value);
};

#endif // FIGURE_H
