#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string grade(){
srand(time(0));
int x = rand()%8;
if( x == 0) return "A";
else if ( x == 1) return "B+";
else if ( x == 2) return "B";
else if ( x == 3) return "C+";
else if ( x == 4) return "C";
else if ( x == 5) return "D+";
else if ( x == 6) return "D";
else return "F";
}


int main(){
    string grade();
    cout<<"Press Enter 3 times to reveal your future.\n";
    int i = 0;
    while (i<3){
        cin.get();
        i++;
    }
    cout<<"You will get "<<grade()<<" in this 261102.";
    return 0;
}

