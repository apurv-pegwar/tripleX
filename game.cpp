#include <iostream>
#include <ctime>

void GameIntroduction (int difficuilty)
{
    std::cout << "  WELCOME TO THE GAME OF DEATH \n\n";
    std::cout << "WE ARE ABOUT TO OPEN THE SUIT,we have to fill code till 10 currently we are at" << difficuilty;
    std::cout << "\nwe have to enter correct code or....have to be prepare for the worst \n\n";//game opening line 
}
bool PlayGame (int difficuilty)
{
    GameIntroduction (difficuilty) ;
    
    
    int CodeA = rand() % difficuilty + difficuilty; 
    int CodeB = rand() % difficuilty + difficuilty;
    int CodeC = rand() % difficuilty + difficuilty;  
 
    int Codesum = CodeA + CodeB + CodeC; 
    
    int CODEmultiply = CodeA * CodeB * CodeC;
    

    std::cout << "\n**So.. their are 3 numbers\n";
    std::cout << "\n**THE NUMBERS ADDS UP TO "<< Codesum;
    std::cout <<  std::endl;
    std::cout <<"\n**AND MULTIPLIES TO "<< CODEmultiply << std::endl;


    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
    if (GuessSum == Codesum && GuessProduct == CODEmultiply)
    {
     std::cout << "Hell yeah we guessed is right now we can safely remove him from suit \n\n";  /* code */
     return true;
    }
    else 
    {
        std::cout << "BOOOOOM... is this hell or haven\n\n";
        return false;
    }
}

int main()
{
    srand(time(NULL)); // CREATE RANDOM SECQUENCE BASED ON TIME OF THE DAY 

    int LevelDifficuilty = 1;
    int const MaxLevel = 10;
    while (LevelDifficuilty <= MaxLevel)
    {
     bool blevel1Completed = PlayGame(LevelDifficuilty);
     /* code */
     std::cin.clear(); //clear any error 
     std::cin.ignore(); //discard the buffer
     
     if (blevel1Completed)
     {
       ++LevelDifficuilty;  /* increase level difficuilty */
     }
     
     
    
    }
    
    

    std::cout << " you opened the suit succesfully ";


    return 100;
}

