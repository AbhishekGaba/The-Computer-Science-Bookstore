/* Abhishek Gaba
 * CISC 1600 LO2
 * HW 3 2/8/19
*/
#include <iostream>
#include <string>
using namespace std;
int main()
{
 
  // Welcome Message:  
    
  cout <<"Hello, Welcome to the Very Small Computer Science Bookstore! Please enter your full name to proceed" << endl;
  string first;
  string last;
  cin >> first >> last;
  cout <<"Welcome, " << first << " Please enter the number of textbooks you wish to purchase for each title." << endl;
 
  // initialization of variables of the different books:
 
  int dast;
  int compar;
  int compil;
  cout <<"Data Structure: ";
  cin >> dast;
  cout <<"Computer Architecture: ";
  cin >> compar;
  cout <<"Compilers: ";
  cin >> compil;
 
  // initialization of costs:
 
  double price = ((dast*78.87)+(compar*95.49)+(compil*89.99));
  double pricewtax = (price*.08875) + (price);
  double weight = ((dast*2.50)+(compar*1.75)+(compil*1.25));
  cout <<"Your order weighs: " << weight <<" Pounds." << endl;
 
  // initialization of weight variables:
 
  double ufvg = (5.99);
  double btfvtng = (7.99);
  double ovrtng = (9.99);
  double ufvtwo = (11.98);
  double btfvtntw = (15.98);
  double ovrtntw = (19.98);
  double ufvgnd = (29.95);
  double btfvtnnd = (39.95);
  double ovrtnnd = (49.95);
  
  // if conditions for shipping weights:
  
  if (weight<5)
     cout <<"The costs for ground, two day, and next day shipping are: " << ufvg << " " << btfvtng <<" " <<"and " << ovrtng << endl;
  if ((weight>5)&&(weight<10))
     cout <<"The costs for ground, two day, and next day shipping are: " << btfvtng << " " << btfvtntw << " " <<"and " <<  btfvtnnd << endl;   
  if (weight>10)
     cout <<"The costs for ground, two day, and next day shipping are: " << ovrtng << " " << ovrtntw << " " <<"and " << ovrtnnd << endl;    
 
  
  // shipping options:
  
  string shipopt;
  char y;
  char n;
  char redo = y;
  
 
  // loop for customer approval
  
  do {
  
  cout <<"Please enter the shipping method you prefer in lowercase letters, omitting 'day' from each option. The Ground shipping method is default " << endl;
  cin >> shipopt;
  if (((shipopt == "ground") && (weight < 5)))
      cout <<"Your total cost of shipping is: " << ufvg << endl;
  else if (((shipopt == "ground") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost of shipping is: " << btfvtng << endl;
  else if (((shipopt == "ground") && (weight > 10)))
      cout <<"Your total cost of shipping is: " << ovrtng << endl;
  else if (((shipopt == "two") && (weight < 5)))
      cout <<"Your total cost of shipping is: " << ufvtwo << endl;
  else if (((shipopt == "two") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost of shipping is: " << btfvtntw << endl;
  else if (((shipopt == "two") && (weight > 10)))
      cout <<"Your total cost of shipping is: " << ovrtntw << endl;
  else if (((shipopt == "next") && (weight < 5 )))
      cout <<"Your total cost of shipping is: " << ufvgnd << endl;
  else if (((shipopt == "next") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost of shipping is: " << btfvtnnd << endl;
  else if (((shipopt == "next") && (weight > 10)))
      cout <<"Your total cost of shipping is: " << ovrtnnd << endl;
  else { 
      cout <<"That is not a valid statement, ground shipping is now selected. " << endl;
      shipopt == "ground";
      if (weight < 5)
          cout <<"Your shipping cost is: " << ufvg << endl;
      if ((weight >= 5) && (weight <= 10))
          cout <<"Your shipping cost is: " << btfvtng << endl;
      if (weight > 10)
          cout <<"Your shipping cost is: " << ovrtng << endl; }
          
  
  cout <<"Is there an issue with the shipping? Enter 'y' to accept the costs  and lowercase 'n' to select shipping again." << endl;
  cin >> redo; } while (redo == 'n');

  


 // this area shows the total cost of the order 
      

   if (((shipopt == "ground") && (weight < 5)))
   {  ( pricewtax = (ufvg + pricewtax));
      cout <<"Your total cost is: " << ( pricewtax) << endl; }
   
   else if (((shipopt == "ground") && (weight >= 5) && (weight <= 10)))
   {   ( pricewtax = ( btfvtng + pricewtax));
      cout <<"Your total cost is: " << ( pricewtax) << endl; }
      
   else if (((shipopt == "ground") && (weight > 10)))
   {   ( pricewtax = ( ovrtng + pricewtax));
      cout <<"Your total cost is: " << ( pricewtax) << endl; }
      
   else if (((shipopt == "two") && (weight < 5)))
   {   ( pricewtax = ( ufvtwo + pricewtax));
      cout <<"Your total cost is: " << ( pricewtax) << endl; }
      
   else if (((shipopt == "two") && (weight >= 5) && (weight <= 10)))
   {   ( pricewtax = ( btfvtntw + pricewtax));
      cout <<"Your total cost is: " << ( btfvtntw) << endl; }
      
   else if (((shipopt == "two") && (weight > 10)))
   {   ( pricewtax = ( ovrtntw + pricewtax));
      cout <<"Your total cost is: " << ( pricewtax) << endl; }
      
   else if (((shipopt == "next") && (weight < 5 )))
   {  ( pricewtax = ( ufvgnd + pricewtax));
      cout <<"Your total cost is: " << (pricewtax) << endl; }
      
   else if (((shipopt == "next") && (weight >= 5) && (weight <= 10)))
   {  ( pricewtax = ( btfvtnnd + pricewtax));
      cout <<"Your total cost is: " << (pricewtax) << endl; }
      
   else if (((shipopt == "next") && (weight > 10)))
   {  ( pricewtax = ( ovrtnnd + pricewtax));
      cout <<"Your total cost is: " << ( pricewtax) << endl; }
       
   
   // this is the way to make sure that the invalid options all give the ground order totals
   
    else if (((shipopt != "ground") && (weight < 5)))
      cout <<"Your total cost is: " << (ufvg + pricewtax) << endl;
    else if (((shipopt != "ground") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost is: " << (btfvtng + pricewtax) << endl;
    else if (((shipopt != "ground") && (weight > 10)))
      cout <<"Your total cost is: " << ( ovrtng + pricewtax) << endl;
    else if (((shipopt != "two") && (weight < 5)))
      cout <<"Your total cost is: " << ( ufvg + pricewtax) << endl;
    else if (((shipopt != "two") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost is: " << ( btfvtng + pricewtax) << endl;
    else if (((shipopt != "two") && (weight > 10)))
      cout <<"Your total cost is: " << ( ovrtng + pricewtax) << endl;
    else if (((shipopt != "next") && (weight < 5 )))
      cout <<"Your total cost is: " << ( ufvg + pricewtax) << endl;
    else if (((shipopt != "next") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost is: " << ( btfvtng + pricewtax) << endl;
    else if (((shipopt != "next") && (weight > 10)))
      cout <<"Your total cost is: " << ( ovrtng + pricewtax) << endl; 
   
     
   // payment
   
   double payment;
   
   cout <<" Please enter the amount you would like to pay. If you wish to cancel your order, enter '-1'" << endl;
   
   cin >> payment;
   
   while (( payment < pricewtax) && ( payment != -1))
     {
         cout <<"Your Payment is not sufficient. Please enter another amount. " << endl;
         cin >> payment; }
   if ( payment == -1 )
       cout <<"You cancelled your order. Please shop with us again soon! " << endl;
       
 
  
     
    
   // invoice
  
   else  if (( payment > pricewtax ))
   {
  cout <<"Invoice for: " << first<< "" <<  last << endl;
  cout <<"Item " << "                    QTY "<< "            Unit Price   "<< "             Total Cost " <<endl;
    cout << "Data Structures           "         <<dast<<                   "               78.87                      " <<(dast*78.87) <<endl; 
    cout << "Computer Architecture     "         <<compar<<                             "               95.49                      "<<(compar*95.49) <<endl;
    cout << "Compilers                 "         <<compil<<                   "               89.99                      " <<(compil*89.99) <<endl;
    cout << "Subtotal: " <<price <<endl;                                                       
    cout << "Sales Tax: " << pricewtax - price << endl;
    if (((shipopt == "ground") && (weight < 5)))
     cout <<"Your total cost is: " << (ufvg + pricewtax) << endl;
   
   else if (((shipopt == "ground") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost is: " << (btfvtng + pricewtax) << endl;
      
   else if (((shipopt == "ground") && (weight > 10)))
      cout <<"Your total cost is: " << ( ovrtng + pricewtax) << endl;
      
   else if (((shipopt == "two") && (weight < 5)))
      cout <<"Your total cost is: " << ( ufvtwo + pricewtax) << endl;
      
   else if (((shipopt == "two") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost is: " << ( btfvtntw + pricewtax) << endl;
      
   else if (((shipopt == "two") && (weight > 10)))
      cout <<"Your total cost is: " << ( ovrtntw + pricewtax) << endl;
      
   else if (((shipopt == "next") && (weight < 5 )))
      cout <<"Your total cost is: " << ( ufvgnd + pricewtax) << endl;
      
   else if (((shipopt == "next") && (weight >= 5) && (weight <= 10)))
      cout <<"Your total cost is: " << ( btfvtnnd + pricewtax) << endl;
      
   else if (((shipopt == "next") && (weight > 10)))
      cout <<"Your total cost is: " << ( ovrtnnd + pricewtax) << endl;
     
    cout << "Total Payment: " << payment <<endl;
   if (((shipopt == "ground") && (weight < 5)))
     cout <<"Your change is: " << (ufvg + pricewtax) - payment << endl;
   
   else if (((shipopt == "ground") && (weight >= 5) && (weight <= 10)))
      cout <<"Your change is: " << (btfvtng + pricewtax) - payment << endl;
      
   else if (((shipopt == "ground") && (weight > 10)))
      cout <<"Your change is: " << ( ovrtng + pricewtax) - payment << endl;
      
   else if (((shipopt == "two") && (weight < 5)))
      cout <<"Your change is: " << ( ufvtwo + pricewtax) - payment << endl;
      
   else if (((shipopt == "two") && (weight >= 5) && (weight <= 10)))
      cout <<"Your change is: " << ( btfvtntw + pricewtax) - payment << endl;
      
   else if (((shipopt == "two") && (weight > 10)))
      cout <<"Your change is: " << ( ovrtntw + pricewtax) - payment << endl;
      
   else if (((shipopt == "next") && (weight < 5 )))
      cout <<"Your change is: " << ( ufvgnd + pricewtax) - payment << endl;
      
   else if (((shipopt == "next") && (weight >= 5) && (weight <= 10)))
      cout <<"Your change is: " << ( btfvtnnd + pricewtax) - payment << endl;
      
   else if (((shipopt == "next") && (weight > 10)))
      cout <<"Your change is: " << ( ovrtnnd + pricewtax - payment); }
     
    
 
  
   cout <<"Have a good day! " << endl;
   
   

   
  
  
  
  
  // The weird spacings above make the numbers line up on the compiler
 
  



  return 0;
}    
   







