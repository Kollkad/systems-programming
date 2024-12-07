#pragma once
#include "anyHuman.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace anyHuman;
class IHuman
{
    public:
        //конструкторы
        IHuman();
        IHuman(std::string name, std::string surname, int age, float weight, int growth);
        //des
        virtual ~IHuman();
        //get + set
        std::string getName();
        void setName(std::string name);
        std::string getSurname();
        void setSurname(std::string surname);
        int getAge();
        void setAge(int age);
        float getWeight();
        void setWeight(float weight);
        int getGrowth();
        void setGrowth(int growth);
        //методы
        void init(const char *n, const char *sn, int a, float w, int g);
        void uimt();
        void ubornin(int year);
        virtual void display();

        virtual void readFromConsole() = 0;
        virtual void writeToFile();

    private:
        std::string _name;
        std::string _surname;
        int _age;
        float _weight;
        int _growth;
};