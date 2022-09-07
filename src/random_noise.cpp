#include <iostream>
#include <string>
#include <random>

int main()
{
    const int nrolls=10000; //number of experiments
    const int nstars=100;   //max number of stars to distribute
    
    std::default_random_engine generator;
    std::normal_distribution<double> distribution(5.0,2.0);

    int p[10]={};

    for (int i=0; i<nrolls; ++i){
        double number = distribution(generator);
        if ((number>=0.0)&&(number<10.0)) ++p[int(number)];
    }

    std::cout << "normal_distribution (5.0,2.0):" << std::endl;

    for (int i=0; i<10; ++i){
        std::cout << i << "-" << (i+1) << ": ";
        std::cout << std::string(p[i]*nstars/nrolls,'*') << std::endl;
    }

    return 0;


    // Create a 3x3 matrix that is populated by normally distributed random values
    double a[3][3] = {};
    for(i = 0; i<3;++i){
        for(j = 0; j<3;++j){
            a[i][j] = distribution(generator);
        }
    }

}
