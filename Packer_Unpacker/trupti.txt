#include <iostream>

using namespace std;

int minimumPowerConsumption(int P, int X, int Y) {
    // Calculate the number of times machine M will be used
    int num_M = P / 100;
    
    // Calculate the remaining customers after using machine M
    int remaining_customers = P % 100;
    
    // Calculate the number of times machine N will be used for remaining customers
    // Manually handle the ceiling operation
    int num_N = (remaining_customers + 3) / 4;
    
    // Calculate total power consumption
    int total_power_consumption = num_M * X + num_N * Y;
    
    return total_power_consumption;
}

int main() {
    int P, X, Y;
    
    // User input
    cout << "Enter the number of customers: ";
    cin >> P;
    cout << "Enter the power consumption for machine M: ";
    cin >> X;
    cout << "Enter the power consumption for machine N: ";
    cin >> Y;
    
    // Calculate and print the minimum power consumption
    cout << "Minimum power consumption: " << minimumPowerConsumption(P, X, Y) << endl;
    
    return 0;
}
