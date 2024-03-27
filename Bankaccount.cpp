#include <iostream>
#include <string>

using namespace std;

class Account{
	public:
		Account(int StartingBalance){
			if(StartingBalance >=0){
				balance= StartingBalance;
			}
			else{
				balance=0;
				cout << "ERROR!!Starting balance is invalid. Setting balance to 0." << endl;
				
			}
		}
		void credit(int amount){
			balance= balance+amount;
			cout << "Credited:" << amount << " New Balance: " << balance <<endl;
		}
		 void debit(int amount) {
        if (amount <= balance) {
            balance= balance-amount;
            cout << "Debited: " << amount << " New Balance: " << balance <<endl;
        } else {
            cout << "Error: Debit amount exceeded account balance. Balance unchanged." <<endl;
        }
       
    }
     	int getBalance() const {
        return balance;
   		 }
   	private:
   		int balance;
};
int main() {
    Account account1(1000);
    Account account2(-500);
    account1.credit(500);
    account1.debit(200);
    account1.debit(1500);
 	cout << "Account 1 Balance: " << account1.getBalance() <<endl;
 	return 0;
 	}
