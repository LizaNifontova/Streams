#include <iostream>
#include <windows.h> 
#include <fstream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int StartMs = GetTickCount(); 

    std::ofstream ofs("1.txt");
    for (int i = 0; i < 100000; ++i) 
        ofs << i << ' ';

    int EndMs = GetTickCount();

    std::cout << "Время выполнения: " << EndMs - StartMs << " ms\n";
    std::getchar();
    return 0;
}
