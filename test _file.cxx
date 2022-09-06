#include<iostream>
#include <iomanip>
using namespace std;
int choice;
float amount;
float usd;
float cost;
void output(){
    cout << fixed << setprecision(2);
    cout <<"amount due " << cost << "\namount converted " << amount << "\n";
}
void test(){
    if (usd <= 100){
        float cost1;
        cost1 = 3.99;
        cost = (usd + cost1);
    }
    else if (usd <= 1000){
        float cost1;
        cost1 = 7.99;
        cost = (usd + cost1);
    }
    else if (usd > 1000){
        float cost1;
        cost1 = 14.99;
        cost = (usd + cost1);
    }

}
void menu()
{
    cout << "select a currency to convert from US Dollar (USD)\n";
    cout << "1-japanese yen(jpy)\n";
    cout << "2-mexican peso (mxn)\n";
    cout << "3-indian rupee(inr)\n";
    cout << "4-british pound sterling(gbp)\n";
    cout << "0- exit\n";
    cout << "enter 0-4: ";
}
int main() {
    menu();
    float jpy = 139.59;
    float mxn = 20.21;
    float inr = 79.55;
    float gbp = 0.86;
    while (true) {
        cin >> choice;
        if (choice == 1) {
            cout << "jpy converter\n";
            cout << "enter the usd amount: ";
            cin >> usd;
            amount = (usd) * (jpy);
            test();
            output();
            menu();
        } else if (choice == 2) {
            cout << "mxn converter\n";
            cout << "enter the usd amount";
            cin >> usd;
            amount = (usd) * (mxn);
            test();
            output();
            menu();

        } else if (choice == 3) {
            cout << "inr converter\n";
            cout << "enter usd amount";
            cin >> usd;
            amount = (usd) * (inr);
            test();
            output();
            menu();
        } else if (choice == 4) {
            cout << "gbp converter\n";
            cout << "enter usd amount";
            cin >> usd;
            amount = (usd) * (gbp);
            test();
            output();
            menu();
        } else if (choice == 0)
            break;
    }
}
