#include <iostream>
#include <cmath>

int main()
{
    int option = 0;

    std::cout << "Welcome to Physics Restaurant Menu\n1.Thermodynamics\n2.Electronics\n3.Classical Mechanics" << std::endl;

    std::cout << "Enter your choice: ";
    std::cin >> option;

    if (option == 1)
    {
        std::cout << "\nYou got Thermodynamics" << std::endl;
    }
    else if (option == 2)
    {
        std::cout << "\nYou got Electronics" << std::endl;
    }
    else if (option == 3)
    {
        std::cout << "\nYou got Classical Mechanics" << std::endl;
    }
    else
    {
        std::cout << "\n\aYour selection was invalid!" << std::endl;
    }

    return 0;
}
