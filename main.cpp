#include <random>
#include <iostream>

using namespace std;


int RzutKostka()
{
    default_random_engine losowy_generator;
    uniform_int_distribution<int> distribution(1,6);
    return distribution(losowy_generator);


}

int main()
{
    return RzutKostka();
}
