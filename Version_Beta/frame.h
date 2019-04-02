#ifndef FRAME_H
#define FRAME_H
#include <figure.h>
#include <array>

class Frame : public Figure
{
private:
    float xia, yia, xda, yda, xdab, ydab, xiab, yiab;
public:
    Frame(float _x, float _y, float _xia, float _yia, float _xda, float _yda, float _xdab,
          float _ydab, float _xiab, float _yiab, array <float,3> color);
    void draw();
    void traslacion();
    void disappear();
    float distance(float _x, float _y);
};

#endif // FRAME_H
