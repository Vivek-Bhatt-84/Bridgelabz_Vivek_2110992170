#include <bits/stdc++.h>
using namespace std;


void calculateDenominations(int amount, int &notes500, int &notes200, int &notes100, int &notes50, int &notes20, int &notes10) {
    int used500 = 0, used200 = 0, used100 = 0, used50 = 0, used20 = 0, used10 = 0;

   
    if (amount >= 500) {
        used500 = min(amount / 500, notes500);
        amount -= used500 * 500;
    }
    
    if (amount >= 200) {
        used200 = min(amount / 200, notes200);
        amount -= used200 * 200;
    }
    
    if (amount >= 100) {
        used100 = min(amount / 100, notes100);
        amount -= used100 * 100;
    }
    
    if (amount >= 50) {
        used50 = min(amount / 50, notes50);
        amount -= used50 * 50;
    }
    
    if (amount >= 20) {
        used20 = min(amount / 20, notes20);
        amount -= used20 * 20;
    }
    
    if (amount >= 10) {
        used10 = min(amount / 10, notes10);
        amount -= used10 * 10;
    }

    if (amount > 0) {
        cout << "Not enough cash available . " << endl;
        return;
    }

    
    notes500 -= used500;
    notes200 -= used200;
    notes100 -= used100;
    notes50 -= used50;
    notes20 -= used20;
    notes10 -= used10;

    
    cout << "You have received your cash in the following denominations:" << endl;
    if (used500 > 0) cout << "500 Rs notes: " << used500 << endl;
    if (used200 > 0) cout << "200 Rs notes: " << used200 << endl;
    if (used100 > 0) cout << "100 Rs notes: " << used100 << endl;
    if (used50 > 0) cout << "50 Rs notes: " << used50 << endl;
    if (used20 > 0) cout << "20 Rs notes: " << used20 << endl;
    if (used10 > 0) cout << "10 Rs notes: " << used10 << endl;
}


void withdraw(int amount, int &balance, int &notes500, int &notes200, int &notes100, int &notes50, int &notes20, int &notes10) {
    if (amount > balance) 
    {
        cout << "Insufficient balance. Available balance: " << balance << endl;
    }
    else if (amount % 10 != 0) 
    {
        cout << "Please enter an amount that is a multiple of 10." << endl;
    } 
    else 
    {
        balance -= amount;
        cout << "Withdrawal successful! Withdrawn amount: " << amount << endl;
        cout << "Remaining Balance: " << balance << endl;

        
        calculateDenominations(amount, notes500, notes200, notes100, notes50, notes20, notes10);
    }
}

int calculatebalance(int &notes500, int &notes200, int &notes100, int &notes50, int &notes20, int &notes10)
{
    return  notes500 * 500 + notes200 * 200 + notes100 * 100 + notes50 * 50 + notes20 * 20 + notes10 * 10;

}

int main() {
    int notes500 = 50, notes200 = 50, notes100 = 50, notes50 = 50, notes20 = 50, notes10 = 50;
    int balance = calculatebalance(notes500, notes200, notes100, notes50, notes20, notes10);

    cout << "Do you want to withdraw cash ? " << endl;
    cout << "Enter y for yes or n for no " << endl;
    char check ;
    cin >> check ;
    while (check == 'y') {
        cout << "Enter the amount to be withdrawn: " << endl;
        int amount;
        cin >> amount;

        withdraw(amount, balance, notes500, notes200, notes100, notes50, notes20, notes10);

        cout << "Do you want to withdraw more? (Enter 'y' for yes and 'n' for no): " << endl;
        cin >> check;
        if(check == 'n') break;
    }

    cout << "Thanks ! " << endl;
 
    return 0;
}

