#include <iostream>
using namespace std;

char* reverseString(char* p){
    char *str = p;
    int length = 0;

    cout << "*str = " << *str << " , length = " << length << endl;

    while (*str != '\0'){
         str++;
         length++;
         cout << "*str = " << *str << " , length = " << length << endl;
    }

    char *p1 = p;
    char *p2 = p+length-1;
    cout << "char *p1 = " << *p1 << " , char *p2 = " << *p2 << endl;

    while (p1<p2){
         char temp = *p1;
         *p1 = *p2;
         *p2 = temp;

         p1++;
         p2--;
    }

    return p;
}

int main() {
    char str[100];
    cout << "Enter the string" << endl;
    cin >> str;

    char *p = str;
    cout << "char *p = " << p << endl;

    char *result = reverseString(p);
    while (*result != '\0'){
        cout << *result;
        result++;
    }

    return 0;
}
