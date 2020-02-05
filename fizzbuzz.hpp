#include <iostream>
#include <sstream>

class FizzBuzz
{
    /*=====================
      メソッド
      =====================*/
    public:

        // コンストラクタ(通常版)
        FizzBuzz()
        {
            this->fizzNum = 3;
            this->buzzNum = 5;
        }

        // コンストラクタ(fizzとbuzz可変版)
        FizzBuzz(uint32_t fizz, uint32_t buzz)
        {
            this->fizzNum = fizz;
            this->buzzNum = buzz;
        }

        void run(uint32_t count)
        {
            for (uint32_t i = 1; i <= count; ++i)
            {
                std::stringstream ss;

                if ((i % fizzNum) == 0)
                {
                    ss << "Fizz";
                }
                if ((i % buzzNum) == 0)
                {
                    ss << "Buzz";
                }
                std::cout << i << " : " << ss.str() << std::endl;
            }
        }

    /*=====================
      クラス変数
      =====================*/
    private:
        uint32_t fizzNum;
        uint32_t buzzNum;
};

