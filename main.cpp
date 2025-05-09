#include <iostream>
using namespace std;

// 1 start
// int main(){

//     cout << "Salom Dunyo" << endl; /* endl buyrug'i macda keraksizdir */

//     system("pause"); /* pause buyrug'i macda keraksizdir */
//     return 0;
// }
// 1 end


// 2 start
// int main(){

//     cout << "Salom Dunyo" << endl;
//     // cerr << "Error" << endl;

//     int a = 5, b = 4;

//     // cout << a + b << endl;
//     // cout << a - b << endl;
//     // cout << a * b << endl;
//     // cout << a / b << endl;

//     // cout << " a = ";
//     // cin >> a;

//     // cin >> a >> b; /*bu usul tevadagidagining qistaroq yo'li bo'lib bunda biz shunchaki probelbosib sonlarni yozib ketaveramiz*/

//     // cout << a + b << endl ;

//     // system("pause");
//     return 0;
// }
// 2 end

// 3 start 
    int main (){
        // buyerda biz PREE & INC/DEC larni ko'rib chiqamiz

        int a = 5;

        // a++; // increamen

        // cout << a++ << endl; /* ushbu xolatda bizga avval aning mavjud qiymatini keyin esa 1ga oshirilgan qiymatini ko'rsatadi*/
        // cout << a-- << endl; /* ushbu xolatda bizga avval aning mavjud qiymatini keyin esa 1ga kamaytiriladi qiymatini ko'rsatadi*/
        // cout << ++a << endl; /* ushbu xolatda avval amal bajariladi keyin natija taqdim qilinadi*/
        // cout << --a << endl; /* ushbu xolatda avval amal bajariladi keyin natija taqdim qilinadi*/

        // a--; //decreament

        cout << a << endl;

// biz xozir 4chi darsning 6:33 daqiqasigayetib keldik
        return 0;
    }
// 3 end 

// int main() {
//     double num1, num2, result;
//     char op;

//     cout << "Mini kalkulyatorga xush kelibsiz!\n";
//     cout << "Birinchi sonni kiriting: ";
//     cin >> num1;

//     cout << "Amalni tanlang (+, -, *, /): ";
//     cin >> op;

//     cout << "Ikkinchi sonni kiriting: ";
//     cin >> num2;

//     // Amalga qarab natijani hisoblash
//     switch(op) {
//         case '+':
//             result = num1 + num2;
//             cout << "Natija: " << result << endl;
//             break;
//         case '-':
//             result = num1 - num2;
//             cout << "Natija: " << result << endl;
//             break;
//         case '*':
//             result = num1 * num2;
//             cout << "Natija: " << result << endl;
//             break;
//         case '/':
//             if (num2 != 0)
//                 result = num1 / num2;
//             else {
//                 cout << "Xatolik: 0 ga bo'lish mumkin emas!\n";
//                 return 1;
//             }
//             cout << "Natija: " << result << endl;
//             break;
//         default:
//             cout << "Xatolik: noto‘g‘ri amal kiritildi.\n";
//     }

//     return 0;
// }


// 1. Loyihangiz joylashgan papkaga o'ting
// cd "cpp faylingiz turgan papka yo‘li"

// 2. Git repository yaratish
// git init

// 3. Faylni qo‘shish
// git add your_file.cpp

// 4. Commit qilish
// git commit -m "Add C++ file"

// 5. Uzoq repositoryni bog‘lash
// git remote add origin https://github.com/USERNAME/REPO-NAME.git

// 6. Branch nomini 'main' deb o‘zgartiring (yoki GitHub’da ko‘rsatilgan branch bo‘lsa)
// git branch -M main

// 7. Push qilish
// git push -u origin main
