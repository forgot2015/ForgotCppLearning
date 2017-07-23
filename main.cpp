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


#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    int c;
    while ((c = cin.get()) != EOF) {
        cout << (char) c;
    }
    return 0;
}