// Printing Unicode UTF-16 text to the Windows console
 
#include <fcntl.h>      // for _setmode
#include <io.h>         // for _setmode
#include <stdio.h>      // for _fileno
 
#include <iostream>     // for std::wcout
 
int main()
{
    // Change stdout to Unicode UTF-16
    _setmode(_fileno(stdout), _O_U16TEXT);
 
    // Print some Unicode text encoded in UTF-16
    std::wcout << L"Japan written in Japanese: \x65e5\x672c (Nihon)\n";
}