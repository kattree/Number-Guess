#include <cstdio>
#include <cstdlib>
#include <ctime>



int main() {
    srand(time(0));
  
printf("Hello. You pick a number 1-100 and I, the computer, will try to guess it. For simplicity sake (because my owner was too lazy to make it work well) use h for higher, l for lower, and c for correct.");
  


  printf("\nOkay so my starting number is going to be 69. \nIs it higher, lower or correct?\n");
  char* input = new char[3];
  int guessNumber = 0;
  int number =69;
  int copy = 0;
  char* prevAnswer = new char[3];
  int lowestHigh = 69;
  int highestLow = 69;
  bool notWinning = true;

  
  //Game running loop
  while (notWinning){
    guessNumber++;
  fgets(input,3,stdin);
    //checks if higher
  if (input[0] == 'h'){
    if (guessNumber == 1){
    int useless = number - 100;
   int rando = rand() % useless;
     number += rando;
      if(number > 100) number = 90 +rand() % 9;
    printf("After some careful calculations I think that your number is..... %d\n but again tell me if it is higher or lower", number);
      }
   if (prevAnswer[0] == 'l') copy = lowestHigh;
      //gets a higher number without going over the lowest high value it has guessed
    if (guessNumber != 1){
    int useless = lowestHigh - 100;
   int rando = rand() % useless;
     number += rando;
      if(number > 100) number = 90 +rand() % 9;
    printf("After some careful calculations I think that your number is..... %d\n but again tell me if it is higher or lower", number); 
    }
      }
    //checks if lower
    else if (input[0] == 'l'){
      if (guessNumber == 1 || highestLow == 69) {
      int copy = number ;
   int rando = rand() % number; 
     number = number - rando;
 if(number <= 0) number =  1+rand() % 10;
    printf("After some careful calculations I think that your number is..... %d\n but again tell me if it is higher or lower", number);
        }
      //i actually have no idea how to make the highest low section work
      else if (guessNumber != 1){
         if (prevAnswer[0] == 'h') copy = highestLow;
         int copy = number ;
        int useless = lowestHigh - highestLow;
   int rando = rand() % useless; 
     number = number - rando;
        if(number <= 0) number =  1+rand() % 10;
    printf("After some careful calculations I think that your number is..... %d\n but again tell me if it is higher or lower", number);
      }
      }
      //checks if correct
  else if (input[0] == 'c') notWinning = false;
    //fail-safe if user puts in the wrong character
  else {
    printf("I think you're really stupid or something....\n Try that again");
    guessNumber--;
    }
  //breaks the loop if the computer guesses correctly
  if (notWinning == false){
    printf("I knew it!! I'm so smart! Only took me %d guesses!",guessNumber);
    break;
  }
     copy = 0;
    copy+= number;
    prevAnswer[0] = input[0];
        
    }

   
  
}
