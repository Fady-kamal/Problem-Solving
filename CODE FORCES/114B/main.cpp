

#include<bits/stdc++.h>
#define ll long long
#define Pair pair<ll,ll>


using namespace std;
#define fr(n) for(int i=0;i<n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frk(n) for(int k=0;k<n;k++)
#define fr1(n) for(int i=1;i<=n;i++)
#define el '\n'
#define f first 
#define s second
#define all(x) (x).begin(), (x).end()
#define allrev(x) (x).rbegin(), (x).rend()
#define fast  ios::sync_with_stdio(0), cin.tie(0) , cout.tie(0);



bool valid_team(vector<string> &team, map<int, set<int>> &mp, map<string, int> &ids) {

		
	//Loop on all the pairs in the team to check if there is someone hate 
	//someone else or not 


	fr(team.size()) {
		string person1 = team[i];
		int id1 = ids[person1];
		frj(team.size()) {
			string person2 = team[j];
			int id2 = ids[person2];
			//chek if person one problems with person two or not
			if (mp[id1].find(id2) != mp[id1].end())
				return false;

		}
	}

	return true;

}


int main()
{

	fast;
	int n;
	int m;
	cin >> n >> m;
	map<string, int> mp;

	//populate the vector 
	vector<string> v(n);
	fr(n) {
		cin >> v[i];
		mp[v[i]] = i;
	}


	//populate the pair of persons that hate to work together
	string name_one, name_two;
	map<int, set<int>> problemsWith;
	fr(m) {
		cin >> name_one >> name_two;
		int id1 = mp[name_one];
		int id2 = mp[name_two];
		problemsWith[id1].insert(id2);
		problemsWith[id2].insert(id1); 
	}


	//construct the possible subsets from vector of length n

	//Loop on every mask 

	vector<string> best_team;
	
 	for(int mask = 0; mask < (1 << n); mask++) {
		vector<string> team;
		//Loop on every bit in the mask 
		//check if the bit is set or not 
		for (int i = 0; i < n; i++) {
			if ((mask >> i) & 1)
				team.push_back(v[i]);
		}


		//check if the team is valid or not 
		if (valid_team(team, problemsWith, mp) && team.size() > best_team.size())
			best_team = team;
	}



	sort(all(best_team));

	cout << best_team.size() << el;
	for (string it : best_team) {
		cout << it << el;
	}


}




