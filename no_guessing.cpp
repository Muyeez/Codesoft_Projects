#include<iostream>
#include<time.h>
using namespace std;
class NoGuess
{
  private: int genno,atmpts=0;
  public:
    NoGuess()
    {
        srand(time(nullptr));// this is to seeed the no with the sys time or else 
                            // same no will appear for every run
        genno=rand()%100+1 ;//rand will generate sequence of no, % will round it of to two digits 
        cout<<"generated no is "<<genno;

    }  
    void play()
    {
        int guno;
        cout<<"\nwelcome to the no guessing game\n";
        do
        {
            cout<<"Enter the no to guess\n";
            cin>>guno;
            atmpts++;
            if(genno==guno)
            {
                cout<<"Congratulations! you are right\n";
                cout<<"total attempts taken to guess: "<<atmpts<<"\n";
                break;
            }
            else if(guno>genno)
            {
                cout<<"your guess is higher than the generated no\n";
            }
            else if(guno<genno)
            {
                cout<<"your guess is lesser than the generated no\n";
            }

        }while(true);
        
        
    }
};
int main()
{
    NoGuess obj;
    obj.play();
    //cout<<"guessed in total "<<<<"\n";
}