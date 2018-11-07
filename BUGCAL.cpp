#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, num1, num2;
    int digit1[11], digit2[11], ans[11];
    cin>>t;
    while(t--)
    {
        cin>>num1>>num2;
        for(int i=0;i<11; i++) 
        {
            digit1[i] = 0;
            digit2[i] = 0;
            ans[i] = 0;
        }
        int it =  10;
        while(num1>0){
            digit1[it--] = num1%10;
            num1 = num1/10;
        } 
        it =  10;
        while(num2>0){
            digit2[it--] = num2%10;
            num2 = num2/10;
        }
        for(int i=0; i<11; i++)
        {
            ans[i] = (digit1[i] + digit2[i])%10;
        }
        it = 0;
        long long int final_answer=0;
        while(it<11){
            final_answer = (final_answer*10) + ans[it];
            it++;
        }
        cout<<final_answer<<endl;
    }
    return 0;
}
