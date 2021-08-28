//lotto.cpp
//test and use of random numbers

#include <iostream>
#include <ctime>
#include <vector>
#include <bits/stdc++.h>

int MAX_NUM = 69;  //69 for Powerball
//int powerball   26
int GUESSES = 5;



using namespace std;


// Shuffle array
void shuffle_array(int arr[], int n)
{
 
    // To obtain a time-based seed
    unsigned seed = time(0); //added to randomize each execution
 
    // Shuffling our array
    shuffle(arr, arr + n,
            default_random_engine(seed));
 /*
    // Printing our array
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
    */
}





int main(){

    srand(time(0));
    int a[MAX_NUM];
    int guess;
    int powerBall = rand() % 26;  //i think this is correct.
    vector<int> pick;

    //create array of numbers
    for(int i=0; i<MAX_NUM;i++)
        a[i]=i+1;

    shuffle_array(a , MAX_NUM);
    /*
    while(pick.size()< GUESSES){
        guess = rand() % (MAX_NUM-pick.size()-1);
        //a[guess] is the number picked.  push onto vector then resize array
        for(int j = 0; j<guess;j++)
            a[j]= a[j];

        pick.push_back(a[guess]);

        for(int k = guess+1;k<MAX_NUM-pick.size();k++)
            a[k-1]=a[k];
    }
*/

    for(int j=0;j<GUESSES;j++)
        pick.push_back(a[j]);


    for (int z : pick)
        cout << z << "\t" ;

    cout <<"PB: "<< powerBall << endl;

    // for (int b :a)
    //     cout << b << "\t" ;

    return 0;

    



}