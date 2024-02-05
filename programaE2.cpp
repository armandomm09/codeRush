#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string input_string;
    cin >> input_string;

    vector<string> input(input_string.length());

    int size = input.size();

    for (int i =0; i < input_string.length(); i++)
    {
        input[i] = input_string[i];
    }

    while (input.size() != 0)
    {
        size = input.size();
        for (int k = 0; k < input.size() - 1; k++)
        {
            if (input[k] == "(" && input[k + 1] == ")")
            {
                input.erase(input.begin() + k, input.begin() + k + 2);
                break;
            }
            else if (input[k] == "[" && input[k + 1] == "]")
            {
                input.erase(input.begin() + k, input.begin() + k + 2);
                break;
            }
            else if (input[k] == "{" && input[k + 1] == "}")
            {
                input.erase(input.begin() + k, input.begin() + k + 2);
                break;
            }
        }
        if (size == input.size())
        {
            cout << "Syntax Error";
            return 0;
        }
    }

    cout << "No error";
    return 0;
}