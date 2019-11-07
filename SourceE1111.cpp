#include "../std_lib_facilities.h"

vector<string> split(const string& s, const string& w);

int main()
{

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