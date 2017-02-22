#include <iostream>
using namespace std;

int getNumberForFactors();
int SquareFree(int integer);

int main() {

    int userInputOne;
    int userInputTwo;

    int firstNumberOfSquare = 0;
    int secondNumberOfSquare = 0;

    cout << "Enter the 1st integer of the pair, between 2 and 5000: " << endl;
    userInputOne = getNumberForFactors();

    cout << "Enter the 2nd integer of the pair, between 2 and 5000: " << endl;
    userInputTwo = getNumberForFactors();

    firstNumberOfSquare = SquareFree(userInputOne);
    secondNumberOfSquare = SquareFree(userInputTwo);

    if (firstNumberOfSquare == 0 && secondNumberOfSquare == 0)
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SWEET.";

    else if (firstNumberOfSquare == 0 && secondNumberOfSquare >= 1)
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SOUR.";

    else if (firstNumberOfSquare >= 1 && secondNumberOfSquare == 0)
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is SALTY.";

    else
        cout << "Therefore, the ordered pair (" << userInputOne << "," << userInputTwo << ") is BITTER.";
}

int getNumberForFactors() {

    int numberEnteredByUser;

    cin >> numberEnteredByUser;

    while (numberEnteredByUser < 2 || numberEnteredByUser > 5000){

        cout << "That number is not between 2 and 5000.";
        cin >> numberEnteredByUser;
    }
    return  numberEnteredByUser;

}

int SquareFree(int userInput){

    int count = 0;
    for (int loopInteger = 2; loopInteger * loopInteger <= userInput; loopInteger++){

        if (userInput % (loopInteger * loopInteger) == 0){

            cout << userInput << " has these factors that are (>1), that are squares: " << loopInteger << endl;
            cout << endl;
            count++;
        }
    }
    if (count > 0){

        cout << userInput << " is not square free. " << endl;
        cout << endl;
    }
    else {
        cout << userInput << " doesn't have any factors that are square. " << endl;
        cout << endl;
        cout << userInput << " is square free. " << endl;
        cout << endl;
    }
    return userInput;
}
