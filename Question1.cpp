// Q:- How can you output "Physics" and "Wallah" in two different lines in C++ ?
// ANS:- We can print the "Physics" and "Wallah" in two different lines in C++ by two methods:-
//       1.)Using endl function :-
#include <iostream>
using namespace std;
int main(){
    cout<<"Physics"<<endl<<"Wallah";
    return 0;
}
//       2.)Using \n i.e escape sequence :-
#include <iostream>
using namespace std;
int main(){
    cout<<"Physics\nWallah";
    return 0;
}