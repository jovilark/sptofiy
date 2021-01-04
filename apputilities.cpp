#include "apputilities.h"

string AppUtilities::generateRandomString(int length)
{
    string dict {"ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"};
    string result {};
    for (int i = 0; i < length; ++i)
    {
        result += dict[rand()/dict.length()];
    }
    return result;
}

string AppUtilities::stringify(vector<pair<string, string>> entries)
{
    string result {};
    for (auto &p : entries)
    {
        result += p.first;
        result += '=';
        result += p.second;
    }
    return result;
}
