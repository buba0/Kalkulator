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
    cout << "Wprowadź podstawę a: ";
    cout << "\n#> ";
    cin >> a;
    cout << "Wprowadź podstawę b: ";
    cout << "\n#> ";
    cin >> b;
    cout << "Wprowadź wysokość h: ";
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
        cout << "Wprowadź podstawę a: \n#>";
        cin >> a;
        cout << "Wprowadź wysokość h: \n#>";
        cin >> h;
        tmp = 0.5 * (a * h);
        cout << "Pole trójkata wynosi: " << tmp << endl;
    }
    if (wybor == 2){
        system("cls");
        cout << "Wprowadź pierwszy bok: \n#>";
        cin >> a;
        cout << "Wprowadź drugi bok: \n#>";
        cin >> b;
        cout << "Wprowadź miarę kąta pomiędzy nimi: \n#>";
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
    cout << "Wprowadz promień: \n#>";
    cin >> r;
    tmp = pi*(r*r);
    cout << "Pole koła wynosi: " << tmp << endl;
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
                cout << "Podaj przyprostokątną przeciwległą do kąta\n#>";
                cin >> a;
                cout << "Podaj przeciwprostokątną\n#>";
                cin >> c;
                sins = a/c;
                cout << "Sinus wynosi: " << sins << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj kąt\n#>";
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
                cout << "Podaj przyprostokątną przyległą do kąta\n#>";
                cin >> b;
                cout << "Podaj przeciwprostokątną\n#>";
                cin >> c;
                coss = b/c;
                cout << "Cosinus wynosi: " << coss << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj kąt\n#>";
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
                cout << "Podaj przyprostokątną przeciwległą do kąta\n#>";
                cin >> a;
                cout << "Podaj przyprostokątną przyległą do kąta\n#>";
                cin >> b;
                tgg = a/b;
                cout << "Tangens wynosi: " << tgg << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj kąt\n#>";
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
                cout << "Podaj przyprostokątną przeciwległą do kąta\n#>";
                cin >> a;
                cout << "Podaj przyprostokątną przyległą do kąta\n#>";
                cin >> b;
                ctgg = b/a;
                cout << "Tangens wynosi: " << ctgg << endl;
                return 0;
            case'N':
            case'n':
                system("cls");
                cout << "Podaj kąt\n#>";
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
    cout << "[1] - Mam przyprostokątną b i przeciwprostokątną c, szukam a\n";
    cout << "[2] - Mam przyprostokątną a i przeciwprostokątną c, szukam b\n";
    cout << "[3] - Mam przyprostokątną a i b, szukam przeciwprostokątnej c\n#>";
    cin >> wybor1;
    if(wybor1 == 1){
        system("cls");
        cout << "Wprowadź długość przyprostokątnej b:\n#>";
        cin >> b;
        cout << "Wprowadź przeciwprostokątną c:\n#>";
        cin >> c;
        a = sqrt(c*c - b*b);
        cout << "Przyprostokątna a wynosi: " << a << endl;
    } else if(wybor1 == 2){
        system("cls");
        cout << "Wprowadź długość przyprostokątnej a: \n#>";
        cin >> a;
        cout << "Wprowadź przeciwprostokątną c:\n#>";
        cin >> c;
        b = sqrt(c*c - a*a);
        cout << "Przyprostokątna b wynosi: " << b << endl;
    } else if(wybor1 == 3){
        system("cls");
        cout << "Wprowadź długość przyprostokątnej a: \n#>";
        cin >> a;
        cout << "Wprowadź długość przyprostokątnej b: \n#>";
        cin >> b;
        c = sqrt(a*a + b*b);
        cout << "Przeciwprostokątna c wynosi: " << c << endl;
    }


}


int main() {
    setlocale(LC_ALL, "");
    int wybor = 0;
    cout << "[1] - Pole trapezu\n";
    cout << "[2] - Pole trójkąta\n";
    cout << "[3] - Pole koła\n";
    cout << "[4] - Sinus\n";
    cout << "[5] - Cosinus\n";
    cout << "[6] - Tangens\n";
    cout << "[7] - Cotangens\n";
    cout << "[8] - Twierdzenie Pitagorasa\n";
    cout << "Wybierz opcję: ";
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
