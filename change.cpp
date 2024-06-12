#include <iostream>
using namespace std;

// تعریف تابع بازگشتی برای چاپ عدد برعکس
void reverseNumber(int n) {
    // اگر عدد منفی بود، تبدیل به مثبت شود و "-" چاپ شود
    if (n < 0) {
        cout << "-";
        n = -n;
    }
    // پایه بازگشتی: اگر عدد یک رقمی بود، چاپ شود
    if (n < 10) {
        cout << n;
        return;
    }
    // مرحله بازگشتی: رقم یکان عدد چاپ شده و تابع به صورت بازگشتی روی بقیه ارقام فراخوانی می‌شود
    cout << n % 10;
    reverseNumber(n / 10);
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Reversed number: ";
    reverseNumber(number);
    return 0;
}
