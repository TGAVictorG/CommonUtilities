#include <iostream>
#include <Windows.h>
#include <Timer.h>

int main()
{
    CommonUtilities::Timer timer;
    while (true)
    {
        timer.Update();
        std::cout << "DeltaTime: " << timer.GetDeltaTime() << "   Total time: " << timer.GetTotalTime() << std::endl;
        Sleep(100);
    }
}

