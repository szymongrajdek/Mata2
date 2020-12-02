#include <random>
#include <iostream>

using namespace std;


int RzutKostka()
{
    default_random_engine losowy_generator;
    uniform_int_distribution<int> distribution(1,6);
    for(int i=0;i<10;i++)
    {
        cout<< distribution(losowy_generator)<<endl;
    }


}

int main()
{
     RzutKostka();
    return();
}
