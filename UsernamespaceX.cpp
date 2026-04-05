#include<iostream>
using namespace std;

namespace PPA
{
    int i=11;

}

namespace LB
{
    int j=21;
}

using namespace LB;     //Method-1 foe using namespace

int main()
{
    cout<<PPA::i<<"\n";         //11    //method-2 for using namepace
    cout<<j<<"\n";          //21
    return 0;
}