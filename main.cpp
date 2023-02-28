#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main()
{
    
    string text;
    cout << "Enter the text to convert to hexidecimal: \n";
    getline(cin, text);

    for (size_t i = 0; i < text.length() + (text.length()/2); i++)
    {
        unsigned char c = text[i];
        stringstream hexstream;
        hexstream << std::hex << (int)c;
        string hex = hexstream.str();
        if (hex.length() == 1)
        {
            hex = "0" + hex;
        }
        
        cout << hex;
    }
    cout << endl;
}