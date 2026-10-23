#include <iostream>

void getInputFromUser()
{
    std::cout << "Enter a number (0-6): ";
    
    int selected_option { };
    std::cin >> selected_option;

    std::cout << "You selected option " << selected_option << "\n";
  
}

int main()
{
    std::cout << "LOGHUNTER\n"
    "Security Log Analysis & Threat Detection\n"
    "\n"
    "Version 0.1.0\n"
    "\n"
    "MAIN MENU\n"
    "-------------------------------------------------------\n"
    "\n"
    "[1] Log Analysis\n"
    "[2] Security Events\n"
    "[3] Detection Rules\n"
    "[4] Alerts & Findings\n"
    "[5] Reports & Exports\n"
    "[6] Settings\n"
    "\n"
    "[0] Exit\n"
    "-------------------------------------------------------\n";

    getInputFromUser();
}
