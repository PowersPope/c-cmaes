#include <cmath>
#include <random>
#include <vector>
#ifndef RANDOM_NOISE_H_INCLUDED
#define RANDOM_NOISE_H_INCLUDED

std::vector<std::vector<double>> generateNoiseMatrix (int N; double mu; double sigma);

#endif

std::vector<std::vector<double>> generateNoiseMatrix (int N; double mu; double sigma){
    std::default_random_engine generator; //initalize the random generator
    std::normal_distribution<double> distribution(mu, simga); // Specify Normal Distribution

    std::vector<std::vector<double>> mat(N, vector<double> (N,0));
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << mat[i][j] << '\t';
        }
        std::cout << std::endl;
    }


    return mat;
}


