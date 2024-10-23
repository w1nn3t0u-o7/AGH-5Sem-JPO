#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string s1 {};
    std::cout << "Enter a word:" << std::endl;
    std::cin >> s1;
    std::string temp = s1;
    for (int i = 0; i < s1.size(); i++) {
        s1[i] = temp[temp.size() - i - 1];
    }
    std::cout << s1 <<std::endl;

    std::reverse(s1.begin(), s1.end());
    std::cout << s1 <<std::endl;
}