#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int getTwo();

void print(char c);

void printTest(char c);


//int main() {
//    std::cout << "Hello, World!" << std::endl;
//    int a=7;
//    printf("I have %d yuan. \n",a);
//    printf("I want to buy:\na book.");
//    return 0;
//}
//int main() {
////    printf(getTwo()+"");
////    getTwo();
//    string string1;
////    cout<<"please input three number ";
////    cin>>string1;
////    cout<<string1;
//    string sentence = "And I feel fine...";
//    istringstream iss(sentence);
//    copy(istream_iterator<string>(iss),
//         istream_iterator<string>(),
//         ostream_iterator<string>(cout, "\n"));
////    cout<<getTwo();
////    cout<<max(1,3);
////    max(1,2);
//}
//int getTwo(){
//
//    return 1;
//}

//void myPrint(string s1) {
//    cout << "  " + s1 << endl;
//    cout << " " + s1 + s1 + s1 << endl;
//    cout << s1 + s1 + s1 + s1 + s1 << endl;
//    cout << " " + s1 + s1 + s1 << endl;
//    cout << "  " + s1 << endl;
//}

int main() {
//    cout << "Hello World";
//    cout << "Size of char : " << sizeof(char) << endl;
//    cout << "Size of int : " << sizeof(int) << endl;
//    cout << "Size of short int : " << sizeof(short int) << endl;
//    cout << "Size of long int : " << sizeof(long int) << endl;
//    cout << "Size of float : " << sizeof(float) << endl;
//    cout << "Size of double : " << sizeof(double) << endl;
//    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;
//    //return之后的不会再执行
////    return 0;
//    // 局部变量声明
//    int a, b;
//    int c;
//
//    // 实际初始化
//    a = 10;
//    b = 20;
//    c = a + b;
//
//    cout << c;

//    char ch = 'c';
////    cout<<ch;
//    printf("  %s",ch);

    //题目1
//    string string1;
//    getline(cin,string1);
//cout<<string1<<endl;

//    int a, b, c;
//    cin >> a >> b >> c;
//    cout << b << endl;


//    int a, b, c;//定义三个变量
//    scanf ("%d %d %d", &a, &b, &c);//输入三个整数
//    printf ("%d\n", b);//输出中间一个

    //题目2
//    string s1;
//    getline(cin, s1);
//    myPrint(s1);

    //题目3
//    char ch;
//    int i;
//    cin >> ch;
//    i = ch;
//    cout << i;

    //题目4
//    int i;
//    char ch;
//    cin>>i;
//    ch=(char)i;
//    cout<<ch;

    //题目5
//    int i;
//    short sh;
//    cout << sizeof(i) <<" "<<sizeof(sh)<< endl;

    //题目6
//    float f;
//    double d;
//    cout << sizeof(f) <<" "<<sizeof(d)<< endl;
//   int a;
    unsigned short a;
    short b;
    a = 32768; b = a; printf("%d %d\n", a, b);
    chapter1.sample1();
    return 0;
}


/* 函数返回两个数中较大的那个数 */
//int max(int num1, int num2) {
//    /* 局部变量声明 */
//    int result;
//
//    if (num1 > num2)
//        result = num1;
//    else
//        result = num2;
//
//    return result;
//}