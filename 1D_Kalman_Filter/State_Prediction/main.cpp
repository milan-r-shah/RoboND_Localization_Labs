#include <iostream>
#include <math.h>
#include <tuple>

using namespace std;

double new_mean, new_var;

tuple<double, double> state_prediction(double mean1, double var1, double mean2, double var2)
{
    // the state prediction mean function mu;
    new_mean = mean1 + mean2;

    // the state prediction variance function sigma square;
    new_var = var1 + var2;

    return make_tuple(new_mean, new_var);
}

int main()
{
    tie(new_mean, new_var) = state_prediction(10, 4, 12, 4);
    printf("[%f, %f]", new_mean, new_var);
    return 0;
}