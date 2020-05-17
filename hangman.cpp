
#include <iostream>
using namespace std;

string empty();
string replace_dash_with_letter(string d, string word, char u_i);
int num_dashes(string d);

int main()
{
    string teacher_word;
    int num_incorrect = 0;
    string dashes;// string with 5 consecutive dashes
    char user_input;
    char user_input_upper;
    int index_val;
    
    dashes = empty();
    
    cout<<dashes<<endl;
    cout<<"Professor choose word: (all upper case)";
    cin>>teacher_word;
    
    
    while(num_dashes(dashes)>0 && num_dashes(dashes)<= 5 && num_incorrect<10)
    {
        
        cout<<"Pick a letter = ";
        cin>>user_input;
        
        user_input_upper =toupper(user_input);
        
        cout<<endl;
        
        index_val = teacher_word.find(user_input_upper);
        
        if (index_val<=-1)
        {
            num_incorrect+=1;
        }
        dashes = replace_dash_with_letter(dashes, teacher_word, user_input_upper);
        cout<<dashes;
        cout<<endl;
    
    }

    return 0;
}

string empty()
{
    string dash;
    
    for (int i = 0; i<5; i+=1)
    {
        dash+="_";
    }
    return dash;
}


// input the teacher word and another word and if they are the same replace the dash with the word;

string replace_dash_with_letter(string d, string word, char u_i)
{
    for (int i =0; i<5; i+=1)
    {
        if (u_i == word[i])
        {
            d[i] = u_i;
        }
        
    }
    return d;
}

int num_dashes(string d)
{
    char some= '_';
    int counter= 0;
    
    for(int i = 0; i<5; i+=1)
    {
        if (some==d[i])
        {
            counter+=1;
        }
    }
    return counter;
}