#include<bits/stdc++.h>
using namespace std;

int circle (int k, int m)
{
    int size = 2 * k;
    int i = 0, current = (m - 1) % size;

    for (i = 0; i < 2 * k; ++i)
    {
        if (current < k) { break; }
        --size;
        current = (current + m - 1) % (size);
    }

    return i;
}

int main() {
    int input;
    int ans[15] = { 0 };

    for (int i = 1; i <= 14; i++) {
      for (int j = 1;; j++)
      {
        if (circle(i, j) == i) {
          ans[i] = j; // printf("%d %d\n", i, j);
          break;
        }
      }
    }

    while (cin >> input && input != 0) {
        cout << ans[input] << endl;
    }

    return 0;
}

