#include <cmath>



double SinCos(double x) {
    return sin(x) + cos(x);
}

struct SinCosFunctor {
    double operator() (double x) const { 
	    return sin(x) + cos(x);
    }
};


class paramSinCosFunctor {
  public:
    paramSinCosFunctor(double alpha) : alpha(alpha) {}
    double operator() (double x) const { 
	    return sin(alpha * x) + cos(x);
    }
  private:
    double alpha;
};