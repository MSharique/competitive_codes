#include<bits/stdc++.h>
#include<string>
#include<cstring>
#include<sstream>
#include<cstdlib>
using namespace std;

void selectionSort(string array[], int NUM_NAMES,int ptr)
{
int startScan, minIndex;
string minValue;
for(startScan = 0; startScan < ptr; startScan++)
{
    minIndex = startScan;
    minValue = array[startScan];
    for(int index = startScan +1; index < NUM_NAMES; index++)
    {
        if (array[index] < minValue)
        {
            minValue = array[index];
            minIndex = index;
        }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
}
}
void selectionSort1(int array[], int NUM_NAMES,int ptr)
{
int startScan, minIndex;
int minValue;
for(startScan = 0; startScan < ptr; startScan++)
{
    minIndex = startScan;
    minValue = array[startScan];
    for(int index = startScan +1; index < NUM_NAMES; index++)
    {
        if (array[index] < minValue)
        {
            minValue = array[index];
            minIndex = index;
        }
    }
    array[minIndex] = array[startScan];
    array[startScan] = minValue;
}
}
int main()
{
    int t;
	std::string ss;
    cin>>t;
    //getchar();
    while(t--)
    {
        int var=0;
        string word[1000];
        int num[1000];
        int i=0,j=0,ptr1=1,ptr2=1;
        //getchar();
		ss = "";
		cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n'); 
		std::getline(std::cin, ss);//getline(cin,ss);
        cout<<"Ss: "<<ss<<endl;
        istringstream iss(ss);
        string str;
        while(iss>>str)
        {
            cout<<"Here\n";
//            cin>>str;
            if(var%2)
            {
                stringstream(str)>>num[j++];
                cout<<"Num: "<<num[j-1]<<endl;
            }
            else
            {
                str[0]=tolower(str[0]);
                word[i++]=str;
                cout<<"Word: "<<word[i-1]<<endl;
            }
            var++;
        }
        cout<<"out of loop\n";
        int loop;
        cin>>loop;
        for(int x=0;x<loop;x++)
        {
            if(x%2)
            {
                selectionSort(word,i,ptr1);
                ptr1++;
            }
            else
            {
                selectionSort1(num,j,ptr2);
                ptr2++;
            }
        }
        for(int x=0;x<j;x++)
        {
            cout<<word[x]<<" "<<num[x]<<" ";
        }
        if(i>j)
        {
            cout<<word[i-1];
        }
        cout<<endl;
    }

    return 0;
}
