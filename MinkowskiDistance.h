#ifndef MINKOWSKIDISTANCE_H
#define MINKOWSKIDISTANCE_H
#include "Distance.h"
#include <vector>

class MinkowskiDistance:public Distance{
    private:
    int p;
    public:
    MinkowskiDistance(vector<double> v1,vector<double> v2,int _p=2);
    MinkowskiDistance(int _p);
     void setVec1(vector<double> v);
     void setVec2(vector<double> v);
     double getDistance();
};
#endif 