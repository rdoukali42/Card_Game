#include "Header.hpp"


int getRandomNumber(int min, int max) {
    return min + rand() % (max - min + 1);
}

bool isExist(const std::vector<std::pair<std::string, std::string> >& vec, const std::pair<std::string, std::string>& element) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == element) {
            return true;
        }
    }
    return false;
}

// Function to draw a card
// void drawCard(const std::string& rank, const std::string& suit) {
//     std::cout << "+-----+" << std::endl;
//     std::cout << "| " << rank.substr(0, 1) << "   |" << std::endl;
//     std::cout << "|  " << suit << "  |" << std::endl;
//     std::cout << "|   " << rank.substr(0, 1) << " |" << std::endl;
//     std::cout << "+-----+" << std::endl;
// }

void drawCard(std::pair<std::string, std::string> strArr) {
    std::cout << "+-----+" << std::endl;
    std::cout << "| " << strArr.first.substr(0, 1) << "   |" << std::endl;
    std::cout << "|  " << strArr.second << "  |" << std::endl;
    std::cout << "|   " << strArr.first.substr(0, 1) << " |" << std::endl;
    std::cout << "+-----+" << std::endl;
}

// void drawCard_line3(std::vector<std::pair<std::string, std::string> > strArr)
// {
//     for (int i = 0 ; i < 19; i += 3)
//     {
//         std::cout << "+-----+";
//         if (i != 18)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 0; i < 19; i += 3)
//     {
//         std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
//         if (i != 18)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 0; i < 19; i += 3)
//     {
//         std::cout << "|  " << strArr[i].second << "  |";
//         if (i != 18)
//                std::cout << "   ";
//         else
//             std::cout << "      --> Row :: 1";
//     }
//     std::cout<< std::endl;
//      for (int i = 0; i < 19; i += 3)
//     {
//         std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
//         if (i != 18)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 0; i < 19; i += 3)
//     {
//         std::cout << "+-----+";
//         if (i != 18)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//     ///////////////////////////
//     for (int i = 1; i < 20; i += 3)
//     {
//         std::cout << "+-----+";
//         if (i != 19)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 1; i < 20; i += 3)
//     {
//         std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
//         if (i != 19)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 1; i < 20; i += 3)
//     {
//         std::cout << "|  " << strArr[i].second << "  |";
//         if (i != 19)
//                std::cout << "   ";
//         else
//             std::cout << "      --> Row :: 2";
//     }
//     std::cout<< std::endl;
//      for (int i = 1; i < 20; i += 3)
//     {
//         std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
//         if (i != 19)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 1; i < 20; i += 3)
//     {
//         std::cout << "+-----+";
//         if (i != 19)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//     ////////////////////
//     for (int i = 2; i < 21; i += 3)
//     {
//         std::cout << "+-----+";
//         if (i != 20)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 2; i < 21; i += 3)
//     {
//         std::cout << "| " << strArr[i].first.substr(0, 1) << "   |";
//         if (i != 20)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 2; i < 21; i += 3)
//     {
//         std::cout << "|  " << strArr[i].second << "  |";
//         if (i != 20)
//                std::cout << "   ";
//         else
//             std::cout << "      --> Row :: 3";
//     }
//     std::cout<< std::endl;
//      for (int i = 2; i < 21; i += 3)
//     {
//         std::cout << "|   " << strArr[i].first.substr(0, 1) << " |";
//         if (i != 20)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
//      for (int i = 2; i < 21; i += 3)
//     {
//         std::cout << "+-----+";
//         if (i != 20)
//                std::cout << "   ";
//     }
//     std::cout<< std::endl;
// }

int main() {
    // Define some example cards
    std::string ranks[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    // std::string suits[] = { BLACK + "♠", "♣", "♥", "♦" };
    std::string suits[] = { BLACK + "♠" + RESET, GREEN + "♣" + RESET, RED + "♥" + RESET, BLUE + "♦" + RESET };
    std::string Rks[7] = {ranks[getRandomNumber(0, 12)], ranks[getRandomNumber(0, 12)], ranks[getRandomNumber(0, 12)], ranks[getRandomNumber(0, 12)], ranks[getRandomNumber(0, 12)], ranks[getRandomNumber(0, 12)], ranks[getRandomNumber(0, 12)]};
    std::string Sts[4] = {suits[getRandomNumber(0, 3)], suits[getRandomNumber(0, 3)], suits[getRandomNumber(0, 3)], suits[getRandomNumber(0, 3)]};

    std::vector<std::pair<std::string, std::string> > strArr; // Create a vector of pairs of strings

    // Add elements to the vector
    for(int i = 0; i < 21 ; i++)
    {
        int a = getRandomNumber(0, 12);
        int b = getRandomNumber(0, 3);
        std::pair<std::string, std::string> _new = std::make_pair(ranks[a], suits[b]);
        if (!isExist(strArr, _new))
            strArr.push_back(std::make_pair(ranks[a], suits[b]));
        else
            i--;
    }

    // Draw some cards
    // for (size_t s = 0; s < 4; ++s) {
    //     for (size_t r = 0; r < 13; ++r) {
    //         drawCard(ranks[r], suits[s]);
    //     }
    // }

    //  for (size_t i = 0; i < strArr.size(); ++i) {
    //     std::cout << "Pair " << i + 1 << ": " << strArr[i].first << " " << strArr[i].second << std::endl;
    // }
    drawCard_line1(strArr);
    int row1;
    int row2;
    int row3;
    int res;
    std::cout<< "Which Row is your Card ?"<< std::endl;
    std::cin>> row1;
    drawCard_line2(strArr);
    std::cout<< "Which Row is your Card ?"<< std::endl;
    std::cin>> row2;
    drawCard_line3(strArr);
    std::cout<< "Which Row is your Card ?"<< std::endl;
    std::cin>> row3;
    res = cardChoice(row1, row2, row3);
    // printf("Res [%d]\n", res);
    std::cout<< "Your Choice Was "<< std::endl;
    drawCard(strArr[res]);


    return 0;
}