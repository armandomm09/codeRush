#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    int sum = 0, number = 0;
    cin >> input;
    while(sum < 10) {
        for (int i = 0; i < input.length(); i++) {
            number = int(input[i]) - 48;
            sum += number;

        }
    }
        cout << sum;


    return 0;
}