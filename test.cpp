
#include <armadillo>
#include <iostream>

void test1()
{
    using namespace arma;
    arma::fmat f1 = "1,2,3:";
    arma::fmat f2 = "1,2,3;";
    arma::fmat f3 = f1 + f2;
    std::cout << f3;
}
int main()
{
    test1();
    return 0;
}