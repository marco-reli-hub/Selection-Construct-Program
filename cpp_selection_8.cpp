// 8. Revise your Sales problem in Sequence constructs by computing and displaying the sales commission base the given below: 
// Sales<=15000 = 15% Commission | Sales<=20000 = 20% Commission | Sales<=25000 = 25% Commission | Sales<=30000 = 30% Commission | Sales>30000 = 40% Commission.

#include <iostream>
using namespace std;

int main() {
    string salesman_name;
    string salesman_number;
    double unit_sold;
    double unit_price;
    double total_sales;
    double commission;

    cout << "Enter your name: ";
    cin >> salesman_name;
    
    cout << "Enter your number: ";
    cin >> salesman_number;

    cout << "Enter your unit sold: ";
    cin >> unit_sold;
    
    cout << "Enter your unit price: ";
    cin >> unit_price;

    total_sales = unit_sold * unit_price;

    cout << endl << "INFO ----------------------------------------------" << endl;
    cout << "Salesman Name    :  " << salesman_name << endl;
    cout << "Salesman Number  :  " << salesman_number << endl;
    cout << "Total Sales      :  " << total_sales << endl;

    if (total_sales <= 15000) {
        commission = total_sales * 0.15;
        cout << "Commission       :  " << commission << endl;
    }
    else if (total_sales <= 20000) {
        commission = total_sales * 0.20;
        cout << "Commission       :  " << commission << endl;
    }
    else if (total_sales <= 25000) {
        commission = total_sales * 0.25;
        cout << "Commission       :  " << commission << endl;
    }
    else if (total_sales <= 30000) {
        commission = total_sales * 0.30;
        cout << "Commission       :  " << commission << endl;
    }
    else if (total_sales > 30000) {
        commission = total_sales * 0.40;
        cout << "Commission       :  " << commission << endl;
    }
    
    return 0;
}
