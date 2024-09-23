#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

float pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286;
int trapez(){
    system("cls");
    setlocale(LC_ALL, "");
    float a = 0;
    float b = 0;
    float h = 0;
    float x = 0;
    cout << "WprowadŸ podstawê a: ";
    cout << "\n#> ";
    cin >> a;
    cout << "WprowadŸ podstawê b: ";
    cout << "\n#> ";
    cin >> b;
    cout << "WprowadŸ wysokoœæ h: ";
    cout << "\n#> ";
    cin >> h;
    x = 0.5 * (a + b) * h;
    cout << "Pole trapezu wynosi: " << x << endl;

    return 0;
}

int trojkat(){
    system("cls");
    setlocale(LC_ALL, "");
    int wybor = 0;
    float a = 0;
    float b = 0;
    float h = 0;
    float sins = 0;
    float tmp = 0;
    float tmp2 = 0;
    cout << "1 - Pole bez sin\n";
    cout << "2 - Pole z sin\n#>";
    cin >> wybor;
    if (wybor == 1){
        system("cls");
        cout << "WprowadŸ podstawê a: \n#>";
        cin >> a;
        cout << "WprowadŸ wysokoœæ h: \n#>";
        cin >> h;
        tmp = 0.5 * (a * h);
        cout << "Pole trójkata wynosi: " << tmp << endl;
    }
    if (wybor == 2){
        system("cls");
        cout << "WprowadŸ pierwszy bok: \n#>";
        cin >> a;
        cout << "WprowadŸ drugi bok: \n#>";
        cin >> b;
        cout << "WprowadŸ miarê k¹ta pomiêdzy nimi: \n#>";
        cin >> tmp2;
        sins = tmp2*pi/180;
        tmp = (a * b)/2 * sin(sins);
        cout << "Pole trójkata wynosi: " << tmp << endl;

    }

}

int kolo(){
    system("cls");
    setlocale(LC_ALL, "");
    float r = 0;
    float tmp = 0;
    cout << "Wprowadz promieñ: \n#>";
    cin >> r;
    tmp = pi*(r*r);
    cout << "Pole ko³a wynosi: " << tmp << endl;
}


int sinus(){
    system("cls");
    setlocale(LC_ALL, "");
    float sins = 0;
    float coss = 0;
    float tgg = 0;
    float ctgg = 0;
    float wybor = 0;
    float tmp = 0;
    char wybor1 = NULL;
    float a = 0;
    float b = 0;
    float c = 0;
    cout << "Z boków? [T/N]\n#>";
        cin >> wybor1;
        switch(wybor1){
            case'T':
            case't':
                system("cls");
                cout << "Podaj przyprostok¹tn¹ przeciwleg³¹ do k¹ta\n#>";
                cin >> a;
                cout << "Podaj przeciwprostok¹tn¹\n#>";
                cin >> c;
                sins = a/c;
                cout << "Sinus wynosi: " << sins << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj k¹t\n#>";
                cin >> tmp;
                sins = tmp*pi/180;
                cout << "Cosinus wynosi: " << sin(sins) << endl;
                return 0;
        }
}

int cosinus(){
    system("cls");
    setlocale(LC_ALL, "");
    float sins = 0;
    float coss = 0;
    float tgg = 0;
    float ctgg = 0;
    float wybor = 0;
    float tmp = 0;
    char wybor1 = NULL;
    float a = 0;
    float b = 0;
    float c = 0;
    cout << "Z boków? [T/N]\n#>";
        cin >> wybor1;
        switch(wybor1){
            case'T':
            case't':
                system("cls");
                cout << "Podaj przyprostok¹tn¹ przyleg³¹ do k¹ta\n#>";
                cin >> b;
                cout << "Podaj przeciwprostok¹tn¹\n#>";
                cin >> c;
                coss = b/c;
                cout << "Cosinus wynosi: " << coss << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj k¹t\n#>";
                cin >> tmp;
                coss = tmp*pi/180;
                cout << "Sinus wynosi: " << cos(coss) << endl;
                return 0;
            }
}

