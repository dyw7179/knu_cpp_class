#ifndef SHAPE_H
#define SHAPE_H

class Shape {
protected:
    virtual void draw() = 0;

public:
    Shape() {}
    virtual ~Shape() {}
    void paint();
};

#endif
