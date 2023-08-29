#include <iostream>
#include "limits"
#include "climits"

int main()
{
    std::cout << -std::numeric_limits<float>::max() << std::endl;
    std::cout << -1.0f << std::endl;
    return 0;
}