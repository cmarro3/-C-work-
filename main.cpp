#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Text {
public:
    Text(string T);

    string words;

    void show();

    void charNumber();

    void wordNumber();

    void sentenceNumber();

    void reverseText();

};

Text::Text(string T) {
    words = T;
}

void Text::show() {
    ifstream chicago;
    chicago.open("chicago.txt");
    if (chicago.fail()) {
        cout << "Your file didn't work, chief";
    } else {
        string s;
        while (getline(chicago, s)) {
            cout << s << endl;


        }
    }
}

void Text::charNumber() {
    string text;
    int sum = 0;
    ifstream File;
    File.open("chicago.txt");

    while (!File.eof()) {
        getline(File, text);

        int numofChars = text.length();
        for (char n : text) {
            if (n == ' ') {
                numofChars--;
            }
        }
        sum = numofChars + sum;
    }
    cout << "\nThe number of characters is: " << sum << endl;
    File.close();
}

void Text::wordNumber() {
    ifstream chicago;
    chicago.open("chicago.txt");
    char word[30];
    int count = 0;
    while (!chicago.eof()) {
        chicago >> word;
        count++;
    }
    cout << "The number of words in file are: " << count << endl;
    chicago.close();

}

void Text::sentenceNumber() {
    ifstream chicago;
    chicago.open("chicago.txt");
    char currentString;
    int counter = 0;

    while (!chicago.eof()) {
        chicago >> currentString;
        if (currentString == '?' || currentString == '!' || currentString == '.')
            counter++;

    }
    cout << "The number of sentences are: " << counter << endl;

}

void Text::reverseText() {

}

int main() {
    Text T("chicago.txt");
    T.show();
    T.charNumber();
    T.wordNumber();
    T.sentenceNumber();
    T.reverseText();
    return 0;
}

/*
 *  ifstream file("chicago.txt");
    char i;
    int x;
    vector<char> V;

    if(file.fail()){
        cerr<<"error"<<endl;
        exit(1);
    }



    while(file>>i){
        V.push_back(i);
    }

    x=V.size();

    reverse(V.begin(), V.end());

    for(int y=0; y<x; y++){
        cout <<  V[y];
    }*/

