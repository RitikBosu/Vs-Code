#include <iostream>
#include <string>

void removeDuplicates(std::string& str) {
    int index = 0;
    for (int i = 1; i < str.length(); ++i) {
        if (str[i] != str[index]) {
            index++;
            str[index] = str[i];
        }
    }
    str.resize(index + 1);
}

int main() {
    std::string str = "aabbbccdeeff";
    removeDuplicates(str);

    std::cout << "The string after removing duplicates: " << str << std::endl;

    return 0;
}