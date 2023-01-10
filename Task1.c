#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  //Introduce variables
  char firstname[51];
  char lastname[51];
  char colour[1024];
  char food[1024];
  char hobby[1024];
  int age;
  int len;
  int random_number;
  int num_guess;
  int no_guesses = 0;

  //Step 1: Ask for first name
  printf("Whats you first name: ");

  scanf("%s", firstname);

  len = strlen(firstname);
 
 //Tests if first name is longer than 50 characters
  if (len > 50) {

    printf("Your name can not be more than 50 characters");

    return 1;
  }
  
  //Step 2: Ask for last name
  printf("Whats you last name: ");
 
  scanf("%s", lastname);
  
  len = strlen(lastname);
 
 //Tests if last name is longer than 50 characters
  if (len > 50) {

    printf("Your name can not be more than 50 characters");

    return 1;
 }

//Step 3: Respond with name of player
 printf("Hello %s", firstname);

 //Tried to condense strings into one but figured it would be simpler to just seperate them: strcat( firstname, lastname);
 //Count number of characters by adding string length of first and last name
 len = strlen(firstname) + strlen(lastname);

 printf(" %s. Your full name contains %d letters.\n", lastname, len);
 
 //Step 4: Ask for age of player
 printf("What is your age: ");

 scanf("%d", &age);
 
 //Step 5. If age is over 18, responds with you are an adult
  if (age >= 18) {

    printf("you are an adult");

 }

//If age is under 18, responds with you are a kid
 else if (age >= 0 && age < 18) {

  printf("your a kid");

 }

 //If age responded with is neither then returns 1
 else {

  printf("You can not be below zero years old retard");
  
  return  1;
 }

//Step 6, 7, 8. Ask for users favourite things
  printf("\nEnter your favourite colour: ");

  scanf("%s", colour);
  
  printf("Enter your favourite food: ");

  //Attempt at getting Fgets to work: fgets(food, sizeof(food), stdin);
  scanf("%s", food);

  printf("Enter your favourite hobby: ");

  scanf("%s", hobby);

//Step 9. Generate a random number between one and 20 
  srand(time(NULL));

  random_number = rand() %21;

//Asks for user input to guess randdom number
  printf("What is the random number: ");
  
  scanf("%d", &num_guess);

//Loops as long as user does not guess the number
  while (num_guess!=random_number){

    //If number guessed is larger than random number it does this
    if (num_guess > random_number){

        printf("Your number guessed is too high. Guess again: ");

    }

    //If number guessed is smaller than random number it does this
    else{

        printf("Your number guessed is too low. Guess again: ");

    }
    
    //Asks to repeat guess
    scanf("%d", &num_guess);

    //Tracks no of guesses
    no_guesses = no_guesses + 1;
  }
    //Step 10. Acknowledges that they are correct and says how many tries it took.
    printf("Oh yea yea, you are correct the random number is %d. You took %d guesses", random_number, no_guesses);
    
    //Step 11. Repeats users name and says goodbye
    printf("\nGoodbye, %s %s", firstname, lastname);

  return 0;
}
