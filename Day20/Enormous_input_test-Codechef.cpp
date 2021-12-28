#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;

        if (a % k == 0) {
            ans++;
        }
    }
    cout << ans << endl;;

    return 0;

}
