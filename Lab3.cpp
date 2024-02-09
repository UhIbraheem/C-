// Lab3.cpp 

#include <iomanip>
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	// Assign all variables and constants
	double loanAmount, rate, paymentTermMonths, AnnualInterestRate, AnnualLoanTerm, monthlyPayment, monthlyInterest, totalBalance, totalInterest;\
	string name, instituitionName;
	int spacing = 26, inputSpacing = 4;
	// Display welcoming
	cout << "Loan Payment Calculator ..." << endl << endl;
	cout << "Please enter the following information to continue: " << endl << endl;

	// Request input from the user, loan amount, interest, term, name, bank instituition
	cout << setw(spacing) << left << "Borrowers Name: ";
	cout << setw(inputSpacing) << right << " ";
	getline(cin, name);

	cout << setw(spacing) << left << "Instituition Name: ";
	cout << setw(inputSpacing) << right << " ";
	getline(cin, instituitionName);
	cout << endl;

	cout << setw(spacing) << left << "Loan Amount($): ";
	cout << setw(inputSpacing) << right << " ";
	cin >> loanAmount;

	cout << setw(spacing) << left << "Annual Interest Rate(%): ";
	cout << setw(inputSpacing) << right << " ";
	cin >> AnnualInterestRate;

	cout << setw(spacing) << left << "Term of Loan (years): ";
	cout << setw(inputSpacing) << right << " ";
	cin >> AnnualLoanTerm;
	cout << endl;

	cout << setw(spacing) << left << "Date of Report: ";
	cout << setw(inputSpacing) << right << " ";
	cout << "Febuary, 2024" << endl << endl;

	cout << "-------------------------------------------------------" << endl;

	// Calculate number of payments, monthly interest rate, and total monthly payment
	paymentTermMonths = AnnualLoanTerm * 12;
	monthlyInterest = AnnualInterestRate / 12;
	rate = monthlyInterest / 100;
	double numerator = rate * pow(1 + rate, paymentTermMonths);
	double denominator = pow(1 + rate, paymentTermMonths) - 1;
	monthlyPayment = (numerator / denominator) * loanAmount;
	totalBalance = monthlyPayment * paymentTermMonths;
	totalInterest = totalBalance - loanAmount;


	// Display total payment, and how muhc of it is interest
	cout << "Loan Payment Summary Report" << endl;
	cout << endl;

	cout << setw(spacing) << left << instituitionName;
	cout << setw(inputSpacing) << right << " " << name << endl;

	cout << setw(spacing) << left << "Annual Interest Rate: ";
	cout << setw(inputSpacing) << right << " " << AnnualInterestRate << endl;
	cout << "Febuary, 2024" << endl << endl;



	cout << setw(spacing) << left << "Loan Amount: ";
	cout << setw(inputSpacing) << right << " " << "$" << loanAmount << endl;

	cout << setw(spacing) << left << "Monthly Interest Rate: ";
	cout << setw(inputSpacing) << right << " " << fixed << setprecision(2) << monthlyInterest << "%" << endl;

	cout << setw(spacing) << left << "Number of Payments: ";
	cout << setw(inputSpacing) << right << " " << fixed << setprecision(0) << paymentTermMonths << endl;

	cout << setw(spacing) << left << "Monthly Payment: ";
	cout << setw(inputSpacing) << right << " " << "$" << fixed << setprecision(2) << monthlyPayment << endl << endl;

	cout << setw(spacing) << left << "Total amount to pay: ";
	cout << setw(inputSpacing) << right << " " << "$"  << fixed << setprecision(2) << totalBalance << endl;
	
	cout << setw(spacing) << left << "Total Interest: ";
	cout << setw(inputSpacing) << right << " " << "$"  << fixed << setprecision(2) << totalInterest << endl << endl;




}