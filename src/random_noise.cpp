#include <iostream>
#include <string>
#include <random>

//Test matrix noise function
std::vector<std::vector<double> > generateNoiseMatrix (int N, double mu, double sigma)
{
    std::default_random_engine generator; //initalize the random generator
    std::normal_distribution<double> distribution(mu, sigma); // Specify Normal Distribution

    std::vector<std::vector<double> > mat(N, std::vector<double> (N,0.0));
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            std::cout << mat[i][j] << '\t';
        }
        std::cout << std::endl;
    }

    // Now add random noise to the matrix
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < N; ++j){
            mat[i][j] = distribution(generator);
        }
    }

    // This is just to check that it worked
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

    // Beginning matrix to add too
    //double test[3][3] = {
        //{8,10,2},
        //{3,5,1},
        //{9,4,3}
    //};
    // Matrix addition resulting matrix
    //double sum[3][3];

    // Create a 3x3 matrix that is populated by normally distributed random values
    //double a[3][3];
    //for(int i = 0; i < 3; ++i){
        //for(int j = 0; j < 3; ++j){
            //a[i][j] = distribution(generator);
        //}
    //}
    // Perform Matrix addition
    //for (int i = 0; i < 3; ++i){
        //for (int j = 0; j < 3; ++j){
            //sum[i][j] = a[i][j] + test[i][j];
        //}
    //}
    // Print out the new matrix
    //for (int i = 0; i < 3; ++i){
        //for (int j = 0; j < 3; ++j){
            //std::cout << sum[i][j] << '\t';
        //}
        //std::cout<<'\n';
    //}

    generateNoiseMatrix(3, 0.0, 1.0);




    return 0;



}
