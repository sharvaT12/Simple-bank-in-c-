//
// Author: Sharva Thakur , UIC, Spring 2021
// Assignment: Project 01
//

// declare all the includes
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

//main
int main() {
    cout << std::fixed;
    cout << std::setprecision(2);
    
    cout << "** Welcome to UIC Bank v1.0 **" << endl;
    
    //taking input file 
    string bankFile;
    cout << "Enter bank filename> " << endl;
    cin >> bankFile;
    
    
    cout << "** Inputting account data..."<< endl;
    
    //opening input file
    ifstream  infile;
    infile.open(bankFile);
    
    //if the inputfile is wrong 
    if (!infile.good())  // file is NOT good, i.e. could not be opened:
    {
       cout << "**Error: unable to open input file '" << bankFile << "'" << endl;
       return 0;  // return now since we cannot continue without input file
    }
    

    
    cout << "** Outputting account data..." << endl;
    
    // declaring all accounts as strings
    string Acc1, Acc2, Acc3, Acc4, Acc5;
    
    // declaring all balances as double
    double Bal1, Bal2, Bal3, Bal4, Bal5;
    
    //importing accounts and balance from the file
    infile >> Acc1;
    infile >> Bal1;
    infile >> Acc2;
    infile >> Bal2;
    infile >> Acc3;
    infile >> Bal3;
    infile >> Acc4;
    infile >> Bal4;
    infile >> Acc5;
    infile >> Bal5;
    
    //output statements of the accounts and balances
    cout << "Account " << Acc1 << ": balance $" << Bal1 << endl;
    cout << "Account " << Acc2 << ": balance $" << Bal2 << endl;
    cout << "Account " << Acc3 << ": balance $" << Bal3 << endl;
    cout << "Account " << Acc4 << ": balance $" << Bal4 << endl;
    cout << "Account " << Acc5 << ": balance $" << Bal5 << endl;
    
    
    cout << "** Processing user commands..." << endl;
    
    // declaring variables 
    string command1, account;
    double  amount;
    
    //taking input commands
    cout << "Enter command (+, -, ?, ^, *, x):" << endl;
    cin >> command1; 
    
    //while loop 
    while (command1 != "x"){
        
        // if statement for adding command
        if (command1 == "+"){
            
            cin >> account >> amount;

            if (account == Acc1){
                Bal1 = Bal1 + amount;
                cout << "Account " << account << ": balance $" << Bal1 << endl;
            }
            else if (account == Acc2){
                Bal2 = Bal2 + amount;
                cout << "Account " << account << ": balance $" << Bal2 << endl;
            }    
            else if (account == Acc3){
                Bal3 = Bal3 + amount;
                cout << "Account " << account << ": balance $" << Bal3 << endl;
            }    
            else if (account == Acc4){
                Bal4 = Bal4 + amount;
                cout << "Account " << account << ": balance $" << Bal4 << endl;
            }
            else if (account == Acc5){
                Bal5 = Bal5 + amount;
                cout << "Account " << account << ": balance $" << Bal5 << endl;
            }
            else {
                cout<<"** Invalid account, transaction ignored"<<endl;
            }
   }      
        
        
        // if statement for subtraction command
        else if (command1 == "-"){
            
            cin >> account >> amount;

            if (account == Acc1){
                Bal1 = Bal1 - amount;
                cout << "Account " << account << ": balance $" << Bal1 << endl;
            }
            else if (account == Acc2){
                Bal2 = Bal2 - amount;
                cout << "Account " << account << ": balance $" << Bal2 << endl;
            }    
            else if (account == Acc3){
                Bal3 = Bal3 - amount;
                cout << "Account " << account << ": balance $" << Bal3 << endl;
            }    
            else if (account == Acc4){
                Bal4 = Bal4 - amount;
                cout << "Account " << account << ": balance $" << Bal4 << endl;
            }
            else if (account == Acc5){
                Bal5 = Bal5 - amount;
                cout << "Account " << account << ": balance $" << Bal5 << endl;
            }
            else {
                cout<<"** Invalid account, transaction ignored"<<endl;
            }
            
        }
        
        // if statement for checkbalance 
        else if (command1 == "?"){
            cin >> account;
            if (account == Acc1){
                cout << "Account " << account << ": balance $" << Bal1 << endl;
            }
            else if (account == Acc2){
                cout << "Account " << account << ": balance $"<<Bal2 << endl;
            }
            else if (account == Acc3){
                cout << "Account " << account << ": balance $"<<Bal3 << endl;
            }
            else if (account == Acc4){
                cout << "Account " << account << ": balance $"<< Bal4 << endl;
            }
            else if (account == Acc5){
                cout << "Account " << account << ": balance $"<< Bal5 << endl;
            }
            else{
                cout<<"** Invalid account, transaction ignored"<<endl;
            }
        }    
            
        
        // if statement for largest balance account
        else if (command1 == "^"){
            if (Bal1>Bal2 && Bal1>Bal3 && Bal1>Bal4 && Bal1>Bal5 ){
                cout << "Account " << Acc1 << ": balance $" << Bal1 << endl;
            }
            else if (Bal2>Bal1 && Bal2>Bal3 && Bal2>Bal4 && Bal2>Bal5){
                cout << "Account " << Acc2 << ": balance $" << Bal2 << endl;
            }
            else if (Bal3>Bal1 && Bal3>Bal2 && Bal3>Bal4 && Bal3>Bal5){
                cout << "Account " << Acc3 << ": balance $" << Bal3 << endl;
            }
            else if (Bal4>Bal1 && Bal4>Bal2 && Bal4>Bal3 && Bal4>Bal5){
                cout << "Account " << Acc4 << ": balance $" << Bal4 << endl;
            }
            else if (Bal5>Bal1 && Bal5>Bal2 && Bal5>Bal3 && Bal5>Bal4){
                cout << "Account " << Acc5 << ": balance $" << Bal5 << endl;
            }
        }
            
        
        // if statement for list of all accounts
        else if (command1 == "*"){
                cout << "Account " << Acc1 << ": balance $" << Bal1 << endl;
                cout << "Account " << Acc2 << ": balance $" << Bal2 << endl;
                cout << "Account " << Acc3 << ": balance $" << Bal3 << endl;
                cout << "Account " << Acc4 << ": balance $" << Bal4 << endl;
                cout << "Account " << Acc5 << ": balance $" << Bal5 << endl;

        }
        else {
            cout<<"** Invalid command, try again..."<<endl;
        }
            
            
      // retaking the inputs  
      cout << "Enter command (+, -, ?, ^, *, x):" << endl;
      cin >> command1;
      

    }
    
 
    //closing infile 
    infile.close();
    
    
    //opening outfile
    ofstream outputFile;
    outputFile.open(bankFile);
    
    //clearing the outfile 
    outputFile.clear();
    
    //putting the values into to outfile
    outputFile << Acc1 << " " << Bal1 << endl;
    outputFile << Acc2 << " " << Bal2 << endl;
    outputFile << Acc3 << " " << Bal3 << endl;
    outputFile << Acc4 << " " << Bal4 << endl;
    outputFile << Acc5 << " " << Bal5 << endl;

    //closing outfile
    outputFile.close();
    
    cout << "** Saving account data..." << endl;
    cout << "** Done **" << endl;
}
