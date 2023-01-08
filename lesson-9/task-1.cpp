#include <iostream>
#include <string>
#include <cassert>

class Game
{
public:
    virtual std::string result() = 0;
};

class FakeFootballGame : public Game
{
public:
    std::string result()
    {
        return "2:5";
    }
};

int main()
{
    FakeFootballGame game = FakeFootballGame();
    assert(game.result() == "2:5");
    std::cout << "Done" << std::endl;
    return 0;
}
