#include<bits/stdc++.h>
using namespace std;
void reverse(char *str)
{
    char * end=str;
    char tmp;
    if(str)
    {
        while(*end)
        {
            ++end;
        }
        --end;
        while(str < end)
        {
            tmp = *str;
            char ch=*end;
            *str = ch;
//            cout<<"here";
            str++;
            *end = tmp;
            end--;
        }
    }
}
int main()
{
    char s[]= "djnfdgbbbgfs";
    char *str=s;
    //str=s;
    cout<<str<<endl;
    reverse(str);
    cout<<str;
    return 0;
}
