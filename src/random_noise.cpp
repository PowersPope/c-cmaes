#include <iostream>
#include <string>
#include <random>

//Test matrix noise function
std::vector<std::vector<double> > generateNoiseMatrix (int N, double mu, double sigma)
{
    std::default_random_engine generator; //initalize the random generator
    std::normal_distribution<double> distribution(mu, sigma); // Specify Normal Distribution

    // instantiate a zeros matrix of desired NxN size with 0s
    std::vector<std::vector<double> > mat(N, std::vector<double>(N)); // Edited this line adding in Parisa's instantiation for a Mat

    // Iter through mat element by element to add random noise to the matrix
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            mat[i][j] = distribution(generator);
        }
    }

    // This is just to print out the new noise matrix to check that it worked
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            std::cout << mat[i][j] << '\t';
        }
        std::cout << '\n';
    }

    // Return the noise matrix
    return mat;
}

int main()

{
    // Call the noise generation function
    generateNoiseMatrix(3, 0.0, 1.0);

    return 0;



}
