// yandex.code.cpp 

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std; 

int main()
{
    srand(1);
     bool t = true;
     int max;
    int a;
    int* mass;
    int counter = 0; 

    // number of jars 
    std::cout << "enter the number of jars" << std::endl;
    
    printf("\t");
   
    std::cin>>a;

    std::cout << '\t'<<"a=" << a << endl; ;
 
    std::cout << "volumes of each ones is" << std::endl;

    mass = new int[a];
    for (uint32_t i = 0; i < a; i++)
    {
        std::cin >> mass[i]; 

        std::cout << '\t' << "m[" << i <<"]=" << mass[i] << std::endl;
        
        ////////////////////////////////////////////////
        max = mass[0];
        if (mass[i] > max)
        {
            max = mass[i]; 
        }
    }
    for (int j = 0; j < a - 1; j++)
    {
        if (mass[j] > mass[j + 1])
        {
            t = false;
            std::cout <<"-1"<<std::endl; 
            return -1;
        }
        else
        {
           // counter++; 
           // std::cout << "t="<<t<<std::endl;
            
        }
        if (t = 1)
        {
            do
            {
                counter++;
                mass[j]++;

            } while (mass[j] == max);
        }
        
    }
    std::cout << "k="<<counter << std::endl; 
    std::cout <<"max= " <<max << std::endl; 
    //deleting massive
    std::cout << "deleting massive"<<std::endl;

    delete[] mass; 
    std::cout << "deleted";
}
 
