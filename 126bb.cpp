#include<stdio.h>
#include<string.h>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<set>
#include<map>
#include<deque>
#include<queue>
#include<vector>
#include<list>
#include<functional>
using namespace std;

inline void print(char pt) {
	printf("%c\n", pt);
}
inline void print(int pt) {
	printf("%d\n", pt);
}
inline void print(long long pt) {
	printf("%I64d\n", pt);
}
inline void print(double pt) {
	printf("%.20f\n", pt);
}
inline void print(char pt[]) {
	printf("%s\n", pt);
}
inline void print() {
	printf("\n");
}

inline int scan(int &pt) {
	return scanf("%d", &pt);
}
inline int scan(char &pt) {
	return scanf("%c", &pt);
}
inline int scan(long long &pt) {
	return scanf("%I64d", &pt);
}
inline int scan(double &pt) {
	return scanf("%lf", &pt);
}
inline int scan(char pt[]) {
	return scanf("%s", pt);
}

const long long moda = 421412341324321ll;
using namespace std;

int n, m;
int lena;
char stra[2000000];
map<int, long long> mapa;

inline void fail() {
	print("Just a legend");
	exit(0);
}
inline void success(int len) {
	for (int i = 0; i < len; i++) {
		putchar(stra[i]);
	}
	putchar('\n');
	exit(0);
}

int canit(int nowlen) {
	if (nowlen == 0)
		return 1;
	long long hasha = 0;
	long long ti = 1;

	for (int i = 0; i < nowlen; i++) {
		hasha *= 257;
		hasha += stra[i];
		hasha %= moda;
		ti *= 257;
		ti %= moda;
	}

	for (int i = nowlen; i < lena - 1; i++) {
		hasha *= 257;
		hasha += stra[i];
		hasha %= moda;
		hasha -= ti * stra[i - nowlen];
		while (hasha < 0) {
			hasha += moda;
		}
		//cout << "hasha" << hasha << endl;
		if (hasha == mapa[nowlen]) {
			return 1;
		}
		//ti *= 257;
		//ti %= moda;
	}

	return 0;
}

int main() {
	scan(stra);
	lena = strlen(stra);
	long long hasha = 0;
	long long hashb = 0;
	long long ti = 1;
	for (int i = 0; i < lena; i++) {
		hasha *= 257;
		hasha += stra[i];
		hasha %= moda;

		hashb += ti * stra[lena - 1 - i];
		ti *= 257;
		hashb %= moda;
		ti %= moda;

		if (hasha == hashb) {
			//cout << i << ":::" << hasha << endl;
			mapa[i + 1] = hasha;
		}
	}

//	for (auto au : mapa) {
//		cout << au.first << "  " << au.second << endl;
//	}

	if (mapa.size() == 0) {
		fail();
	}
//	if (siza == 1) {
//
//	}
	vector<int> veca;
	for (auto au : mapa) {
		veca.push_back(au.first);
	}

	int li = 0;
	int ri = veca.size() - 1;
	if (canit(veca[li]) == 0) {
		fail();
	}
	if (canit(veca[ri]) == 1) {
		success(veca[ri]);
	}
    for(auto &i:veca){
        cout<<i<<" ";
    }
	//cout << li << ri << endl;
	//cout << veca[0] << veca[1] << veca[2] << endl;
	while (1) {

		int midi = (li + ri) / 2;
		if (midi == li) {
			//cout << midi << endl;
			success(veca[midi]);
		}
		if (canit(veca[midi])) {
			li = midi;
		} else {
			ri = midi;
		}
	}
	return 0;
}