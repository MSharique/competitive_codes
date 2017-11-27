#include<bits/stdc++.h>
using namespace std;

string tournament;
map<string,int> team;
map<string,int>:: iterator it,it1;
struct game
{
	string team_name;
	int win;
	int lose;
	int tie;
	int goal;
	int agoal;
	int point;
	int num_game;
}gm[34];

bool rule(game A,game B)
{
	if(A.point > B.point)return true;
	else if(A.point == B.point)
	{
		if(A.win > B.win)return true;
		else if(A.win == B.win)
		{
			int ta = A.goal - A.agoal;
			int tb = B.goal - B.agoal;
			if(ta > tb)return true;
			else if(ta == tb)
			{
				if(A.goal > B.goal)return true;
				else if(A.goal == B.goal)
				{
					if(A.num_game < B.num_game)return true;
					else if(A.num_game == B.num_game)
					{
						int alen = A.team_name.length();
						int blen = B.team_name.length();
						string teamA="",teamB="";
						for(int i=0;i<alen;i++)teamA += (char)tolower(A.team_name[i]);
						for(int i=0;i<blen;i++)teamB += (char)tolower(B.team_name[i]);
					//	cout<<"A.team_name :"<<A.team_name<<" , teamA : "<<teamA<<endl;
					//	cout<<"B.team_name :"<<B.team_name<<" , teamB : "<<teamB<<endl;
						if(teamA < teamB) return true;
						else return false;		
					}
				}
			}
		}
	}
	return false;
}

void update_result(int teamA,int scA,int teamB,int scB)
{
	gm[teamA].goal += scA;
	gm[teamA].agoal += scB;
	gm[teamB].goal += scB;
	gm[teamB].agoal += scA;
	gm[teamA].num_game++;
	gm[teamB].num_game++;
	
	if(scA > scB)	//teamA wins
	{
		gm[teamA].win++;
		gm[teamB].lose++;
		gm[teamA].point += 3;
	}
	else if(scB > scA)		//teamB wins
	{
		gm[teamB].win++;
		gm[teamA].lose++;
		gm[teamB].point += 3;	
	}
	else		//tie
	{
		gm[teamA].tie++;
		gm[teamB].tie++;
		gm[teamA].point++;
		gm[teamB].point++;
	}
}

void get_result(string str)
{
	string temp="",teamA="",teamB="";
	int i=0;
	while(str[i]!='#')
	{
	//	cout<<"for teamA, "<<str[i]<<endl;
		teamA += str[i++];
	}
	//teamA += '\0';
	//cout<<"first team is : "<<teamA<<" with length "<<teamA.length()<<" and i = "<<i<<endl;
	
	i++;
	temp = "";
	int sc1 = 0;
	while(str[i]!='@')
	{
		sc1 = (sc1*10) + str[i++]-'0';
	}
	//cout<<"score 1 : "<<sc1<<" with  i = "<<i<<endl;
	i++;
	int sc2 = 0;
	while(str[i]!='#')
	{
		sc2 = (sc2*10) + str[i++]-'0';
	}
	//cout<<"score 1 : "<<sc1<<" with  i = "<<i<<endl;
	i++;
	while(i<str.length())
	{
		teamB += str[i++];
	}
	int id1=-1,id2=-1;
	/*for(it=team.begin();it!=team.end();it++)
	{
		int k = 0;
		string txt = it->first;
		for(int k=0;k<txt.length();k++)cout<<(int)txt[k]<<" --- "<<(int)teamA[k]<<endl;
		if(it->first == teamA)id1 = it->second;
		if(it->first == teamB)id2 = it->second;
	}
	*/
	it = team.find(teamA);
	id1 = it->second;
	it = team.find(teamB);
	id2 = it->second;
	//cout<<"teamA details : "<<teamA<<" "<<id1<<" "<<sc1<<endl;
	//cout<<"teamB details : "<<teamB<<" "<<id2<<" "<<sc2<<endl;
	update_result(id1,sc1,id2,sc2);
}

int parseInt(string temp)
{
	//cout<<"\n temp - "<<temp<<" , &&&& length = "<<temp.length()<<endl;
	int num = 0;
	for(int i=0;isdigit(temp[i]);i++)
		num = (num*10) + (temp[i]-'0');
	//cout<<"\n retuen num : "<<num<<" , check : "<<temp[0]-'0'<<endl;
	return num;
}

int main()
{
	int t,n,g;
	string testcase;
	getline(cin,testcase);
	t = parseInt(testcase);
	testcase = "";
	//cout<<"num of tesstcases : "<<t<<endl;
	while(t--)
	{
		string str;
		getline(cin,tournament);
	//	cout<<"tournament name : "<<tournament<<endl;
		getline(cin,testcase);
		n = parseInt(testcase);
	//	cout<<"num of teams = "<<n<<endl;
		for(int i=0;i<n;i++)
		{
			getline(cin,str);
	//		cout<<"team num "<<i+1<<" : "<<str<<endl;
			team.insert(make_pair(str,i));
			gm[i].team_name = str;
			gm[i].win = gm[i].lose = gm[i].tie = gm[i].point = 0;
			gm[i].goal = gm[i].agoal = gm[i].num_game =0;
		}
		/*
		it = team.find("Brazil");
		cout<<"Brazil @ "<<it->second<<endl;
		it = team.find("Norway");
		cout<<"Norway @ "<<it->second<<endl;
		it = team.find("Morocco");
		cout<<"Morocco @ "<<it->second<<endl;
		it = team.find("Scotland");
		cout<<"Scotland @ "<<it->second<<endl;
		
		for(it = team.begin();it!=team.end();it++)
		{
			cout<<it->first<<" , "<<it->second<<" ";
			it1 = team.find(it->first);
			cout<<"checking.... "<<it1->second<<endl;
		}*/
		
		getline(cin,testcase);
		g = parseInt(testcase);
	//	cout<<"Num of games = "<<g<<endl;
		while(g--)
		{
			getline(cin,str);
	//		cout<<"Game stats : "<<str<<endl;
			get_result(str);
		}
		
		sort(gm,gm+n,rule);
		//print result
		cout<<tournament<<endl;
		for(int i=0;i<n;i++)
		{
			int diff = gm[i].goal - gm[i].agoal;
			cout<<i+1<<") "<<gm[i].team_name<<" "<<gm[i].point<<"p, "<<gm[i].num_game<<"g ("
			    <<gm[i].win<<"-"<<gm[i].tie<<"-"<<gm[i].lose<<"), "<<diff<<"gd ("<<gm[i].goal<<"-"<<gm[i].agoal<<")\n";
		}
	
		if(t!=0)cout<<endl;
		team.clear();
	}
	return 0;
}
