#include <memory>
#include "fizzbuzz.hpp"

int main(int argc, char const* argv[])
{
    {
        auto fzbz_fix = std::make_unique<FizzBuzz>();
        fzbz_fix->run(30);
    }

    std::cout << "------------------------" << std::endl;

    FizzBuzz fzbz_mod(4, 7);
    fzbz_mod.run(30);

    return 0;
}
