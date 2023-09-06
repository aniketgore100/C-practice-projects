#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

std::vector<std::string> nouns = {
    "विद्या", "धर्म", "कर्म", "योग", "भक्ति", "शांति"
};

std::vector<std::string> verbs = {
    "ज्ञानयति", "प्रकाशयति", "करोति", "सेवते", "पूजयति", "ध्यायति"
};

std::vector<std::string> adjectives = {
    "सुखिनः", "शान्ता", "उत्तमा", "विद्वत्तमा", "श्रीमान्", "आनन्दितः"
};

std::string getRandomElement(const std::vector<std::string>& vec) {
    int index = rand() % vec.size();
    return vec[index];
}

std::string generateShloka() {
    std::string noun = getRandomElement(nouns);
    std::string verb = getRandomElement(verbs);
    std::string adjective = getRandomElement(adjectives);

    return noun + " " + verb + " " + adjective;
}

int main() {
    srand(time(nullptr));

    for (int i = 0; i < 5; ++i) {
        std::string shloka = generateShloka();
        std::cout << "श्लोकः " << i+1 << ": " << shloka << std::endl;
    }

    return 0;
}
