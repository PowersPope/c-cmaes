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

    // Iter through mat element by element to add random noise to the matrix
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            mat[i][j] = distribution(generator);
        }
    }

    return mat;
}


