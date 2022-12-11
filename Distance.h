#include <vector>
class Distance{
    protected:
    vector<double> vec1;
    vector<double> vec2;

    public:
    virtual double getDistance()=0;
   
};