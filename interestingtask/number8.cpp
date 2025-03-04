#include <iostream>
#include <sstream>

using namespace std;

void formatText(const string &text, int width) {
    istringstream iss(text);
    string word, line;
    string currentParagraph;
    bool firstParagraph = true;

    while (getline(iss, word, '\n')) { 
        if (word.empty()) { 
            if (!currentParagraph.empty()) {
                if (!firstParagraph) cout << endl; 
                firstParagraph = false;
                istringstream words(currentParagraph);
                line.clear();

                while (words >> word) {
                    if (line.length() + word.length() + 1 > width) {
                        cout << line << endl;
                        line = word;
                    } else {
                        if (!line.empty()) line += " ";
                        line += word;
                    }
                }
                if (!line.empty()) cout << line << endl;
                currentParagraph.clear();
            }
            cout << endl; 
        } else {
            if (!currentParagraph.empty()) currentParagraph += " ";
            currentParagraph += word;
        }
    }
    
    if (!currentParagraph.empty()) {
        if (!firstParagraph) cout << endl;
        istringstream words(currentParagraph);
        line.clear();
        
        while (words >> word) {
            if (line.length() + word.length() + 1 > width) {
                cout << line << endl;
                line = word;
            } else {
                if (!line.empty()) line += " ";
                line += word;
            }
        }
        if (!line.empty()) cout << line << endl;
    }
}

int main() {
    string text;
    int n;

    cout << "Enter the lenght of the text (n > 50): ";
    cin >> n;
    cin.ignore(); 

    if (n <= 50) {
        cout << "Error! Length of the text must be more 50." << endl;
        return 1;
    }

    cout << "Enter the text(Ctrl + D to end) :" << endl;
    string line, inputText;
    while (getline(cin, line)) {
        inputText += line + "\n";
    }

    cout << "\nFinal text:\n";
    formatText(inputText, n);

    return 0;
}

