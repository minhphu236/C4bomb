/**du an duoc viet boi minh phu
         lop hoc : CB2         */
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void khoidong()
{
    for (int i = 1 ; i <= 8 ; i++)
    {
        cout<<"starting bomb \\"<<endl;
        Sleep(25);
        system("cls");
        cout<<"starting bomb |"<<endl;
        Sleep(25);
        system("cls");
        cout<<"starting bomb /"<<endl;
        Sleep(25);
        system("cls");
        cout<<"starting bomb -"<<endl;
        Sleep(25);
        system("cls");
    }
}
int main()
{
    khoidong();
    string a7 = "*", a3 = "*", a5 = "*", a51 = "*",a6 = "*",a0 = "*", a8 = "*";
    int password;  ///7355608
    bool pass1;
    pass1 = false;
    while (true)
    {
        cout<<"   Password  * : enter , # : cancer"<<endl;
        cout<<a7<<" "<<a3<<" "<<a5<<" "<<a51<<" "<<a6<<" "<<a0<<" "<<a8;
        if(kbhit())
        {
            char key = getch();
            if(key == '1' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "1";
            }
            if(key == '2')
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "2";
            }
            if(key == '3' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "3";
            }
            if(key == '4' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "4";
            }
            if(key == '5' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "5";
            }
            if(key == '6' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "6";
            }
            if(key == '7' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "7";
            }
            if(key == '8' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "8";
            }
            if(key == '9' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "9";
            }
            if(key == '0' )
            {
                a7 = a3;
                a3 = a5;
                a5 = a51;
                a51 = a6;
                a6 = a0;
                a0 = a8;
                a8 = "0";
            }
            if (key == '*')
            {
                pass1 = true;
            }
            if (key == '#')
            {
                a7 = "*"; a3 = "*"; a5 = "*"; a51 = "*"; a6 = "*"; a0 = "*"; a8 = "*";
            }
        }
        if (pass1 == true)
        {
            system("cls");
            cout<<"   Password  * : enter , # : cancer"<<endl;
            cout<<a7<<" "<<a3<<" "<<a5<<" "<<a51<<" "<<a6<<" "<<a0<<" "<<a8;
            Sleep(100);
            system("cls");
            int a1 = 0, a2 = 0, a3 = 0, a4 = 0,a5 = 0,a6 = 0;
            int x = 0;
            while (true)
            {
                cout<<"     time(0) * : enter , # : cancer"<<endl;
                cout<<a1<<a2<<" : "<<a3<<a4<<" : "<<a5<<a6;
                if(kbhit())
                {
                    char phim = getch();
                    if(phim == '1' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 1;
                        }
                        x++;
                    }
                    if(phim == '2')
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 2;
                        }
                        x++;
                    }
                    if(phim == '3' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 3;
                        }
                        x++;
                    }
                    if(phim == '4' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 4;
                        }
                        x++;
                    }
                    if(phim == '5' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 5;
                        }
                        x++;
                    }
                    if(phim == '6' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 6;
                        }
                        x++;
                    }
                    if(phim == '7' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 7;
                        }
                        x++;
                    }
                    if(phim == '8' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 8;
                        }
                        x++;
                    }
                    if(phim == '9' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 9;
                        }
                        x++;
                    }
                    if(phim == '0' )
                    {
                        if (x >= 0)
                        {
                            a6 = a5;
                            a5 = a4;
                            a4 = a3;
                            a3 = a2;
                            a2 = a1;
                            a1 = 0;
                        }
                        x++;
                    }
                    if (phim == '#')
                    {
                        a6 = 0;
                        a5 = 0;
                        a4 = 0;
                        a3 = 0;
                        a2 = 0;
                        a1 = 0;
                    }
                    if (phim == '*')
                    {
                        int gio1, phut1, giay1;
                        gio1 = (a1 * 10) + a2;
                        phut1 = (a3 * 10) + a4;
                        giay1 = (a5 * 10) + a6;
                        if (gio1 > 24 || phut1 > 59 || giay1 > 59)
                        {
                            cout<<"\nerror : "<<endl;
                            if (gio1 > 24)
                            {
                                cout<<"hours cannot exceed 24!!"<<endl;
                            }
                            if (phut1 > 59)
                            {
                                cout<<"Minutes Cannot Exceed 59!! "<<endl;
                            }
                            if (giay1 > 59)
                            {
                                cout<<"seconds cannot exceed 59!!"<<endl;
                            }
                            getch();
                        }
                        else
                        {
                            break;
                        }
                    }
                }
                Sleep(100);
                system("cls");
            }
            system("cls");
            string t, t1, t2;
            t2 = "";
            t = " ";
            t1 = " ";
            int gio, phut, giay;
            gio = (a1 * 10) + a2;
            phut = (a3 * 10) + a4;
            giay = (a5 * 10) + a6;
            while (true)
            {
                if (gio < 10)
                {
                    t2 = "0";
                }
                else
                {
                    t2 = "";
                }
                if (phut < 10)
                {
                    t1 = " 0";
                }
                else
                {
                    t1 = " ";
                }
                if (giay < 10)
                {
                    t = " 0";
                }
                else
                {
                    t = " ";
                }
                cout<<"Protect bomb"<<endl;
                cout<<t2<<gio<<" :"<<t1<<phut<<" :"<<t<<giay;
                Sleep(1000);
                giay = giay - 1;
                system("cls");
                if (gio == 0 && phut == 0 && giay == -1)
                {
                    getch();
                    return 0;
                }
                if (giay == -1 || giay == -2)
                {
                    giay = 59;
                    phut--;
                }
                if (phut == -1 || phut == -2)
                {
                    if (gio == 0 )
                    {
                        phut = 0;
                    }
                    else
                    {
                        phut = 59;
                        gio--;
                    }
                }
            }
        }
        Sleep(100);
        system("cls");
    }
    return 0;
}
