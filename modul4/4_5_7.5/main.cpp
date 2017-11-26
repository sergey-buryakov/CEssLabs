#include <string>
#include <iostream>
#include <regex>

using namespace std;

void regReplace(string &pattern, string symb, string regsymb) {
    int prev = 0;
    int index = pattern.find(symb,prev);
    while(index != -1){
        pattern.replace(index,1,regsymb);
        prev=index;
        index = pattern.find(symb,prev);
    }
}

int main()
{
    string pattern;
    getline(cin, pattern);
    string s;
    getline(cin, s);

    regReplace(pattern, "D", "[0-9]");
    regReplace(pattern, "A", "\\w");
    regReplace(pattern, "?", ".");

    regex rgx(pattern);
    smatch match;

    while (regex_search(s, match, rgx)) {
        cout << match[0] << endl;
        s = match.suffix();
    }

    return 0;
}
