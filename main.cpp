#include <iostream>

using namespace std;
int get (int x )
{

    if (x ==0)
    {

        return 0 ;
    }
    else
    {

         return (x-((x/10)*10))+get((x-(x-((x/10)*10)))/10) ;

    }

}

int main()
{

    cout<<get(1729) ;

}
