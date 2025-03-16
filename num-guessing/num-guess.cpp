#include <iostream>
#include <ctime>
using namespace std;

int main(){
   int num, guess, tries = 0;

   cout<<"**********************************************\n";
   cout<<"*********Number guessing game****************\n";
    srand(time(0));
    num = rand() % 100 + 1;
    do{
    cout<<" enter a randon number between 1 and 100: ";
    cin>>guess;
    if(guess > num){
        cout<<"high! go low";
        tries++;
    }
    else if(guess < num){
        cout<<"Low! go high";
        tries++;
    }
    else{
        cout<<"that's correct # of tries = "<<tries<<endl;
    }

    }while (guess != num);

    cout<<"*************************************************************";
}