#ifndef DISTANCE.H
#define DISTANCE.H
#include <vector>
using namespace std
class Distance{
    protected:
    vector<double> vec1;
    vector<double> vec2;

    public:
    virtual double getDistance()=0;
   
};
#endif