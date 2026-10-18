#include <iostream>
#include <string>
#include <vector>
using namespace std;

void permute(const string& letters, string& current, vector<bool>& used) {
    if (current.size() == letters.size()) {
        cout << current << " ";
        return;
    }
    for (size_t i = 0; i < letters.size(); i++) {
        if (!used[i]) {
            used[i] = true;
            current.push_back(letters[i]);
            permute(letters, current, used);
//            current.pop_back();
            used[i] = false;
        }
    }
}

int main() {
    int n;
    cout << "n = ";
    cin >> n;

    string letters;
    for (int i = 0; i < n; i++)
        letters += char('a' + i);

    string current;
    vector<bool> used(n, false);
    permute(letters, current, used);
    cout << endl;

    return 0;
}
