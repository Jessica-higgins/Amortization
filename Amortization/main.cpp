//Jessica Higgins Fall 2019
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {

    cout << setprecision(2) << fixed << showpoint; //since we're working with money

    double loanAmount;
    double interestRatePercent;
    int numMonths;


    // user input
    cout << "Enter the loan amount: ";
    cin >> loanAmount;
    cout << "Enter the monthly interest rate (%) ";
    cin >> interestRatePercent;
    cout << "Enter the number of months: ";
    cin >> numMonths;

     double rateDecimal = (interestRatePercent/100) * 1.0;
     double numerator = loanAmount * rateDecimal;
     double denominator = 1 - pow(1 + rateDecimal, -numMonths );
     double monthlyPayment = numerator/denominator;
     double paidBack = monthlyPayment * numMonths;
     double interestPaid = paidBack - loanAmount;


    cout << "Loan amount: $ " << loanAmount << endl;
    cout << "Monthly interest rate: " << interestRatePercent << "%" << endl;
    cout << "Number of payments: " << numMonths << endl;
    cout << "Monthly payment: $ " << monthlyPayment << endl;
    cout << "Amount paid back: $ " << paidBack << endl;
    cout << "Interest Paid: $ " << interestPaid << endl;

    return 0;
}
