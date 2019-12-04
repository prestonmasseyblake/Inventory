#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<string> listFromString(string line);

int main()
{
    string input;
    vector <string> inventory;

    cout<<"What's in the store (separate items by commas)? ";
    getline(cin,input);

    inventory = listFromString(input); //TODO: Write this function!

    cout<<inventory.size()<<" items in inventory.\n";
    for(int i=0; i<inventory.size(); i++)
    {
        cout<<inventory.at(i)<<endl;
    }

    return 0;
}
vector<string> listFromString(string line)
{
        int count=0;
        string word;
        vector<string> wordList;
        for(int i=0;i<line.length();i++)
        {
                if(line[i] != ',')
                {
                        word.append(1,line[i]);
                }
                else
                {
                        wordList.push_back(word);
                        word="";
                }
        }
        wordList.push_back(word);
        return wordList;
}
