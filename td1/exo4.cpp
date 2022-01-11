#include <iostream>
#include <vector>
using namespace std;

// vector<unsigned int> count_lower(const string &input);
// void display_lower_occ(const vector<unsigned int> &occ);



vector<unsigned int> count_lower(const string &input)
{
    vector<unsigned int> res(26);

    for (int i : input)
    {
        res[i - 'a']++;
    }
    return res;
}

void display_lower_occ(const vector<unsigned int> &occ)
{
    const string abc = "abcdefghijklmnopqrstuvwxyz";

    for (int i = 0; i < 26; i++)
    {
        cout << char('a'+i) << " :: " << abc[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    string input;
    cout << "Saisir une string :: " << endl;
    cin >> input;

    vector<unsigned int> res = count_lower(input);
    display_lower_occ(res);


    return 0;
}