int tangens(){
    system("cls");
    setlocale(LC_ALL, "");
    float sins = 0;
    float coss = 0;
    float tgg = 0;
    float ctgg = 0;
    float wybor = 0;
    float tmp = 0;
    char wybor1 = NULL;
    float a = 0;
    float b = 0;
    float c = 0;
    cout << "Z boków? [T/N]\n#>";
        cin >> wybor1;
        switch(wybor1){
            case'T':
            case't':
                system("cls");
                cout << "Podaj przyprostok¹tn¹ przeciwleg³¹ do k¹ta\n#>";
                cin >> a;
                cout << "Podaj przyprostok¹tn¹ przyleg³¹ do k¹ta\n#>";
                cin >> b;
                tgg = a/b;
                cout << "Tangens wynosi: " << tgg << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj k¹t\n#>";
                cin >> tmp;
                tgg = tmp*pi/180;
                cout << "Sinus wynosi: " << tan(tgg) << endl;
                return 0;
        }
}

int cotangens(){
    system("cls");
    setlocale(LC_ALL, "");
    float sins = 0;
    float coss = 0;
    float tgg = 0;
    float ctgg = 0;
    float wybor = 0;
    float tmp = 0;
    char wybor1 = NULL;
    float a = 0;
    float b = 0;
    float c = 0;
    cout << "Z boków? [T/N]\n#>";
        cin >> wybor1;
        switch(wybor1){
            case'T':
            case't':
                system("cls");
                cout << "Podaj przyprostok¹tn¹ przeciwleg³¹ do k¹ta\n#>";
                cin >> a;
                cout << "Podaj przyprostok¹tn¹ przyleg³¹ do k¹ta\n#>";
                cin >> b;
                ctgg = b/a;
                cout << "Tangens wynosi: " << ctgg << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj k¹t\n#>";
                cin >> tmp;
                ctgg = tmp*pi/180;
                float ctan = 1/tan(ctgg);
                cout << "Sinus wynosi: " << ctan << endl;
                return 0;
        }
}

int pitagoras(){
    system("cls");
    float a = 0;
    float b = 0;
    float c = 0;
    float tmp = 0;
    int wybor1 = 0;
    cout << "Jaka konfiguracja?\n";
    cout << "[1] - Mam przyprostok¹tn¹ b i przeciwprostok¹tn¹ c, szukam a\n";
    cout << "[2] - Mam przyprostok¹tn¹ a i przeciwprostok¹tn¹ c, szukam b\n";
    cout << "[3] - Mam przyprostok¹tn¹ a i b, szukam przeciwprostok¹tnej c\n#>";
    cin >> wybor1;
    if(wybor1 == 1){
        system("cls");
        cout << "WprowadŸ d³ugoœæ przyprostok¹tnej b:\n#>";
        cin >> b;
        cout << "WprowadŸ przeciwprostok¹tn¹ c:\n#>";
        cin >> c;
        a = sqrt(c*c - b*b);
        cout << "Przyprostok¹tna a wynosi: " << a << endl;
    } else if(wybor1 == 2){
        system("cls");
        cout << "WprowadŸ d³ugoœæ przyprostok¹tnej a: \n#>";
        cin >> a;
        cout << "WprowadŸ przeciwprostok¹tn¹ c:\n#>";
        cin >> c;
        b = sqrt(c*c - a*a);
        cout << "Przyprostok¹tna b wynosi: " << b << endl;
    } else if(wybor1 == 3){
        system("cls");
        cout << "WprowadŸ d³ugoœæ przyprostok¹tnej a: \n#>";
        cin >> a;
        cout << "WprowadŸ d³ugoœæ przyprostok¹tnej b: \n#>";
        cin >> b;
        c = sqrt(a*a + b*b);
        cout << "Przeciwprostok¹tna c wynosi: " << c << endl;
    }


}


int main() {
    setlocale(LC_ALL, "");
    int wybor = 0;
    cout << "[1] - Pole trapezu\n";
    cout << "[2] - Pole trójk¹ta\n";
    cout << "[3] - Pole ko³a\n";
    cout << "[4] - Sinus\n";
    cout << "[5] - Cosinus\n";
    cout << "[6] - Tangens\n";
    cout << "[7] - Cotangens\n";
    cout << "[8] - Twierdzenie Pitagorasa\n";
    cout << "Wybierz opcjê: ";
    cout << "\n#> ";
    cin >> wybor;
    if(wybor == 1){
        trapez();
    } else if(wybor == 2){
        trojkat();
    } else if(wybor == 3){
        kolo();
    } else if(wybor == 4){
        sinus();
    } else if(wybor == 5){
        cosinus();
    } else if(wybor == 6){
        tangens();
    } else if(wybor == 7){
        cotangens();
    } else if(wybor == 8){
        pitagoras();
    }


}
