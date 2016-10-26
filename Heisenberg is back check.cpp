#include <iostream>
#include<fstream>
using namespace std;

int m,arr[1001];

class Trie {
	public:
		int count;
		Trie *next[2];

		Trie()
		{
			count = 0;
			next[0] = next[1] = NULL;
		}

		void insert(int num, int bit)
		{
			count++;
			if(bit<0)
				return;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			if(next[check]==NULL)
				next[check] = new Trie();
			next[check]->insert(num,bit-1);
		}

		void remove(int num, int bit)
		{
			count--;
			if(bit<0)
				return;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			next[check]->remove(num, bit-1);
		}

		int search(int num, int bit)
		{
			if(bit<0)
				return 0;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			if(next[1-check]!=NULL && next[1-check]->count >0)
				return (1<<bit | next[1-check]->search(num, bit-1));
			else
				return next[check]->search(num, bit-1);
		}

		~Trie()
		{
			if(next[0]!=NULL)
				delete next[0];
			if(next[1]!=NULL)
				delete next[1];
		}
} *root;

int main()
{
	ofstream f1;
	ifstream f2;
	f1.open("output.txt");
	f2.open("input.in");
	int t;
	//cin >> t;
	f2 >> t;
	while(t--)
	{
		int ans=0;
		root = new Trie();
	//	cin >> m;
		f2 >> m;
		
		for(int i=0;i<m;i++)
		{
		//	cin >> arr[i];
			f2 >> arr[i];
			root->insert(arr[i],32);
		}	

		for(int i=0;i<m;i++)
		{
			root->remove(arr[i],32);
			for(int j=i+1;j<m-1;j++)
			{
				root->remove(arr[j],32);
				int temp = arr[i]^arr[j];
				ans = max(ans,root->search(temp,32));
				root->insert(arr[j],32);
			}
		}

//		cout << ans << endl;
		f1 << ans << endl;

		delete root;
	}
		f1.close();
	f2.close();
	return 0;
}


/*
#include <iostream>

using namespace std;

int m,arr[1001];

class Trie {
	public:
		int count;
		Trie *next[2];

		Trie()
		{
			count = 0;
			next[0] = next[1] = NULL;
		}

		void insert(int num, int bit)
		{
			count++;
			if(bit<0)
				return;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			if(next[check]==NULL)
				next[check] = new Trie();
			next[check]->insert(num,bit-1);
		}

		void remove(int num, int bit)
		{
			count--;
			if(bit<0)
				return;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			next[check]->remove(num, bit-1);
		}

		int search(int num, int bit)
		{
			if(bit<0)
				return 0;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			if(next[1-check]!=NULL && next[1-check]->count >0)
				return (1<<bit | next[1-check]->search(num, bit-1));
			else
				return next[check]->search(num, bit-1);
		}

		~Trie()
		{
			if(next[0]!=NULL)
				delete next[0];
			if(next[1]!=NULL)
				delete next[1];
		}
} *root;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int ans=0;
		root = new Trie();
		cin >> m;
		
		for(int i=0;i<m;i++)
		{
			cin >> arr[i];
			root->insert(arr[i],32);
		}	

		for(int i=0;i<m;i++)
		{
			root->remove(arr[i],32);
			for(int j=i+1;j<m-1;j++)
			{
				root->remove(arr[j],32);
				int temp = arr[i]^arr[j];
				ans = max(ans,root->search(temp,32));
				root->insert(arr[j],32);
			}
		}

		cout << ans << endl;

		delete root;
	}
	return 0;
}

*/
/*

#include <iostream>

using namespace std;

int m,arr[1001];

class Trie {
	public:
		int count;
		Trie *next[2];

		Trie()
		{
			count = 0;
			next[0] = next[1] = NULL;
		}

		void insert(int num, int bit)
		{
			count++;
			if(bit<0)
				return;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			if(next[check]==NULL)
				next[check] = new Trie();
			next[check]->insert(num,bit-1);
		}

		void remove(int num, int bit)
		{
			count--;
			if(bit<0)
				return;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			next[check]->remove(num, bit-1);
		}

		int search(int num, int bit)
		{
			if(bit<0)
				return 0;
			int check;
			if(num & (1<<bit))
				check = 1;
			else
				check = 0;
			if(next[1-check]!=NULL && next[1-check]->count >0)
				return (1<<bit | next[1-check]->search(num, bit-1));
			else
				return next[check]->search(num, bit-1);
		}

		~Trie()
		{
			if(next[0]!=NULL)
				delete next[0];
			if(next[1]!=NULL)
				delete next[1];
		}
} *root;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int ans=0;
		root = new Trie();
		cin >> m;
		
		for(int i=0;i<m;i++)
		{
			cin >> arr[i];
			root->insert(arr[i],32);
		}	

		for(int i=0;i<m;i++)
		{
			root->remove(arr[i],32);
			for(int j=i+1;j<m-1;j++)
			{
				root->remove(arr[j],32);
				int temp = arr[i]^arr[j];
				ans = max(ans,root->search(temp,32));
				root->insert(arr[j],32);
			}
		}

		cout << ans << endl;

		delete root;
	}
	return 0;
}

*/
