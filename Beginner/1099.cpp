#include <iostream>

using namespace std;

int main(){
    int N, X,Y;
    int sum=0;
    
    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> X>>Y;
        
        if(X<=Y)
        {
            for(int i = X+1;i<Y;i++)
            {
                if(i%2!=0)
                    sum+=i;
                    
            }
                cout <<sum<<endl;
                sum=0;
            
        }
        else 
        {
            for(int i = Y+1;i<X;i++)
            {
                if(i%2!=0)
                    sum+=i;
            }
                cout <<sum<<endl;
            sum=0;
        }
    }
    return 0;
}
