//1.1
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int a, b, c;
//    scanf ("%d %d %d", &a, &b, &c);
//    printf ("%d\n", b);
//    return 0;
//}
//1.2
//#include <iostream>
//#include <cstdio>
//using namespace std;
//void myPrint(string s1) {
//    cout << "  " + s1 << endl;
//    cout << " " + s1 + s1 + s1 << endl;
//    cout << s1 + s1 + s1 + s1 + s1 << endl;
//    cout << " " + s1 + s1 + s1 << endl;
//    cout << "  " + s1 << endl;
//}
//int main() {string s1;
//    getline(cin, s1);
//    myPrint(s1);
//    return 0;
//}

//1.3
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {    char ch;
//    int i;
//    cin >> ch;
//    i = ch;
//    cout << i;
//    return 0;
//}
//1.4
//#include <iostream>
//using namespace std;
//int main() {
//    int i;
//    char ch;
//    cin>>i;
//    ch=(char)i;
//    cout<<ch;
//    return 0;
//}

//1.5
//#include <iostream>
//using namespace std;
//int main() {
//    int i;
//    short sh;
//    cout << sizeof(i) <<" "<<sizeof(sh)<< endl;
//    return 0;
//}

//1.6
//#include <iostream>
//using namespace std;
//int main() {
//    float f;
//    double d;
//    cout << sizeof(f) <<" "<<sizeof(d)<< endl;
//    return 0;
//}


//2.1
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int a, b, c;
//    scanf ("%d %d %d", &a, &b, &c);
//    printf ("%8d %8d %8d",a,b,c);
//    return 0;
//}

//2.2
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    double f;
//    scanf ("%lf", &f);
//    printf ("%.12lf",f);
//    return 0;
//}

//2.3
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main(){
//    char c;
//    int i;
//    float f;
//    double lf;
//    scanf("%c\n%d\n%f\n%lf",&c,&i,&f,&lf);
//    printf("%c %i %.6f %.6lf",c,i,f,lf);
//    return 0;
//}


//2.4
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main(){
//    double lf;
//    scanf("%lf",&lf);
//    double v = (double)4/3*3.14*lf*lf*lf;
//    printf("%.2lf",v);
//    return 0;
//}


//2.5
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int h, r;
//    double Pi = 3.14159;
//    scanf("%d %d", &h, &r);
//    double v = Pi * r * r * h;
//    int i =(int)(20*1000/v)+1;
//    printf("%d",i);
//    return 0;
//}

//exam
//#include <iostream>
//#include <cstdio>
//
//using namespace std;
//int main(){
////    cout<<6 * 4 / 5 + (7 % 2)<<endl;
////    int a = 0,b = 10, c;
////    c = a++;
////    c = ++b;
////    cout << a << "," << b << "," << c << endl;
////    char d = 'a' + 4;
////    cout << d << "," << (int) d + 3 << endl;
//    unsigned int x = 0xffffffff;
//
//    unsigned int b = x + 2;
//
//    int y = x;
//
//    printf("%x,%d,%x,%d",y,y,b,b);
//    return 0;
//}


//输出所有输入的字符
//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int c;
//    while ((c = cin.get()) != EOF) {
//        cout << (char) c;
//    }
//    return 0;
//}

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main() {
//    int i =20/-3;
//   cout<<i<<endl;
//    return 0;
//}
//3.1
//#include <iostream>
//using namespace std;
//int main() {
//    int i;
//    cin >> i;
//    if (i % 2 == 0) {
//        cout << "even";
//    } else {
//        cout << "odd";
//    }
//    return 0;
//}
//3.2
//#include <iostream>
//#include <cstdio>
//#include <cmath>
//
//using namespace std;
//
//int main() {
//    double a, b, c, x1, x2;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    if (a == 0) {
//        return 0;
//    }
//    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
//    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
//    double d = b * b - 4 * a * c;
//    if (d == 0) {
//        printf("x1=x2=%.5lf", x1);
//    } else if (d > 0) {
//        printf("x1=%.5lf;x2=%.5lf", x1, x2);
//    } else {
//        double aa = -b / (2 * a);
//        if (aa == 0) { aa = 0.0; }
//        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", aa, sqrt(4 * a * c - b * b) / (2 * a), aa,
//               sqrt(4 * a * c - b * b) / (2 * a));
//    }
//    return 0;
//}

//3.3
//#include <iostream>
//using namespace std;
//int main() {
//    int x,y;
//    cin >> x>>y;
//    if(x>=-1&&x<=1&&y>=-1&&y<=1){
//        cout<<"yes";
//    }else{
//        cout<<"no";
//    }
//    return 0;
//}

//3.4
/*
 * 你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？*/
//#include <iostream>
//using namespace std;
//int main() {
//    int n,x,y;
//    int l;
//    cin >>n>> x>>y;
//    l= (int) (n - (double)y / x);
//    if(l<=0){ //要考虑吃完为0的情况
//        l=0;
//    }
//    cout<<l;
//    return 0;
//}

//3.5
/*一个最简单的计算器，支持+, -, *, / 四种运算。仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。*/
//#include <iostream>
//using namespace std;
//int main() {
//    int x,y;
//    char c;
//    cin >>x>> y>>c;
//    if(c=='+'){
//        cout<<x+y;
//    }
//    else if(c=='-'){
//        cout<<x-y;
//    }
//    else if(c=='*'){
//        cout<<x*y;
//    }
//    else if(c=='/'){
//        if(y==0){
//            cout<<"Divided by zero!";
//        }else{
//            cout<<x/y;
//        }
//    } else{
//        cout<<"Invalid operator!";
//    }
//    return 0;
//}

//3.6
/*描述
读入n（1 <= n <= 10000）个整数，求它们的和与均值。
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int n;
    int in;
    int max = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &in);
        max += in;
    }
    printf("%d %.5lf", max, (double) max / n);
    return 0;
}