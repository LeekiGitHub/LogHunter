#include <iostream>

int main()
{




    // Variable Declaration and Initialization
    int log_amount = 5;

    // Variable Declaration without Initialization
    int log_amount_2;
    log_amount_2 = 10; // Initialization

    // Variable Declaration and Initialization with Braces <- This is the preferred way to initialize variables. Narrowing conversions are not allowed.
    int log_amount_3 { 5 };
 
    //print the value of log_amount
    std::cout << "log_amount: " << log_amount;
    return 0;
}
