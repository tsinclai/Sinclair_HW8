/*
All programming assignments for the remainder of this course must begin with
a variation of the following four lines:

Program Name: Stock Commission
Purpose: Calculate stock prices based on user input.
Author: Tabitha Sinclair
Date Last Modified: 02-05-19
*/
 #include <iostream>
using namespace std;

int main () {

/*
double numberOfShares = 750;
double pricePerShare = 35.00;
double commissionToPay = .02;
double amountForStock = numberOfShares * pricePerShare;
double commissionEarned = amountForStock * commissionToPay;
double totalPaid = amountForStock + commissionEarned;

  cout << "The amount paid for the stock alone is $ " << amountForStock << endl;
  cout << "The amount of the commission is $ " << commissionEarned << endl;
  cout << "The total amount paid is $ " << totalPaid << endl;
  return 0;
*/
double numberOfShares; // number of shares purchased
double pricePerShare; // price per share purchased
double commissionToPay; // commission to pay shareholder 


 cout << "Enter Number of Shares ";
 cin >> numberOfShares;
 cout << "Enter Price per share $ ";
 cin >> pricePerShare;
 cout << "Enter the percent of commission to pay the stockbroker ";
 cin >> commissionToPay;

 double amountForStock = numberOfShares * pricePerShare;
 double commissionEarned = amountForStock * commissionToPay;
 double totalPaid = amountForStock + commissionEarned;

 cout << "The amount paid for the stock alone is $ " << amountForStock << endl;
 cout << "The amount of the commission is $ " << commissionEarned << endl;
 cout << "The total amount paid is $ " << totalPaid << endl;
 return 0;



}
