#pragma once
#include <string>
namespace anyHuman
{
    enum themeAge
    {
        undefined = 0,
        //имя
        Dust = 100,
        Tomas = 23,
        Glaustoma = 3
    };
    std::string correctAlpha(std::string str);
    int correctCount(int count);
    int correctCountKidTeeth(int count);
    int correctCountAdultTeeth(int count);
}