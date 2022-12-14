#ifndef CANBERRADISTANCE_H
#define CANBERRADISTANCE_H
#include "Distance.h"
#include <vector>

class CanberraDistance:public Distance{
    public:

    CanberraDistance(vector<double> v1,vector<double> v2);
    CanberraDistance();
    void setVec1(vector<double> v);
    void setVec2(vector<double> v);
    double getDistance();



};
#endif