#include <bits/stdc++.h>
using namespace std;

int reversort(vector<int> &L){
	int cost = 0;
	for(int i = 0 ; i < L.size() - 1 ; i++){
		int min = *min_element(L.begin() + i, L.end());
		auto minIdx = find(L.begin(), L.end(), min);
		reverse(L.begin() + i, minIdx + 1);
		cost += distance(L.begin(), minIdx) - i + 1;
	}
	return cost;
}

int main(){
    // std::ios::sync_with_stdio(false);
	int testCases;
	cin >> testCases;
	for(int i = 0 ; i < testCases ; i++){
		int N;
		cin >> N;
		vector<int> L;
		for(int j = 0 ; j < N ; j++){
			int num;
			cin >> num;
			L.push_back(num);
		}
		
		cout<<"Case# "<<i + 1<<": "<<reversort(L)<<endl;
	}
}
