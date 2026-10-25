#include <iostream>
#include <limits>


void analyzeLogs();

int showMenue()
{
    std::cout << "\nLOGHUNTER\n"
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

    while (true)
    {
        std::cout << "Enter a number (0-6): ";

        int selected_option {};

        if (std::cin >> selected_option)
        {
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(), '\n'
            );

            if (selected_option >= 0 && selected_option <= 6)
            {
                return selected_option;
            }
        }
        else
        {
            if (std::cin.eof() || std::cin.bad())
            {
                return 0;
            }

            std::cin.clear();
            std::cin.ignore(
                std::numeric_limits<std::streamsize>::max(), '\n'
            );
        }

        std::cout << "Invalid selection. Please enter 0-6.\n";
    }
}

void analyzeLogs()
{
    std::cout << "Starting log analysis...\n";
}

int main()
{
    int selected_option {};

    do
    {
        selected_option = showMenue();

        switch (selected_option)
        {
            case 1:
                std::cout << "Log Analysis selected\n";
                analyzeLogs();

            case 2:
                std::cout << "Security Events selected\n";
                break;

            case 3:
                std::cout << "Detection Rules selected\n";
                break;

            case 4:
                std::cout << "Alerts & Findings selected\n";
                break;

            case 5:
                std::cout << "Reports & Exports selected\n";
                break;

            case 6:
                std::cout << "Settings selected\n";
                break;

            case 0:
                std::cout << "Goodbye!\n";
                break;
        }
    } while (selected_option != 0);

    return 0;
}
