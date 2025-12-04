// week13-1.cpp 聖誕倒數寫程式 Advent of Code 2025 第1天第1題
// Moodle 點擊 adventofcode.com 網址 可看到黑底、白字的題目
// 在 LeetCode 的 My Playground 我的遊戲場，可以寫程式
// LeetCode 幫你把 #include 全部都加好了你不用寫 #include
// 左下角 stdin 可貼上你的程式 Input
// 在網址登入github帳號，看到專屬謎題
// 貼到右下角 stdin 後，再執行，看答案多少(每個人不同)
int main() {
    char c; // 字母，對應方向 L左轉 R右轉
    int d; // 數字，要轉動幾格
    int now = 50; // 一開始的密碼鎖，指向50
    int ans = 0; // 轉動時，有幾次停在 0 的地方? (我們的通關密碼)
    while( cin >> c >> d){ // 一直讀資料: 讀字母、讀數字
        //if(c=='L') cout << "往左轉" << d << "格\n";
        //if(c=='R') cout << "往右轉" << d << "格\n";
        if(c=='L') now -= d; // 減掉
        if(c=='R') now += d; // 加上

        now = (now % 100 + 100) % 100; // 太大的，太小的，都限制在 0-99 間
        //cout << "現在的刻度是: " << now << "\n";
        if(now == 0) ans++; // 轉動時，停在0的地方 (我們的通關密碼)
    }
    cout << "答案是: " << ans;
}
