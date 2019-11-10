#include <iostream>
#include <iomanip>
#include <time.h>
#include <cmath>
#include <fstream>
#include <cstdlib>

using namespace std;

int bankTitle() {

    cout<<setw(50)<<"Cookies Banking System"<<endl;
    cout<<setw(56)<<"Find out how to open free checking"<<endl;
    
}
int mainMenu() {

    cout<<endl;

    cout<<"1. Open a Checking Account"<<endl;
    cout<<"2. Open a Savings Account"<<endl;
    cout<<"3. Check Balance"<<endl;
}

int getData(int&num,string&firstName,string&lastName,string&phoneNumber) {

    cin>>num;
    if(num == 1) {

        cout<<endl;
        cout<<"To open a checking account please follow the directions below"<<endl;
        cout<<endl;

        cout<<"Enter your first name: ";
        cin>>firstName;
        cout<<endl;

        cout<<"Enter your last name: ";
        cin>>lastName;
        cout<<endl;

        cout<<"Enter your phone number in the following format 000-000-0000: ";
        cin>>phoneNumber;
        cout<<endl;

        string accountData[3] = {firstName,lastName,phoneNumber};

        cout<<"Your new account number will print below:"<<endl;
        cout<<endl;
        //the randnum can be broken down into a function
        srand(time(NULL));
        int randNUM;
        for(int i = 0; i <16; i++){
            randNUM = rand()%10;
            cout<<randNUM;
        }
        int acctNumber = randNUM;
        //return accountNumber;
        //section where we use ofstream to write new account data onto a text file and save it to access later
        ofstream myfile;
        myfile.open ("C:\\Users\\Urihel\\Downloads\\NewBankingSystem.txt", fstream::app);
        myfile << '\n' << firstName << " " << lastName << " " << phoneNumber;
        return 0;
        //------------------------------end of if statement-----------------------------
    }
    //----------------------------------outer function---------------------------------
    //write your code below this comment
}



//-----------------------------------------------------------------------------------------------------------
int main () {

    int num;
    string firstName,lastName,phoneNumber;

    bankTitle();
    mainMenu();
    getData(num,firstName,lastName,phoneNumber);

    return 0;
}
