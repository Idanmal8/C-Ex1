
#include <stdio.h>



int nextPrime (int);
int isPalindrom(int num);
int containNonPrimesDigitsOnly(int num);
int isSpecial(int num);
void printAllSpecial(int from , int to);

int
main ()
{


}
// a method that returns the next prime number after the minimum num inputed.
int
nextPrime (int num)
{
  int primeNum = num;
  int flag = 0;

  if (num <= 1)
    return 2;
  if (num == 2)
    return 3;



  for (int i = num + 1;; i++)
    {
      for (int j = 2; j < i; j++)
	{

	  if (i % j == 0)
	    {
	      break;
	    }
	  if (j + 1 == i)
	    {
	      primeNum = i;
	      flag = 1;
	    }

	}
      if (flag == 1)
	{
	  break;

	}
    }
  return primeNum;
}
// a method that checks if the number that is inputed is a polindrom or not .
int isPalindrom(int num){
    int remain = 0;
    int backRemain = 0;
    int Original = num;
    while (num != 0){
        remain = num % 10;
        backRemain = backRemain * 10 + remain;
        num /= 10;
    }
    if(backRemain == Original){
        return 1;
    }
   return 0;
}
// a method that checks if the number thay is inputed has prime digits in it .
int containNonPrimesDigitsOnly(int num){
    int remain = 0;
    while(num != 0){
        remain = num % 10;
        if(IsPrime(remain) == 1){
            return 0;
        }
        num /= 10;
    }
    return 1;
}
// a method that checks if the number is a prime number .
int IsPrime(int number) {
    int i;
    if(number < 2){
        return 0;
    }
    for (i=2; i<number; i++) {
        if (number % i == 0 && i != number) return 0;
    }
    return 1;
}
// a method that checks if the number is spiecial according to the instruction .
int isSpecial(int num){
    if(containNonPrimesDigitsOnly(num) == 1 && isPalindrom(num) == 1 && IsPrime (num) == 1){
        return 1;
    }
    return 0;
}
// a method that print all of the spicial numbers from a certine number till the end (to).
void printAllSpecial(int from , int to){
    for(int i = from ; i <= to ; i++){
       if(isSpecial(i) == 1){
           printf("%d \n" , i);
       }
    }
}








