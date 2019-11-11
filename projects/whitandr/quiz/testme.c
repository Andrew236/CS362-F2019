//Andrew White Random testing quiz
//software engineering 2
//11/10/19
//In this implementation I had to create random generators that eventually would pass the tester
//in this first function I essentially just created a random charter generator that iterates through numbers charverters
//symobls
// in the second funtion I will explain down below






#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

char inputChar()
{
  //0 to 93.  Adding 32 would bring it to 32(space) and 125(})
 //char randomletter = "123456789<>ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz[(*&^%$#@!{|})]"[random () % 68];
//return randomletter;

char random = (rand() % 94) + 32;         // random charevet from asc11 numbers and symbols as well
    return random;                        //returns the rand charcter
 }


char *inputString()
{



char string[6];             //assing a charecter array to 6
int x;                      //iterator

for(x=0;x<5;x++){           //for loop that makes sure to loop 5 times to generate 5 chars

  string[x] = "abcdefgrstvwz\0"[random()%13];        //takes charecter array of 6 letters and randomizes them till we get reset
}

return string;                              // returns the string
}




void testme()
{
  int tcCount = 0;
  char *s;
  char c;
  int state = 0;
  while (1)
  {
    tcCount++;
    c = inputChar();
    s = inputString();
    printf("Iteration %d: c = %c, s = %s, state = %d\n", tcCount, c, s, state);

    if (c == '[' && state == 0) state = 1;
    if (c == '(' && state == 1) state = 2;
    if (c == '{' && state == 2) state = 3;
    if (c == ' '&& state == 3) state = 4;
    if (c == 'a' && state == 4) state = 5;
    if (c == 'x' && state == 5) state = 6;
    if (c == '}' && state == 6) state = 7;
    if (c == ')' && state == 7) state = 8;
    if (c == ']' && state == 8) state = 9;
    if (s[0] == 'r' && s[1] == 'e'
       && s[2] == 's' && s[3] == 'e'
       && s[4] == 't' && s[5] == '\0'
       && state == 9)
    {
      printf("error ");
      exit(200);
    }
  }
}


int main(int argc, char *argv[])
{
    srand(time(NULL));
    testme();
    return 0;
}
