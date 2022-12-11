#include "Distance.h"
#include <cmath>
class minkowskiDistance:Distance{
    private:
    int p;
    public:
    void minkowskiDistance(vector<double> v1,vector<doube> v2,int _p=2)

    {
        vec1=v1;
        vec2=v2;
        p=_p;

    }
    Distance::getDistance()
    {
    double dis = 0;
	for (int i = 0; i < vec1.size(); i++)
	{
		dis = dis + pow(abs(vec1[i] - vec2[i]), p);
	}
	return pow(dis, pow(p, -1));
    }

};