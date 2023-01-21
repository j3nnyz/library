// ========== split string into int vector ======= //

vector<int> split(const string &str)
{
    vector<int> tokens;

    int i;
    stringstream ss(str);
    while (ss >> i) {
        tokens.push_back(i);
        if (ss.peek() == ',') {
            ss.ignore();
        }
    }

    return tokens;
}

//