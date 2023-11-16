#include <bits/stdc++.h>
using namespace std;

vector<string> key, opr, sep, idn;

vector<string> ke = {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern", "float", "for", "goto", "if", "int", "long", "register", "return", "short", "signed", "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"};
vector<string> op = {"+", "-", "*", "/", "%","==", "!=", "<", ">", "<=", ">=", "&&", "||", "!", "++", "--", "=", "+=", "-=", "*=", "/=", "%=", "&", "|", "^", "~", "<<", ">>"};
vector<string> fn = {"main(", "printf(", "scanf(", "getchar(", "putchar(", "gets(", "fgets(", "getch(", "sqrt(", "pow(", "fabs(", "ceil(", "floor(", "abs(", "strlen(", "strcpy(", "strcat(", "strcmp(", "strchr(", "strstr(", "malloc(", "calloc(", "free(", "realloc(", "isalpha(", "isdigit(", "toupper(", "tolower(", "time(", "ctime(", "localtime(", "rand(", "srand(", "fopen(", "fclose(", "fread(", "fwrite(", "fprintf(", "fscanf("};

int main()
{
    ifstream file("input.txt");

    if (!file.is_open())
    {
        cout << "File Not Found\n";
        return 0;
    }

    string word;

    while (file >> word)
    {
        if(word == "," || word == ";")
        {

            sep.push_back(word);
            continue;
        }

        if(word.back() == ';')
        {
            sep.push_back(";");
            word.pop_back();
        }

        if(word.back() == ',')
        {
            sep.push_back(",");
            word.pop_back();
        }

        auto it = find(op.begin(), op.end(), word);
        if (it != op.end())
        {
            opr.push_back(word);
            continue;
        }

        it = find(ke.begin(), ke.end(), word);
        if (it != ke.end())
        {
            key.push_back(word);
            continue;
        }

        if(word[0] == 'i' && word[1] == 'f' && word[2] == '(')
        {
            key.push_back("if");
            word = word.substr(2);
        }

        if(word[0] == 'd' && word[1] == 'o' && word[2] == '{')
        {
            key.push_back("do");
            word = word.substr(2);
        }

        if(word[0] == 'f' && word[1] == 'o' && word[2] == 'r' && word[3] == '(')
        {
            key.push_back("for");
            word = word.substr(3);
        }

        if(word[0] == 'w' && word[1] == 'h' && word[2] == 'i' && word[3] == 'l' && word[4] == 'e' && word[5] == '(')
        {
            key.push_back("while");
            word = word.substr(5);
        }

        if(word[0] >= '0' && word[0] <= '9')
            continue;

        bool flag = true;
        for(auto ch : word)
        {
            if(ch == '_' || ch == '$' || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
                continue;
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            idn.push_back(word);
            continue;
        }

        for(auto w : fn)
        {
            if(word.find(w) != string :: npos)
            {
                if(w[0] == word[0])
                {
                    string temp = w;
                    temp.pop_back();
                    idn.push_back(temp);
                    break;
                }
            }
        }
    }

    cout << "Keywords : " << key.size() << "\n";
    for(auto it : key)
        cout << it << "\n";
    cout << "\n";

    cout << "Operators : " << opr.size() << "\n";
    for(auto it : opr)
        cout << it << "\n";
    cout << "\n";

    cout << "Identifiers : " << idn.size() << "\n";
    for(auto it : idn)
        cout << it << "\n";
    cout << "\n";

    cout << "Separators : " << sep.size() << "\n";
    for(auto it : sep)
        cout << it << "\n";
    cout << "\n";


    file.close();

    return 0;
}

