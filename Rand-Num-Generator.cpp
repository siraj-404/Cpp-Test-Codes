#include <iostream>
#include <ctime>
using namespace std;
int main(){
    cout<<"this program uses the rand function to generate random numbers, using time as seed\n";
    // generate random number using time as seed.
    srand(time(0));
    int r_num = rand() % 100 + 1;
    cout<<"Random generated number is "<<r_num; 
}