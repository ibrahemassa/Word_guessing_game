#include<iostream>
#include<string>
#include<time.h>
#include<algorithm>
#include <vector>

using namespace std;

int main(){
    string words[] ={"blanket","ill","motor","ill","wherever","sunlight","fence","policeman","replied","today","winter","weight","piano","unless","fourth","ourselves","want","waste","interior","remove","date","bar","correct","grade","several","tune","hit","citizen","wife","condition","writing","trade","class","religious","inside","keep"} ;
    char x;
    int size = sizeof(words)/sizeof(string);
    string temps, again;
    srand(time(NULL));
    again:
    string word = words[rand() % size];
    vector<char> temp(word.length(), '#');
    //cout<<"Lets start the game, the word contains "<<word.length()<<" letters"<<"\n"<<"The first letter is: "<<word[0]<<" and the last letter is: "<<word[word.length() - 1]<<endl;
    cout<<"Lets start the game, the word contains "<<word.length()<<" letters"<<endl;
    for(int i = 0 ; i < sizeof(temp)/sizeof(char); i++)
        cout<<temp[i];
    cout<<endl;
    for(;;){
        cout<<"Enter a letter: "<<endl;
        cin>>x;
        for (int i = 0; i < word.length(); i++)
        {
            if (x == word[i])
                temp[i] = x;
            cout<<temp[i];
        }
        temps = string(temp.begin(), temp.end());
        cout<<endl;
        if(temps == word)
            break;
    }
        cout<<"Congrats you found the word and the word was: "<<word<<endl;
        cout<<"Do you want to play again? :";
        cin>>again;
        if(again == "Yes" || again == "yes" || again == "y"|| again == "Y")
            goto again;
        else
            return 0;
    return 0;
}
