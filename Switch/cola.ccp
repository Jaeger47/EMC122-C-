#include <iostream>

using namespace std;

int main(){
    
    char choice;


    cout << "Please Select your order" << endl << "[A]Coke" << endl << "[B]Pepsi" << endl << "[C]Dr.pepper" << endl;
    cin >> choice;
    
     //switch statment
    switch(choice){
        case 'A':
        cout << "You have ordered Coke!";
        break;
        case 'B':
        cout << "You have ordered Pepsi!";
        break;
        case 'C':
        cout << "You have ordered Dr.pepper!";
        break;
         case 'a':
        cout << "You have ordered Coke!";
        break;
        case 'b':
        cout << "You have ordered Pepsi!";
        break;
        case 'c':
        cout << "You have ordered Dr.pepper!";
        break;
        default:
        cout << "Your input is invalid!";
        break;
    }


    return 0;

}
