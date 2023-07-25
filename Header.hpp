#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>
#include <vector>

// ANSI escape codes for colors
const std::string RESET = "\033[0m";
const std::string BLACK = "\033[30m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";

// Define macros for text styles
const std::string BOLD = "\033[1m";
const std::string UNDE = "\033[4m";
const std::string REVE = "\033[7m";

void drawCard_line1(std::vector<std::pair<std::string, std::string> > strArr);
void drawCard_line2(std::vector<std::pair<std::string, std::string> > strArr);
void drawCard_line3(std::vector<std::pair<std::string, std::string> > strArr);
int cardChoice(int row1, int row2, int row3);


#endif