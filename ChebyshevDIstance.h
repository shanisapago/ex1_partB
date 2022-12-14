#ifndef CHEBYSHEVDISTANCE_H
#define CHEBYSHEVDISTANCE_H
#include <vector>
#include "Distance.h"


class ChebyshevDistance:public Distance{
    
    public:
    ChebyshevDistance(vector<double> v1,vector<double> v2);
    ChebyshevDistance();
     void setVec1(vector<double> v);
     void setVec2(vector<double> v);
     double getDistance();
    
     };
     #endif