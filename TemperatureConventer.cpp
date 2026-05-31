#include <iostream>
#include <fcntl.h>      // for _setmode
#include <io.h>         // for _setmode
#include <stdio.h>      // for _fileno

int main()
{
    //  CHANGE STDOUT TO UNICODE 16
    _setmode(_fileno(stdout), _O_U8TEXT);

    // INSTRUCTIONS FOR USER - NUMBER
    std::wcout << "Please type temperature you wish to conver from!\n";

    // USER INPUTS NUMBER
    int iNumber;
    std::wcin >> iNumber;

    // INSTRUCTIONS FOR USER - TEMPERATURE SCALE
    std::wcout << "Please choose temperature scale you wish to convert from!\n";
    std::wcout << L"1. Fahrenheit (°F)\n" << L"2. Celsius (°C)\n" << L"3. Kelvin (K)\n";

    // USER CHOOSES TEMPERATURE SCALE
    int iTemperatureScale;
    std::cin >> iTemperatureScale;

    // CHECKS ANSWER ABOUT TEMPERATURE SCALE
    if (iTemperatureScale == 1)
    {
        std::wcout << iNumber;
        std::wcout << L"°F\n\n";

        std::wcout << (iNumber-32)/1.8;
        std::wcout << L"°C\n";
        std::wcout << (iNumber-32)/1.8+273.15;
        std::wcout << L"K";
    }
    if (iTemperatureScale == 2)
    {
        std::wcout << iNumber;
        std::wcout << L"°C\n\n";

        std::wcout << (iNumber*1.8)+32;
        std::wcout << L"°F\n";
        std::wcout << iNumber+273.15;
        std::wcout << L"K";
    }
    if (iTemperatureScale == 3)
    {
        std::wcout << iNumber;
        std::wcout << "K\n\n";

        std::wcout << (iNumber-273.15)*1.8+32;
        std::wcout << L"°F\n";
        std::wcout << iNumber-273.15;
        std::wcout << L"°C";
    }

    return 0;
}