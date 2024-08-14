#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<string> sort(vector<string> sentences) {
    std::ranges::sort(sentences.begin(), sentences.end());

    return sentences;
}

int main() {
    vector<string> sentences = {};
    string newest_sentence = "";
    vector<string> sorted = {};
    bool sentence_enterded = true;

    cout << "Please enter your sentence\n" << "Enter '.' to stop" << endl;
    while (getline(cin, newest_sentence) && newest_sentence != ".") {
        sentences.push_back(newest_sentence);
    }

    if (sentence_enterded == true) {
        sort(sentences.begin(), sentences.end());
        cout << "Sorted sentences are in order:" << endl;
        for (int i = 0; i < sentences.size(); i++) {
            cout << sentences[i] << endl;
        }
    }

    system("pause");
    return 0;
}