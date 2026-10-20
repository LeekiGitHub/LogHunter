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
 
    std::cout << "How many logs do you want to check?: ";
    int user_input_amount {};
    std::cin >> user_input_amount;

    std:: cout << "You want to check " << user_input_amount << " logs. Is that correct? (y/n):" << std::endl;
    char user_input {};
    std::cin >> user_input;
    
    std::cout << "You entered: " << user_input << std::endl;
    return 0;
}
