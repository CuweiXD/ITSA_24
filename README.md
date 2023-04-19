# 題目24. 計算複利
### 問題描述：
你每個月存 10000 元到銀行中，銀行的每月利率為 0.1% ，以複利計算，請問 3 個月後，你的帳戶為多少錢？
<table>
<tr>
<td>月份</td>
<td>月初金額</td>
<td>月底本利和</td>
<td>備註</td>
</table>
底下的表格示範了如何得到第 3 個月時，帳戶中的本利和（本金 + 利率總合）。

### 輸入說明：
題目24. 計算複利
### 輸出說明：
列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。

### 範例：
#### 輸入範例:
500,1,2,3

#### 輸出範例:
0,1,7

### 解答
```
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
using namespace std;

int main() {

    int N, a1, a2, a3, total = 0, ans1 = 0, ans2 = 0, ans3 = 0;
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);

    if (a1 * 15 + a2 * 20 + a3 * 30 <= N) {

        total = a1 * 15 + a2 * 20 + a3 * 30;

        ans3 = (N - total) / 50;
        ans2 = ((N - total) - (ans3 * 50)) / 5;
        ans1 = ((N - total) - (ans3 * 50) - (ans2 * 5)) / 1;

        cout << ans1 << "," << ans2 << "," << ans3 << endl;
    }
    else if (a1 * 15 + a2 * 20 + a3 * 30 > N) {

        cout << 0 << endl;
    }

    return 0;
}
```
