#include <iostream>
#include <string>

bool isEmpty(const std::string& text)
{
    return text.empty();
}

void printGreeting(const std::string& name)
{
    std::cout << "Hello, " << name << "!\n";
}

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (isEmpty(name))
    {
        std::cout << "You did not enter a name.\n";
        return 1;
    }

    printGreeting(name);

    return 0;
}