//
//  CircleWithDestructor.h
//  220125_Day09
//
//  Created by Yongbean Chung on 2022/01/25.
//

#ifndef CircleWithDestructor_h
#define CircleWithDestructor_h

class Circle {
public:
    Circle();
    Circle(double);
    ~Circle();
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfOjects();

private:
    double radius;
    static int numberOfObjects;
};

#endif /* CircleWithDestructor_h */
