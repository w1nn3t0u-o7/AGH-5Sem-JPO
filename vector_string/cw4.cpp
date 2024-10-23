#include <iostream>
#include <string>

std::string lowercaseConv(std::string sentence) {
    for (int i = 0; i < sentence.size(); ++i) {
        if (isupper(sentence[i])) {
            sentence[i] = tolower(sentence[i]);
        }
    }
    return sentence;
}

int main() {
    std::string sentence {};
    char letter {};
    int lcount = 0;

    std::cout << "Enter a sentence:" << std::endl;
    std::getline(std::cin, sentence);
    std::cout << "Enter a letter to look for:" << std::endl;
    std::cin >> letter;
    if (isupper(letter)) {
        letter = tolower(letter);
    } 
    sentence = lowercaseConv(sentence);
    for (int i = 0; i < sentence.size(); ++i) {
        if (sentence[i] == letter) {
            ++lcount;
        }
    }
    std::cout << "Letter " << letter << " appears " << lcount << " times in your sentence" << std::endl;
    return 0;
}