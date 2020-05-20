#include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities

void ComputeProb() {
    double totalW = 0.0;
    for(int i = 0; i < sizeof(w)/sizeof(w[0]); ++i) {
        totalW += w[i];
    }

    for(int i = 0; i < sizeof(w)/sizeof(w[0]); ++i) {
        cout << "P"<< i+1 << "=" <<  w[i] / totalW << endl;
    }
}

int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    
    ComputeProb();
    
    return 0;
}
