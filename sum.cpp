#include <iostream>
void sum()
{
    long long int Number1 ; 
    long long int  Number2 ;
    
    std::cout << " WRITE YOUR FIRST NUMBER FOR ADDITION AND PRESS RETURN:";
    std::cin >> Number1 ;
    std::cout << "+";
    std::cin >> Number2 ;

    int CodeSum = Number2 + Number1;
   
    std::cout << CodeSum;
}
    int main ()
{ 

    sum();
    return 0; 
}
