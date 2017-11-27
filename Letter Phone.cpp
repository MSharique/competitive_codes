#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> vec;
vector<string> ans;
string input;
 
void  printWordsUtil(int curr_digit,char output[],int n)
{
//	cout<<"\n curr_digit : "<<curr_digit<<" , n : "<<n<<endl;
    // Base case, if current output word is prepared
    int i;
    if (curr_digit == n)
    {
        cout<<output<<" ";
        ans.push_back(output);
        return ;
    }
 	//cout<<"\n digit : "<<input[curr_digit]-'0'<<" , vec of this = "<<vec[input[curr_digit]-'0'].length()<<endl;
    for (i=0; i<vec[input[curr_digit]-'0'].length(); i++)
    {
        output[curr_digit] = vec[input[curr_digit]-'0'][i];
        //cout<<"\n ans : "<<ans[curr_digit]<<" , va;ue = " <<vec[input[curr_digit]-'0'][i]<<endl;
        printWordsUtil(curr_digit+1,output,n);
        //if (number[curr_digit] == 0 || number[curr_digit] == 1)
          //  return;
    }
}

 
//Driver program
int main()
{
	vec.push_back("0");
    vec.push_back("1");
    vec.push_back("abc");
    vec.push_back("def");
    vec.push_back("ghi");
    vec.push_back("jkl");
    vec.push_back("mno");
    vec.push_back("pqrs");
    vec.push_back("tuv");
    vec.push_back("wxyz");
    cin>>input;
    //cout<<"\n input num "<<input<<endl;
    
    //cout<<"\n vec  contains \n";
    //for(int i=0;i<10;i++)cout<<vec[i]<<" ";cout<<endl;
 	//cout<<"\n vec len = "<<vec[2].length();
    char output[input.length()+1];
	printWordsUtil(0,output,input.length());
    
	//cout<<"\n final ans :\n";
   // for(int i=1;i<100;i++)
    //{
   // 	cout<<ans[i]<<" ";
    //}
    //cout<<endl;
    vec.clear();
    cout<<"\n\n final ans : \n";
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";cout<<endl;
    ans.clear();
	return 0;	
}
