#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long ul;
typedef unsigned int ui;

#define ar array
#define sza(x) ((int) x.size())
#define all(a) (a).begin(), (a).end()

#define READ(d) cin >> d;
#define FOR(I) for(int i = 0; i < I; i++)
#define LASTDIG(d) d % 10
#define REMLASTDIG(d) d / 10
#define ODD(d) if(d & 1) { return true; } else { return false; }
#define EVEN(d) if(d & 0) { return true; } else { return false; }
#define MUL(d) d << 1
#define DIV2(d) d >> 1
#define SWAP(a, b) { a ^= b; b ^= a; a ^= b; }

template <typename T>
T min(T a, T b) {
	return ((a < b) ? a : b);
}

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;

// RNG
mt19937 RNG(chrono::steady_clock::now().time_since_epoch().count());
#define SHUF(v) shuffle(all(v), RNG);

int noOfDig(int x) {
	int counts = 0;
	while(x) {
		x /= 10;
		counts++;
	}
	return counts;
}

int main(int argc, char *argv[]) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n = 0, q = 0;
	cin >> n >> q;
	vector<ul> arr[n];
	FOR(n) {
		ul k, element;
		cin >> k;
		for(ul j = 0; j < k; j++) {
			cin >> element;
			try {
				arr[i].push_back(element);
			}
			catch(bad_alloc &e) {
				cout << "Bad allocation at index [" << i << "][" << j << "]" << endl;
			}
		}
	}
	FOR(q) {
		ul arr_no, index = 0;
		cin >> arr_no >> index;
		cout << arr[arr_no].at(index) << endl;
	}
	return 0;
}

