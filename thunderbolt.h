#ifndef THUNDERBOLT_H
#define THUNDERBOLT_H
#include <figure.h>
#include <array>

class ThunderBolt : public Figure
{
private:
    float xia, yia, xda, yda, xdab, ydab, xiab, yiab;
    float xmin, xmax, ymin;
    int parImpar;
public:
    ThunderBolt(float _x, float _y, float _xia, float _yia, float _xda, float _yda, float _xdab,
                float _ydab, float _xiab, float _yiab, array <float,3> color, int _parImpar);
    void draw();
    void traslacion();
    void disappear();
    float distance(float _x, float _y);
    array<float,3> getColor() const;
    void setColor(array<float,3> _color);
    int getParImpar() const;
    void setParImpar(int value);
    float getXDAB() const;
    float getYDAB() const;
    float getXIAB() const;
    float getYIAB() const;
    float getXmin() const;
    void setXmin(float value);
    float getXmax() const;
    void setXmax(float value);
    float getYmin() const;
    void setYmin(float value);
};

#endif // THUNDERBOLT_H
