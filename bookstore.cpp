/* Abhishek Gaba
 * CISC 1600 LO2
 * HW 2 1/29/19
*/
#include <iostream>
using namespace std;
int main()
{
    cout <<"Hello, Welcome to The Very Small Computer Science Bookstore!" << endl;
    cout <<"What is your full name? ";
    string input1;   // first name
    string input2;   // last name
    cin >> input1 >> input2;
    cout <<"Welcome " << input1 <<" , Please enter the number of textbooks you wish to purchase." << endl;
    double input3 = 'x';  
    double input4  = 'y';
    double input5  = 'z';
     ((input3*78.87) + (input4*95.49) + input5*89.99)*.08875;
    cout << "Data Structures Textbooks:"; cin >> input3;
    cout << "Computer Architecture Textbooks:"; cin >> input4;
    cout << "Compilers Textbooks:"; cin >> input5;
    double input6 = (input3*78.87) + (input4*95.49) + (input5*89.99);  // This is just the amount multiplied with the cost for each, without tax
    double inputwtax = (input6*.08875);                                // This is the previous amount now multiplied by the tax rate, thus gives tax amnt.
    cout <<"Your total transaction amount is: " << inputwtax + input6;  // Adding the tax and the cost together to get total
    cout <<" How much would you like to pay?"  <<endl;
    double payment;
    cin >> payment;
    cout <<"You chose to pay: " << payment <<endl;
    cout <<"Invoice for " << input1 <<" "<< input2  << endl;
    cout <<"Item " << "                    QTY "<< "            Unit Price   "<< "             Total Cost " <<endl;
    cout << "Data Structures           "         <<input3<<                   "               78.87                      " <<(input3*78.87) <<endl; 
    cout << "Computer Architecture     "         <<input4<<                             "               95.49                      "<<(input4*95.49) <<endl;
    cout << "Compilers                 "         <<input5<<                   "               89.99                      " <<(input5*89.99) <<endl;
    cout << "Subtotal: " <<input6 <<endl;                                                       
    cout << "Sales Tax: " << inputwtax << endl;
    cout << "Total Due: " << inputwtax + input6 <<endl;
    cout << "Total Payment: " << payment <<endl;
    cout << "Change Due: " << (inputwtax +input6) - payment <<endl;
    cout << "Thank you for your business, " << input1 <<endl;                   // The weird spacings above make the numbers line up on the compiler
    
    
    
    return 0;
}







