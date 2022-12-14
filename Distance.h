#ifndef DISTANCE_H_
#define DISTANCE_H_
#include <vector>
using namespace std;
class Distance{
    protected:
    vector<double> vec1;
    vector<double> vec2;

    public:
    virtual double getDistance()=0;
    void setVec1(vector<double> v);
    void setVec2(vector<double> v);
    void printVec1();
    void printVec2();
    
   
};
#endif