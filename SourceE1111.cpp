#include "../std_lib_facilities.h"

vector<string> split(const string& s, const string& w);

int main()
{
    string poem("Let's go on a trip!\n\nLet's pack our bag!\n\nTake your trainers,\n\nTake your shoes.\n\nLet's go!");
    string whitespace{"?,.:;!"};
    cout << poem << "\n\n";
    vector<string>pm = split(poem, whitespace);
    for(string strk: pm)
    { 
        cout << strk << '\n';
    }
    return 0;
}

vector<string>split(const string& s, const string& w)
{
    vector<string> vs;
    stringstream ss(s);
    string str;
    for(string st; ss >> st;)
    {
        for(char ch: st)
        {
            for(char ch1: w)
            {
                if(ch == ch1 )
                    str += ' ';
                else
                    str += ch;
            }
        }
        str += ' ';
    }
    stringstream ss2(str);
    for(string st2; ss2 >> st2;)
    {
        vs.push_back(st2);
    }
    return vs;
}