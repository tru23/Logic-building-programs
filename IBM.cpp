#include <bits/stdc++.h>
using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'areAlmostEquivalent' function below.
 *
 * The function is expected to return a STRING_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY s
 *  2. STRING_ARRAY t
 */

vector<string> areAlmostEquivalent(vector<string> s, vector<string> t) {
    vector<string> result;
    for (int i = 0; i < s.size(); i++) {
        int a1[26] = {0};
        int a2[26] = {0};
        
        for (char x : s[i]) {
            a1[x - 'a']++;
        }

        for (char x : t[i]) {
            a2[x - 'a']++;
        }

        bool equivalent = true;
        for (int j = 0; j < 26; j++) {
            if (abs(a1[j] - a2[j]) > 3) {
                equivalent = false;
                break;
            }
        }
        if (equivalent) {
            result.push_back("YES");
        } else {
            result.push_back("NO");
        }
    }
    return result;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string s_count_temp;
    getline(cin, s_count_temp);
    int s_count = stoi(ltrim(rtrim(s_count_temp)));

    vector<string> s(s_count);
    for (int i = 0; i < s_count; i++) {
        string s_item;
        getline(cin, s_item);
        s[i] = s_item;
    }

    string t_count_temp;
    getline(cin, t_count_temp);
    int t_count = stoi(ltrim(rtrim(t_count_temp)));

    vector<string> t(t_count);
    for (int i = 0; i < t_count; i++) {
        string t_item;
        getline(cin, t_item);
        t[i] = t_item;
    }

    vector<string> result = areAlmostEquivalent(s, t);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];
        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";
    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(), s.end());
    return s;
}
