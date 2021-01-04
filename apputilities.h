#ifndef APPUTILITIES_H
#define APPUTILITIES_H

#include <string>
#include <utility>
#include <vector>

using namespace std;

namespace AppUtilities
{
    string generateRandomString(int);
    string stringify(vector<pair<string, string>>);
};

#endif // APPUTILITIES_H
