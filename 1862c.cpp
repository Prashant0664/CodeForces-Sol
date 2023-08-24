#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define fo(ik, n) for (int i = ik; i < n; i++)
typedef long long int ll;
void merge(int array[], int const left, int const mid,
		int const right)
{
	int const subArrayOne = mid - left + 1;
	int const subArrayTwo = right - mid;

	// Create temp arrays
	auto *leftArray = new int[subArrayOne],
		*rightArray = new int[subArrayTwo];

	// Copy data to temp arrays leftArray[] and rightArray[]
	for (auto i = 0; i < subArrayOne; i++)
		leftArray[i] = array[left + i];
	for (auto j = 0; j < subArrayTwo; j++)
		rightArray[j] = array[mid + 1 + j];

	auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
	int indexOfMergedArray = left;

	// Merge the temp arrays back into array[left..right]
	while (indexOfSubArrayOne < subArrayOne
		&& indexOfSubArrayTwo < subArrayTwo) {
		if (leftArray[indexOfSubArrayOne]
			<= rightArray[indexOfSubArrayTwo]) {
			array[indexOfMergedArray]
				= leftArray[indexOfSubArrayOne];
			indexOfSubArrayOne++;
		}
		else {
			array[indexOfMergedArray]
				= rightArray[indexOfSubArrayTwo];
			indexOfSubArrayTwo++;
		}
		indexOfMergedArray++;
	}

	// Copy the remaining elements of
	// left[], if there are any
	while (indexOfSubArrayOne < subArrayOne) {
		array[indexOfMergedArray]
			= leftArray[indexOfSubArrayOne];
		indexOfSubArrayOne++;
		indexOfMergedArray++;
	}

	// Copy the remaining elements of
	// right[], if there are any
	while (indexOfSubArrayTwo < subArrayTwo) {
		array[indexOfMergedArray]
			= rightArray[indexOfSubArrayTwo];
		indexOfSubArrayTwo++;
		indexOfMergedArray++;
	}
	delete[] leftArray;
	delete[] rightArray;
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
	if (begin >= end)
		return;

	int mid = begin + (end - begin) / 2;
	mergeSort(array, begin, mid);
	mergeSort(array, mid + 1, end);
	merge(array, begin, mid, end);
}




// This code is contributed by Mayank Tyagi
// This code was revised by Joshua Estes

vector<ll> constructLowerArray(vector<ll> &arr)
{
    vector<ll> ans, temp;
    ll n = arr.size();
    for (ll i = n - 1; i >= 0; i--)
    {
        ll c = lower_bound(temp.begin(), temp.end(), arr[i]) - temp.begin();
        ans.push_back(c);
        temp.insert(temp.begin() + c, arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
ll get(ll jk){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	// cout << "Given array is \n";
	// printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

    return sqrt(jk)-3;
}
ll whil(ll &jk,ll n){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	// cout << "Given array is \n";
	// printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

    while(jk*(jk+1)/2<=n) jk++;
    return jk;
}
ll print(ll jk, ll n){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	// cout << "Given array is \n";
	// printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

       return jk*(3-jk)/2+n;
}
ll ans1(ll ans,ll s,ll i,ll d){
    return max(s-(i+1)*d,ans);
}
void see(multiset<ll>&st,ll &m,ll &s){
if((ll)st.size()>(ll)m){
            ll jkk=*st.begin();
            s-=jkk;
            st.erase(st.begin());
        }
}
ll ansss(ll n, ll m, ll d, vector<ll>&v2,multiset<ll>st,ll ans,ll s){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	mergeSort(arr, 0, arr_size - 1);
fo(0,n){
        if(v2[i]<=0){
            continue;
        }
        st.insert(v2[i]);
        s+=v2[i];
        see(st,m,s);
        ans=ans1(ans,s,i,d);
    }
    return ans;
}
ll conv(ll jk){
    int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	// cout << "Given array is \n";
	// printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

    return jk*2;
}
void tak(ll n,vector<ll>&v2){
        fo(0,n){
        cin>>v2[i];
    }
    return;
}
int main()
{
    ll t;
    cin >> t;
    // t=1;
    while (t--)
    {
        int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	// cout << "Given array is \n";
	// printArray(arr, arr_size);

	mergeSort(arr, 0, arr_size - 1);

	ll n,m,d;
    cin>>n>>m>>d;
    vector<ll>v,v2(n+1);
    multiset<ll>st;
    ll s=0;
    fo(0,n){
    }
    ll ans=INT_MIN;
    tak(n,v2);
ll anss=ansss(n, m, d, v2,st,ans,s);
    // cout<<maanss;
    cout<<max((ll)0,anss);
    cout<<endl;
        


        /*
        -
        -
        ---

        -
        -
        ---

        -
        -
        --
        ---

        -
        --
        ----

        -
        -

        --

        -
        -
        ---
        ---
        -----

        -
        -
        ---
        ---
        -----

        ---
        ---
        -----
        -----
        -----

        ---
        ---
        -----
        -----
        -----

        */


    }
}