#include "Header.hpp"

void drawCard_line1(std::vector<std::pair<std::string, std::string> > strArr)
{
    for (int i = 0 ; i < 7; i++)
    {
        std::cout << "+-----+";
        if (i != 13)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 0; i < 7; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 6)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 0; i < 7; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 6)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 1";
    }
    std::cout<< std::endl;
     for (int i = 0; i < 7; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 6)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 7; i < 14; i++)
    {
        std::cout << "+-----+";
        if (i != 6)
               std::cout << "   ";
    }
    std::cout<< std::endl;
    ///////////////////////////
    for (int i = 7; i < 14; i++)
    {
        std::cout << "+-----+";
        if (i != 13)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 7; i < 14; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 13)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 7; i < 14; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 13)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 2";
    }
    std::cout<< std::endl;
     for (int i = 7; i < 14; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 13)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 7; i < 14; i++)
    {
        std::cout << "+-----+";
        if (i != 13)
               std::cout << "   ";
    }
    std::cout<< std::endl;
    ////////////////////
    for (int i = 14; i < 21; i++)
    {
        std::cout << "+-----+";
        if (i != 20)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 14; i < 21; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 20)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 14; i < 21; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 20)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 3";
    }
    std::cout<< std::endl;
     for (int i = 14; i < 21; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 20)
               std::cout << "   ";
    }
    std::cout<< std::endl;
     for (int i = 0; i < 7; i++)
    {
        std::cout << "+-----+";
        if (i != 6)
               std::cout << "   ";
    }
    std::cout<< std::endl;
}

void drawCard_line2(std::vector<std::pair<std::string, std::string> > strArr)
{
    for (int i = 0; i < 16; i++)
    {
        std::cout << "+-----+";
        if (i != 15)
            std::cout << "   ";
        if (i == 2)
            i += 4;
        if (i == 8)
            i += 5;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 16; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 15)
               std::cout << "   ";
        if (i == 2)
            i += 4;
        if (i == 8)
            i += 5;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 16; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 15)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 1";
        if (i == 2)
            i += 4;
        if (i == 8)
            i += 5;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 16; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 15)
            std::cout << "   ";
        if (i == 2)
            i += 4;
        if (i == 8)
            i += 5;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 16; i++)
    {
        std::cout << "+-----+";
        if (i != 13)
            std::cout << "   ";
        if (i == 2)
            i += 4;
        if (i == 8)
            i += 5;
    }
    std::cout<< std::endl;
    ///////////////////////////
    for (int i = 3; i < 18; i++)
    {
        std::cout << "+-----+";
        if (i != 17)
               std::cout << "   ";
        if (i == 4 || i == 11)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 3; i < 18; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 17)
               std::cout << "   ";
        if (i == 4 || i == 11)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 3; i < 18; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 17)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 2";
        if (i == 4 || i == 11)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 3; i < 18; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 17)
               std::cout << "   ";
        if (i == 4 || i == 11)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 3; i < 18; i++)
    {
        std::cout << "+-----+";
        if (i != 17)
               std::cout << "   ";
        if (i == 4 || i == 11)
            i += 4;
    }
    std::cout<< std::endl;
    ////////////////////
    for (int i = 5; i < 21; i++)
    {
        std::cout << "+-----+";
        if (i != 20)
               std::cout << "   ";
        if (i == 6)
            i += 5;
        if (i == 13)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 5; i < 21; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 20)
               std::cout << "   ";
        if (i == 6)
            i += 5;
        if (i == 13)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 5; i < 21; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 20)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 3";
        if (i == 6)
            i += 5;
        if (i == 13)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 5; i < 21; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 20)
               std::cout << "   ";
        if (i == 6)
            i += 5;
        if (i == 13)
            i += 4;
    }
    std::cout<< std::endl;
     for (int i = 5; i < 21; i++)
    {
        std::cout << "+-----+";
        if (i != 20)
               std::cout << "   ";
        if (i == 6)
            i += 5;
        if (i == 13)
            i += 4;
    }
    std::cout<< std::endl;
}


///////////////////////////////////////



void drawCard_line3(std::vector<std::pair<std::string, std::string> > strArr)
{
    for (int i = 0 ; i < 19; i++)
    {
        std::cout << "+-----+";
        if (i != 18)
               std::cout << "   ";
        if (i == 0 || i == 9)
            i += 5;
        if (i == 7 || i == 16)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 19; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 18)
               std::cout << "   ";
        if (i == 0 || i == 9)
            i += 5;
        if (i == 7 || i == 16)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 19; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 18)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 1";
        if (i == 0 || i == 9)
            i += 5;
        if (i == 7 || i == 16)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 19; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 18)
               std::cout << "   ";
        if (i == 0 || i == 9)
            i += 5;
        if (i == 7 || i == 16)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 0; i < 19; i++)
    {
        std::cout << "+-----+";
        if (i != 18)
               std::cout << "   ";
        if (i == 0 || i == 9)
            i += 5;
        if (i == 7 || i == 16)
            i++;
    }
    std::cout<< std::endl;
    ///////////////////////////
    for (int i = 1; i < 20; i++)
    {
        std::cout << "+-----+";
        if (i != 19)
               std::cout << "   ";
        if (i == 3 || i == 12)
            i += 4;
        if (i == 1 || i == 8 || i == 10 || i == 17)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 1; i < 20; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 19)
               std::cout << "   ";
        if (i == 3 || i == 12)
            i += 4;
        if (i == 1 || i == 8 || i == 10 || i == 17)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 1; i < 20; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 19)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 2";
        if (i == 3 || i == 12)
            i += 4;
        if (i == 1 || i == 8 || i == 10 || i == 17)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 1; i < 20; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 19)
               std::cout << "   ";
        if (i == 3 || i == 12)
            i += 4;
        if (i == 1 || i == 8 || i == 10 || i == 17)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 1; i < 20; i++)
    {
        std::cout << "+-----+";
        if (i != 19)
               std::cout << "   ";
        if (i == 3 || i == 12)
            i += 4;
        if (i == 1 || i == 8 || i == 10 || i == 17)
            i++;
    }
    std::cout<< std::endl;
    ////////////////////
    for (int i = 2; i < 21; i++)
    {
        std::cout << "+-----+";
        if (i != 20)
               std::cout << "   ";
        if (i == 5 || i == 14)
            i += 5;
        if (i == 2 || i == 11)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 2; i < 21; i++)
    {
        std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
        if (i != 20)
               std::cout << "   ";
        if (i == 5 || i == 14)
            i += 5;
        if (i == 2 || i == 11)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 2; i < 21; i++)
    {
        std::cout << "|  " << strArr[i].second << "  |";
        if (i != 20)
               std::cout << "   ";
        else
            std::cout << "      --> Row :: 3";
        if (i == 5 || i == 14)
            i += 5;
        if (i == 2 || i == 11)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 2; i < 21; i++)
    {
        std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
        if (i != 20)
               std::cout << "   ";
        if (i == 5 || i == 14)
            i += 5;
        if (i == 2 || i == 11)
            i++;
    }
    std::cout<< std::endl;
     for (int i = 2; i < 21; i++)
    {
        std::cout << "+-----+";
        if (i != 20)
               std::cout << "   ";
        if (i == 5 || i == 14)
            i += 5;
        if (i == 2 || i == 11)
            i++;
    }
    std::cout<< std::endl;
}