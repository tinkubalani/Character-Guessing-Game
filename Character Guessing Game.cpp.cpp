#include <iostream>
using namespace std;

int main() 
{
    again:
    int n,underscore=0,flag=0;
    string s[20]={"life","game","stone","war","india","covid19","corona","cake","ambulance","hospital","facebook","whatsapp","japan","america","russia","dance","music","instagram","google","youtube"};
    string g,m,play;
    char user;
    cout<<"Welcome to character guessing game"<<endl;
    srand(time(0));
    n=rand()%19;
    g=s[n];
    
    m=g;
    for(int i=0;i<m.size();i++)
    {
        if(n%2==0)
        {
            if(i%2==0)
            {
                m[i]='_';
                underscore++;
            }
        }
        else
        {
            if(i%2!=0)
            {
                m[i]='_';
                underscore++;
            }
        }
    }
    
    do
    {
        cout<<"\nGuess the missing character from the word given below:"<<endl;
        cout<<m<<endl<<endl;
        cout<<"Type your missing character: ";
        cin>>user;
        cout<<endl;
        
        for(int i=0;i<g.size();i++)
        {
            if(m[i]=='_')
            {
                if(user==g[i])
                {
                    m[i]=g[i];
                    underscore--;
                    flag=1;
                }
            }
        }
        
        if(flag)
            cout<<"Hurray!!!, you guessed the missing character correctly"<<endl<<endl;
            
        if(!flag)
            cout<<"Oops,you gussed the incorrect character\nplease try again"<<endl<<endl;
        flag=0;
    
    }while(underscore!=0);
    
    cout<<"Do you want to play again(yes/no): ";
    cin>>play;
    
    if(play=="yes")
      goto again;
    else
      cout<<"\nThanks for playing the game"<<endl;
    

    return 0;
   
}