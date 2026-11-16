#include <iostream>
#include <iomanip>
using namespace std;


class BankAccount
{
private:
	int acct_num;
	double balance;
public:
	BankAccount() : BankAccount(0, 0) {}
	BankAccount(int an, double b) : acct_num(an), balance(b) {}
	double get_balance() { return balance; }
	int get_acct_num() { return acct_num; }
	void set_balance(double b) { balance = b; }
	void set_acct_num(int an) { acct_num = an; }
};

int main()
{
	BankAccount cust1(1, 100);

	cout << setprecision(2) << fixed;
	cout << "The account number is " << cust1.get_acct_num() <<
		" and the balance is $" << cust1.get_balance() << 
		"." << endl;
	return 0;
}