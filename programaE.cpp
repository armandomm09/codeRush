#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{

    map<char, char> hash;

    hash['{'] = '}';
    hash['['] = ']';
    hash['('] = ')';

    string input;
    cin >> input;
    int p1 = 0;
    int p2 = input.length() - 1;

    bool consecutivo = true;

    while(consecutivo && !input.empty()){
        for(int i = 0; i < input.length() - 1; i++) {
            if (input[i + 1] == hash[input[i]]) {
                input.erase(i, 2);
                consecutivo = true;
                continue;
            }
            consecutivo = false;
        }
    }

    if (!input.empty() && !consecutivo)
    {
        cout << "Syntax Error";
        return 0;
    }

    cout << "No error";

    /*
    while(p1 < p2){
        if (input[p1] == hash[input[p2]]) {
            input.erase(p1, 2);
            p1
        }
    }
    /*

    return 0;
}