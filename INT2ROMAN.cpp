#include<bits/stdc++.h>
using namespace std;
/*
void predigit(char num1, char num2)
{
    romanval[i++] = num1;
    romanval[i++] = num2;
}
 
void postdigit(char c, int n)
{
    int j;
    for (j = 0; j < n; j++)
        romanval[i++] = c;
}
*/
string roman(int A)
{
	char romanval[1003];
	int it=0;
	while (A != 0)
    {
        if (A >= 1000)
        {
            //postdigit('M', number / 1000);
            for(int i=0;i<A/1000;i++)romanval[i] = 'M';
            A = A - (A / 1000) * 1000;
        }
        else if (A >= 500)
        {
            if (A < (500 + 4 * 100))
            {
              //  postdigit('D', A / 500);
        	    for(int i=0;i<A/500;i++)romanval[i] = 'D';
                A = A - (A / 500) * 500;
            }
            else
            {
           //     predigit('C','M');
           		romanval[it++] = 'C';
           		romanval[it++] = 'M';
                A = A - (1000-100);
            }
        }
        else if (A >= 100)
        {
            if (A < (100 + 3 * 100)) 
            {
            //    postdigit('C', A / 100);
                for(int i=0;i<A/100;i++)romanval[i] = 'C';
            A = A - (A / 100) * 100;
            }
            else
            {
                //predigit('L', 'D');
                romanval[it++] = 'L';
                romanval[it++] = 'D';
                A = A - (500 - 100);
            }
        }
        else if (A >= 50 )
        {
            if (A < (50 + 4 * 10))
            {
              //  postdigit('L', A / 50);
                for(int i=0;i<A/50;i++)romanval[i] = 'L';
            A = A - (A / 50) * 50;
            }
            else
            {
                //predigit('X','C');
                romanval[it++] = 'X';
                romanval[it++] = 'C';
                A = A - (100-10);
            }
        }
        else if (A >= 10)
        {
            if (A < (10 + 3 * 10))
            {
            //    postdigit('X', A / 10);
                for(int i=0;i<A/10;i++)romanval[i] = 'X';
        
                A = A - (A / 10) * 10;
            }
            else
            {
                //predigit('X','L');
                romanval[it++] = 'X';
                romanval[0] = 'L';
                A = A - (50 - 10);
            }
        }
        else if (A >= 5)
        {
            if (A < (5 + 4 * 1))
            {
             //   postdigit('V', A / 5);
                 for(int i=0;i<A/5;i++)romanval[i] = 'V';
        
                A = A - (A / 5) * 5;
            }
            else
            {
                //predigit('I', 'X');
                romanval[it++] = 'I';
                romanval[it++] = 'X';
                A = A - (10 - 1);
            }
        }
        else if (A >= 1)
        {
            if (A < 4)
            {
                //postdigit('I', A / 1);
                for(int i=0;i<A/1;i++)romanval[i] = 'I';
        
                A = A - (A / 1) * 1;
            }
            else
            {
//                predigit('I', 'V');
				romanval[it++] = 'I';
				romanval[it++] = 'V';
                A = A - (5 - 1);
            }
        }
    }
    printf("Roman A is: ");
    string str = "";
    for(int j = 0; j < it; j++)str += romanval[j];
        //printf("%c", romanval[j]);
    return 0;
}

int main()
{
	int num;
	cin>>num;
	cout<<roman(num);
	return 0;
}
