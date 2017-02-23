#include <iostream>
using namespace std;

/*
    Brandon Hartman
    CS215−J001
    Spring 2017
    A C++ program that asks the user to input an ordered pair of integers,
    each between 2 and 5000. Then, for each integer of the pair, it should
    display that integer’s factors (greater than 1) that are themselves
    squares, and also display whether or not that integer is square−free.
    Finally, it should display whether this ordered pair of integers is
    SWEET, SOUR, SALTY, or BITTER.

*/

// The getNumberFactors function will be rather or not the user steps 
// over the limits of 2 to 5000.
int getNumberForFactors();

// The SquareFree function has the userInput inside its parameters and will
// have the algorithm within its code to see if it is square free or not.
int SquareFree(int userInput);

// This here is my buddy, main. He is usually on top of everything.
int main() {

    // Declaring and defining one of two user's input as an int.
    int userInputOne;
    
    // Declaring and defining one of two user's input as an int.
    int userInputTwo;
    
    // Declaring, defining and initializing firstNumber as a int.
    int firstNumberOfSquare = 0;
    
    // Declaring, defining and initializing secondNumber as a int.
    int secondNumberOfSquare = 0;
    
    // Display a message to the user asking for the first integer of the pair
    // Between 2 to 5000.
    cout << "Enter the 1st integer of the pair, between 2 and 5000: " << endl;
    
    // Assign user's input to the function getNumberForFactors
    userInputOne = getNumberForFactors();

    // Display a message to the user asking for the first integer of the pair
    // Between 2 to 5000.
    cout << "Enter the 2nd integer of the pair, between 2 and 5000: " << endl;
    
    // Assign user's input to the function getNumberForFactors
    userInputTwo = getNumberForFactors();

    // Assign the firstNumberOfSquares to the SquareFree that is holding the input.
    // Calls SquareFree.
    firstNumberOfSquare = SquareFree(userInputOne);
    
    // Assign the secondNumberOfSquares to the SquareFree that is holding the input.
    // Calls SquareFree.
    secondNumberOfSquare = SquareFree(userInputTwo);

    
    // The program will head into a if statement stating if the numbers that the
    // user enter are either SWEET, SOUR, SALTY or BITTER.
    if (firstNumberOfSquare == 0 && secondNumberOfSquare == 0)
        // If they are both equal to zero that the taste is SWEET.
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SWEET.";

    else if (firstNumberOfSquare == 0 && secondNumberOfSquare >= 1)
        // If firstNumber is equal to zero and secondNumber is greater than one.
        // The taste will be SOUR.
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SOUR.";

    else if (firstNumberOfSquare >= 1 && secondNumberOfSquare == 0)
        // If firstNumber is great than  1 and the secondNumber is equal to zero..
        // The taste will be SALTY.
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SALTY.";

    else
        // Else the taste will be BITTER.
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is BITTER.";
}
// Heading into the getNumberForFactors function.
int getNumberForFactors() {

    // Declare and define numberEntered
    int numberEnteredByUser;

    // Get the input from the user and store it into numberEnteredByUser
    cin >> numberEnteredByUser;

    // Head into a while loop to make sure that the user stays within the
    // limits of 2 through 5000. If they disobey, ask for the numbers again.
    // Afterwards, return the numbers.
    while (numberEnteredByUser < 2 || numberEnteredByUser > 5000){

        cout << "That number is not between 2 and 5000.";
        cin >> numberEnteredByUser;
    }
    return  numberEnteredByUser;

}
// Heading into the SquareFree function
int SquareFree(int userInput){

    // Declare, define and initialize a int named count to zero.
    int count = 0;
    
    // Head into a for loop to attain the math equation to see if the
    // numbers the user are square free or not. Afterwards, the input
    // will be displayed with a message and the counter will increase in
    // value.
    for (int loopNum = 2; loopNum * loopNum <= userInput; loopNum++){

        if (userInput % (loopNum * loopNum) == 0){

            cout << userInput << " has these factors that are (>1), that are squares: " << loopInteger << endl;
            cout << endl;
            count++;
        }
    }
    // Stating if the counter is greater than zero to display a not square
    // free message and end the line.
    if (count > 0){

        cout << userInput << " is not square free. " << endl;
        cout << endl;
    }
    // Stating if anything else greater than zero to display a message stating
    // the number that the user entered is square free. After that is ran, it
    // will return the userInput.
    else {
        cout << userInput << " doesn't have any factors that are square. " << endl;
        cout << endl;
        cout << userInput << " is square free. " << endl;
        cout << endl;
    }
    return userInput;
}
