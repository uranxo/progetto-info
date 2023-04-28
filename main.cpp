#include <iostream>
#include <string>
#include <windows.h>
#include "molarmass.h"
using namespace std;

int main()
{
	SetConsoleOutputCP(CP_UTF8);

	int y;

	cout << "Benvenuto in M.A.V.," << endl;
	cout << "" << endl;
	cout << "[1] - Tavola periodica" << endl;
	cout << "[2] - Conversioni, esercizi" << endl;
	cout << "[3] - Calcolatore di massa molare" << endl;
	cout << "" << endl;
	cout << "scegli la tipologia di contenuto da utilizzare (1, 2, 3): ";
	cin >> y;

	switch (y)
	{
	case 1:
	{
		

		system("cls");
		string elemento;
		cout << "" << endl;
		cout << "" << endl;
		cout<<"H"<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<" "<<"   "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"   "<<" "<<"   "<<" "<<"   "<<" "<<"   "<<" "<<"   "<<"He"<<endl;
        cout<<"  "<<endl;
        cout<<"Li"<<"  "<<"Be"<<"  "<<"  "<<"  "<<"  "<<"  "<<" "<<"   "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"B"<<"   "<<"C"<<"   "<<"N"<<"   "<<"O"<<"   "<<"F"<<"   "<<"Ne"<<endl;
        cout<<" "<<endl;
        cout<<"Na"<<"  "<<"Mg"<<"  "<<"  "<<"  "<<"  "<<"  "<<" "<<"   "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"Al"<<"  "<<"Si"<<"  "<<"P"<<"   "<<"S"<<"   "<<"Cl"<<"  "<<"Ar"<<endl;
        cout<<" "<<endl;
        cout<<"K"<<"   "<<"Ca"<<"  "<<"Sc"<<"  "<<"Ti"<<"  "<<"V"<<"   "<<"Cr"<<"  "<<"Mn"<<"  "<<"Fe"<<"  "<<"Co"<<"  "<<"Ni"<<"  "<<"Cu"<<"  "<<"Zn"<<"  "<<"Ga"<<"  "<<"Ge"<<"  "<<"As"<<"  "<<"Se"<<"  "<<"Br"<<"  "<<"Kr"<<endl;
        cout<<" "<<endl;
        cout<<"Rb"<<"  "<<"Sr"<<"  "<<"Y"<<"   "<<"Zr"<<"  "<<"Nb"<<"  "<<"Mo"<<"  "<<"Tc"<<"  "<<"Ru"<<"  "<<"Rh"<<"  "<<"Pd"<<"  "<<"Ag"<<"  "<<"Cd"<<"  "<<"In"<<"  "<<"Sn"<<"  "<<"Sb"<<"  "<<"Te"<<"  "<<"I"<<"   "<<"Xe"<<endl;
        cout<<" "<<endl;
        cout<<"Cs"<<"  "<<"Ba"<<"  "<<"La"<<"  "<<"Hf"<<"  "<<"Ta"<<"  "<<"W"<<"   "<<"Re"<<"  "<<"Os"<<"  "<<"Ir"<<"  "<<"Pt"<<"  "<<"Au"<<"  "<<"Hg"<<"  "<<"Tl"<<"  "<<"Pb"<<"  "<<"Bi"<<"  "<<"Po"<<"  "<<"At"<<"  "<<"Rn"<<endl;
        cout<<" "<<endl;
        cout<<"Fr"<<"  "<<"Ra"<<"  "<<"Ac"<<"  "<<"Rf"<<"  "<<"Db"<<"  "<<"Sg"<<"  "<<"Bh"<<"  "<<"Hs"<<"  "<<"Mt"<<"  "<<"Ds"<<"  "<<"Rg"<<"  "<<"Cn"<<"  "<<"Nh"<<"  "<<"Fl"<<"  "<<"Mc"<<"  "<<"Lv"<<"  "<<"Ts"<<"  "<<"Og"<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"Ce"<<"  "<<"Pr"<<"  "<<"Nd"<<"  "<<"Pm"<<"  "<<"Sm"<<"  "<<"Eu"<<"  "<<"Gd"<<"  "<<"Tb"<<"  "<<"Dy"<<"  "<<"Ho"<<"  "<<"Er"<<"  "<<"Tm"<<"  "<<"Yb"<<"  "<<"Lu"<<"  "<<"  "<<endl;
        cout<<" "<<endl;
        cout<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"Th"<<"  "<<"Pa"<<"  "<<"U"<<"   "<<"Np"<<"  "<<"Pu"<<"  "<<"Am"<<"  "<<"Cm"<<"  "<<"Bk"<<"  "<<"Cf"<<"  "<<"Es"<<"  "<<"Fm"<<"  "<<"Md"<<"  "<<"No"<<"  "<<"Lr"<<"  "<<"  "<<endl;
        cout<<" "<<endl;
		cout<<" "<<endl;
		cout << "Inserire il simbolo di un elemento per conoscerne i dati: ";
		cin >> elemento;
		system("cls");
		cout << "" << endl;
		cout << "" << endl;
		cout<<"H"<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<" "<<"   "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"   "<<" "<<"   "<<" "<<"   "<<" "<<"   "<<" "<<"   "<<"He"<<endl;
        cout<<"  "<<endl;
        cout<<"Li"<<"  "<<"Be"<<"  "<<"  "<<"  "<<"  "<<"  "<<" "<<"   "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"B"<<"   "<<"C"<<"   "<<"N"<<"   "<<"O"<<"   "<<"F"<<"   "<<"Ne"<<endl;
        cout<<" "<<endl;
        cout<<"Na"<<"  "<<"Mg"<<"  "<<"  "<<"  "<<"  "<<"  "<<" "<<"   "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"Al"<<"  "<<"Si"<<"  "<<"P"<<"   "<<"S"<<"   "<<"Cl"<<"  "<<"Ar"<<endl;
        cout<<" "<<endl;
        cout<<"K"<<"   "<<"Ca"<<"  "<<"Sc"<<"  "<<"Ti"<<"  "<<"V"<<"   "<<"Cr"<<"  "<<"Mn"<<"  "<<"Fe"<<"  "<<"Co"<<"  "<<"Ni"<<"  "<<"Cu"<<"  "<<"Zn"<<"  "<<"Ga"<<"  "<<"Ge"<<"  "<<"As"<<"  "<<"Se"<<"  "<<"Br"<<"  "<<"Kr"<<endl;
        cout<<" "<<endl;
        cout<<"Rb"<<"  "<<"Sr"<<"  "<<"Y"<<"   "<<"Zr"<<"  "<<"Nb"<<"  "<<"Mo"<<"  "<<"Tc"<<"  "<<"Ru"<<"  "<<"Rh"<<"  "<<"Pd"<<"  "<<"Ag"<<"  "<<"Cd"<<"  "<<"In"<<"  "<<"Sn"<<"  "<<"Sb"<<"  "<<"Te"<<"  "<<"I"<<"   "<<"Xe"<<endl;
        cout<<" "<<endl;
        cout<<"Cs"<<"  "<<"Ba"<<"  "<<"La"<<"  "<<"Hf"<<"  "<<"Ta"<<"  "<<"W"<<"   "<<"Re"<<"  "<<"Os"<<"  "<<"Ir"<<"  "<<"Pt"<<"  "<<"Au"<<"  "<<"Hg"<<"  "<<"Tl"<<"  "<<"Pb"<<"  "<<"Bi"<<"  "<<"Po"<<"  "<<"At"<<"  "<<"Rn"<<endl;
        cout<<" "<<endl;
        cout<<"Fr"<<"  "<<"Ra"<<"  "<<"Ac"<<"  "<<"Rf"<<"  "<<"Db"<<"  "<<"Sg"<<"  "<<"Bh"<<"  "<<"Hs"<<"  "<<"Mt"<<"  "<<"Ds"<<"  "<<"Rg"<<"  "<<"Cn"<<"  "<<"Nh"<<"  "<<"Fl"<<"  "<<"Mc"<<"  "<<"Lv"<<"  "<<"Ts"<<"  "<<"Og"<<endl;
        cout<<" "<<endl;
        cout<<" "<<endl;
        cout<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"Ce"<<"  "<<"Pr"<<"  "<<"Nd"<<"  "<<"Pm"<<"  "<<"Sm"<<"  "<<"Eu"<<"  "<<"Gd"<<"  "<<"Tb"<<"  "<<"Dy"<<"  "<<"Ho"<<"  "<<"Er"<<"  "<<"Tm"<<"  "<<"Yb"<<"  "<<"Lu"<<"  "<<"  "<<endl;
        cout<<" "<<endl;
        cout<<"  "<<"  "<<"  "<<"  "<<"  "<<"  "<<"Th"<<"  "<<"Pa"<<"  "<<"U"<<"   "<<"Np"<<"  "<<"Pu"<<"  "<<"Am"<<"  "<<"Cm"<<"  "<<"Bk"<<"  "<<"Cf"<<"  "<<"Es"<<"  "<<"Fm"<<"  "<<"Md"<<"  "<<"No"<<"  "<<"Lr"<<"  "<<"  "<<endl;
        cout<<" "<<endl;
		cout<<" "<<endl;

		if (elemento == "H")
		{
			cout << "- IDROGENO - " << endl;
			cout << "Massa atomica: 1.008 u" << endl;
			cout << "Temp. fusione: 14 K" << endl;
			cout << "Temp. ebollizione: 20 K" << endl;
			cout << "Densitá: 0,0899 g/L" << endl;
		}

		else if (elemento == "Li")
		{
			cout << "- LITIO -" << endl;
			cout << "Massa atomica: 6.941 u" << endl;
			cout << "Temp. fusione: 454 K" << endl;
			cout << "Temp. ebollizione: 1615 K" << endl;
			cout << "Densitá: 530 g/L" << endl;
		}

		else if (elemento == "Be")
		{
			cout << "- BERILLIO -" << endl;
			cout << "Massa atomica: 9.012 u" << endl;
			cout << "Temp. fusione: 1561 K" << endl;
			cout << "Temp. ebollizione: 2744 K" << endl;
			cout << "Densitá: 1850 g/L" << endl;
		}

		else if (elemento == "Na")
		{
			cout << "- SODIO -" << endl;
			cout << "Massa atomica: 22.99 u" << endl;
			cout << "Temp. fusione: 371 K" << endl;
			cout << "Temp. ebollizione: 1156 K" << endl;
			cout << "Densitá: 970 g/L" << endl;
		}

		else if (elemento == "Mg")
		{
			cout << "- MAGNESIO -" << endl;
			cout << "Massa atomica: 24.31 u" << endl;
			cout << "Temp. fusione: 923 K" << endl;
			cout << "Temp. ebollizione: 1363 K" << endl;
			cout << "Densitá: 1740 g/L" << endl;
		}

		else if (elemento == "K")
		{
			cout << "- POTASSIO -" << endl;
			cout << "Massa atomica: 39.1 u" << endl;
			cout << "Temp. fusione: 336 K" << endl;
			cout << "Temp. ebollizione: 1033 K" << endl;
			cout << "Densitá: 860 g/L" << endl;
		}

		else if (elemento == "Ca")
		{
			cout << "- CALCIO -" << endl;
			cout << "Massa atomica: 40.08 u" << endl;
			cout << "Temp. fusione: 1115 K" << endl;
			cout << "Temp. ebollizione: 1757 K" << endl;
			cout << "Densitá: 1530 g/L" << endl;
		}

		else if (elemento == "Sc")
		{
			cout << "- SCANDIO -" << endl;
			cout << "Massa atomica: 44.96 u" << endl;
			cout << "Temp. fusione: 1814 K" << endl;
			cout << "Temp. ebollizione: 3109 K" << endl;
			cout << "Densitá: 2990 g/L" << endl;
		}

		else if (elemento == "Ti")
		{
			cout << "- TITANIO -" << endl;
			cout << "Massa atomica: 47.87 u" << endl;
			cout << "Temp. fusione: 1941 K" << endl;
			cout << "Temp. ebollizione: 3560 K" << endl;
			cout << "Densitá: 4550 g/L" << endl;
		}

		else if (elemento == "V")
		{
			cout << "- VANADIO -" << endl;
			cout << "Massa atomica: 50.94 u" << endl;
			cout << "Temp. fusione: 2183 K" << endl;
			cout << "Temp. ebollizione: 3680 K" << endl;
			cout << "Densitá: 6110 g/L" << endl;
		}

		else if (elemento == "Cr")
		{
			cout << "- CROMO -" << endl;
			cout << "Massa atomica: 52 u" << endl;
			cout << "Temp. fusione: 2180 K" << endl;
			cout << "Temp. ebollizione: 2945 K" << endl;
			cout << "Densitá: 7190 g/L" << endl;
		}

		else if (elemento == "Mn")
		{
			cout << "- MANGANESE -" << endl;
			cout << "Massa atomica: 54.94 u" << endl;
			cout << "Temp. fusione: 1517 K" << endl;
			cout << "Temp. ebollizione: 2334 K" << endl;
			cout << "Densitá: 7430 g/L" << endl;
		}

		else if (elemento == "Fe")
		{
			cout << "- FERRO -" << endl;
			cout << "Massa atomica: 55.85 u" << endl;
			cout << "Temp. fusione: 1808 K" << endl;
			cout << "Temp. ebollizione: 3134 K" << endl;
			cout << "Densitá: 7860 g/L" << endl;
		}

		else if (elemento == "Co")
		{
			cout << "- COBALTO -" << endl;
			cout << "Massa atomica: 58.93 u" << endl;
			cout << "Temp. fusione: 1768 K" << endl;
			cout << "Temp. ebollizione: 3200 K" << endl;
			cout << "Densitá: 8800 g/L" << endl;
		}

		else if (elemento == "Ni")
		{
			cout << "- NICHEL -" << endl;
			cout << "Massa atomica: 58.69 u" << endl;
			cout << "Temp. fusione: 1728 K" << endl;
			cout << "Temp. ebollizione: 3186 K" << endl;
			cout << "Densitá: 8900 g/L" << endl;
		}

		else if (elemento == "Cu")
		{
			cout << "- RAME -" << endl;
			cout << "Massa atomica: 63.55 u" << endl;
			cout << "Temp. fusione: 1357 K" << endl;
			cout << "Temp. ebollizione: 2840 K" << endl;
			cout << "Densitá: 8960 g/L" << endl;
		}

		else if (elemento == "Zn")
		{
			cout << "- ZINCO -" << endl;
			cout << "Massa atomica: 65.38 u" << endl;
			cout << "Temp. fusione: 693 K" << endl;
			cout << "Temp. ebollizione: 1180 K" << endl;
			cout << "Densitá: 1746 g/L" << endl;
		}

		else if (elemento == "Rb")
		{
			cout << "- RUBIDIO -" << endl;
			cout << "Massa atomica: 85.47 u" << endl;
			cout << "Temp. fusione: 312 K" << endl;
			cout << "Temp. ebollizione: 959 K" << endl;
			cout << "Densitá: 1530 g/L" << endl;
		}

		else if (elemento == "Sr")
		{
			cout << "- STRONZIO -" << endl;
			cout << "Massa atomica: 87.62 u" << endl;
			cout << "Temp. fusione: 1050 K" << endl;
			cout << "Temp. ebollizione: 1657 K" << endl;
			cout << "Densitá: 2600 g/L" << endl;
		}

		else if (elemento == "Y")
		{
			cout << "- ITTRIO -" << endl;
			cout << "Massa atomica: 88.91 u" << endl;
			cout << "Temp. fusione: 1796 K" << endl;
			cout << "Temp. ebollizione: 3618 K" << endl;
			cout << "Densitá: 4470 g/L" << endl;
		}

		else if (elemento == "Zr")
		{
			cout << "- ZIRCONIO -" << endl;
			cout << "Massa atomica: 91.22 u" << endl;
			cout << "Temp. fusione: 2125 K" << endl;
			cout << "Temp. ebollizione: 4682 K" << endl;
			cout << "Densitá: 6490 g/L" << endl;
		}

		else if (elemento == "Nb")
		{
			cout << "- NIOBIO -" << endl;
			cout << "Massa atomica: 92.91 u" << endl;
			cout << "Temp. fusione: 2741 K" << endl;
			cout << "Temp. ebollizione: 5015 K" << endl;
			cout << "Densitá: 8570 g/L" << endl;
		}

		else if (elemento == "Mo")
		{
			cout << "- MOLIBDENO -" << endl;
			cout << "Massa atomica: 95.95 u" << endl;
			cout << "Temp. fusione: 2829 K" << endl;
			cout << "Temp. ebollizione: 4912 K" << endl;
			cout << "Densitá: 10200 g/L" << endl;
		}

		else if (elemento == "Tc")
		{
			cout << "- TECNEZIO -" << endl;
			cout << "Massa atomica: 98.91 u" << endl;
			cout << "Temp. fusione: 2430 K" << endl;
			cout << "Temp. ebollizione: 4538 K" << endl;
			cout << "Densitá: 11500 g/L" << endl;
		}

		else if (elemento == "Ru")
		{
			cout << "- RUTENIO -" << endl;
			cout << "Massa atomica: 101.1 u" << endl;
			cout << "Temp. fusione: 2607 K" << endl;
			cout << "Temp. ebollizione: 4423 K" << endl;
			cout << "Densitá: 12500 g/L" << endl;
		}

		else if (elemento == "Rh")
		{
			cout << "- RODIO -" << endl;
			cout << "Massa atomica: 102.9 u" << endl;
			cout << "Temp. fusione: 2239 K" << endl;
			cout << "Temp. ebollizione: 3968 K" << endl;
			cout << "Densitá: 12400 g/L" << endl;
		}

		else if (elemento == "Pd")
		{
			cout << "- PALLADIO -" << endl;
			cout << "Massa atomica: 106.4 u" << endl;
			cout << "Temp. fusione: 1826 K" << endl;
			cout << "Temp. ebollizione: 3236 K" << endl;
			cout << "Densitá: 12000 g/L" << endl;
		}

		else if (elemento == "Ag")
		{
			cout << "- ARGENTO -" << endl;
			cout << "Massa atomica: 107.9 u" << endl;
			cout << "Temp. fusione: 1235 K" << endl;
			cout << "Temp. ebollizione: 2435 K" << endl;
			cout << "Densitá: 10500 g/L" << endl;
		}

		else if (elemento == "Cd")
		{
			cout << "- CADMIO -" << endl;
			cout << "Massa atomica: 112.4 u" << endl;
			cout << "Temp. fusione: 594 K" << endl;
			cout << "Temp. ebollizione: 1038 K" << endl;
			cout << "Densitá: 8650 g/L" << endl;
		}

		else if (elemento == "Cs")
		{
			cout << "- CESIO -" << endl;
			cout << "Massa atomica: 132.9 u" << endl;
			cout << "Temp. fusione: 301 K" << endl;
			cout << "Temp. ebollizione: 942 K" << endl;
			cout << "Densitá: 1870 g/L" << endl;
		}

		else if (elemento == "Ba")
		{
			cout << "- BARIO -" << endl;
			cout << "Massa atomica: 137.3 u" << endl;
			cout << "Temp. fusione: 1000 K" << endl;
			cout << "Temp. ebollizione: 2170 K" << endl;
			cout << "Densitá: 3590 g/L" << endl;
		}

		else if (elemento == "La")
		{
			cout << "- LANTANIO -" << endl;
			cout << "Massa atomica: 138.9 u" << endl;
			cout << "Temp. fusione: 1193 K" << endl;
			cout << "Temp. ebollizione: 3727 K" << endl;
			cout << "Densitá: 6170 g/L" << endl;
		}

		else if (elemento == "Hf")
		{
			cout << "- AFNIO -" << endl;
			cout << "Massa atomica: 178.5 u" << endl;
			cout << "Temp. fusione: 2506 K" << endl;
			cout << "Temp. ebollizione: 4875 K" << endl;
			cout << "Densitá: 13300 g/L" << endl;
		}

		else if (elemento == "Ta")
		{
			cout << "- TANTALIO -" << endl;
			cout << "Massa atomica: 180.9 u" << endl;
			cout << "Temp. fusione: 3290 K" << endl;
			cout << "Temp. ebollizione: 5698 K" << endl;
			cout << "Densitá: 16700 g/L" << endl;
		}

		else if (elemento == "W")
		{
			cout << "- TUNGSTENO -" << endl;
			cout << "Massa atomica: 183.8 u" << endl;
			cout << "Temp. fusione: 3695 K" << endl;
			cout << "Temp. ebollizione: 5928 K" << endl;
			cout << "Densitá: 19300 g/L" << endl;
		}

		else if (elemento == "Re")
		{
			cout << "- RENIO -" << endl;
			cout << "Massa atomica: 186.2 u" << endl;
			cout << "Temp. fusione: 3459 K" << endl;
			cout << "Temp. ebollizione: 5900 K" << endl;
			cout << "Densitá: 21000 g/L" << endl;
		}

		else if (elemento == "Os")
		{
			cout << "- OSMIO -" << endl;
			cout << "Massa atomica: 190.2 u" << endl;
			cout << "Temp. fusione: 3306 K" << endl;
			cout << "Temp. ebollizione: 5300 K" << endl;
			cout << "Densitá: 22600 g/L" << endl;
		}

		else if (elemento == "Ir")
		{
			cout << "- IRIDIO -" << endl;
			cout << "Massa atomica: 192.2 u" << endl;
			cout << "Temp. fusione: 2719 K" << endl;
			cout << "Temp. ebollizione: 4823 K" << endl;
			cout << "Densitá: 22500 g/L" << endl;
		}

		else if (elemento == "Pt")
		{
			cout << "- PLATINO -" << endl;
			cout << "Massa atomica: 195.1 u" << endl;
			cout << "Temp. fusione: 2041 K" << endl;
			cout << "Temp. ebollizione: 4100 K" << endl;
			cout << "Densitá: 21400 g/L" << endl;
		}

		else if (elemento == "Au")
		{
			cout << "- ORO -" << endl;
			cout << "Massa atomica: 197 u" << endl;
			cout << "Temp. fusione: 1337 K" << endl;
			cout << "Temp. ebollizione: 3129 K" << endl;
			cout << "Densitá: 19300 g/L" << endl;
		}

		else if (elemento == "Hg")
		{
			cout << "- MERCURIO -" << endl;
			cout << "Massa atomica: 200.6 u" << endl;
			cout << "Temp. fusione: 234 K" << endl;
			cout << "Temp. ebollizione: 630 K" << endl;
			cout << "Densitá: 13600 g/L" << endl;
		}

		else if (elemento == "Fr")
		{
			cout << "- FRANCIO -" << endl;
			cout << "Massa atomica: 223 u" << endl;
			cout << "Temp. fusione: 300 K" << endl;
			cout << "Temp. ebollizione: 950 K" << endl;
			cout << "Densitá: 1000 g/L" << endl;
		}

		else if (elemento == "Ra")
		{
			cout << "- RADIO -" << endl;
			cout << "Massa atomica: 226 u" << endl;
			cout << "Temp. fusione: 973 K" << endl;
			cout << "Temp. ebollizione: 1413 K" << endl;
			cout << "Densitá: 5000 g/L" << endl;
		}

		else if (elemento == "Ac")
		{
			cout << "- ATTINIO -" << endl;
			cout << "Massa atomica: 227 u" << endl;
			cout << "Temp. fusione: 1324 K" << endl;
			cout << "Temp. ebollizione: 3432 K" << endl;
			cout << "Densitá: 10100 g/L" << endl;
		}

		else if (elemento == "Rf")
		{
			cout << "- RUTHERFORDIO -" << endl;
			cout << "Massa atomica: 261 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Db")
		{
			cout << "- DUBNIO -" << endl;
			cout << "Massa atomica: 262 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Sg")
		{
			cout << "- SEABORGIO -" << endl;
			cout << "Massa atomica: 266 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Bh")
		{
			cout << "- BOHRIO -" << endl;
			cout << "Massa atomica: 264 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Hs")
		{
			cout << "- HASSIO -" << endl;
			cout << "Massa atomica: 265 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Mt")
		{
			cout << "- MEITNERIO -" << endl;
			cout << "Massa atomica: 268 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Ds")
		{
			cout << "- DARMSTADIO -" << endl;
			cout << "Massa atomica: 271 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Rg")
		{
			cout << "- ROENTGENIO -" << endl;
			cout << "Massa atomica: 272 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Cn")
		{
			cout << "- COPERNICIO -" << endl;
			cout << "Massa atomica: 285 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "B")
		{
			cout << "- BORO -" << endl;
			cout << "Massa atomica: 10.81 u" << endl;
			cout << "Temp. fusione: 2573.15 K" << endl;
			cout << "Temp. ebollizione: 3923.15 K" << endl;
			cout << "Densitá: 2470 g/L" << endl;
		}

		else if (elemento == "C")
		{
			cout << "- CARBONIO -" << endl;
			cout << "Massa atomica: 12.01 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: 3823.15 K" << endl;
			cout << "Densitá: 2260 g/L" << endl;
		}

		else if (elemento == "N")
		{
			cout << "- AZOTO -" << endl;
			cout << "Massa atomica: 14.01 u" << endl;
			cout << "Temp. fusione: 63 K" << endl;
			cout << "Temp. ebollizione: 77 K" << endl;
			cout << "Densitá: 1.25 g/L" << endl;
		}

		else if (elemento == "O")
		{
			cout << "- OSSIGENO -" << endl;
			cout << "Massa atomica: 16 u" << endl;
			cout << "Temp. fusione: 54 K" << endl;
			cout << "Temp. ebollizione: 90 K" << endl;
			cout << "Densitá: 1.43 g/L" << endl;
		}

		else if (elemento == "F")
		{
			cout << "- FLUORO -" << endl;
			cout << "Massa atomica: 19 u" << endl;
			cout << "Temp. fusione: 53 K" << endl;
			cout << "Temp. ebollizione: 85 K" << endl;
			cout << "Densitá: 1.7 g/L" << endl;
		}

		else if (elemento == "Ne")
		{
			cout << "- NEON -" << endl;
			cout << "Massa atomica: 20.18 u" << endl;
			cout << "Temp. fusione: 24 K" << endl;
			cout << "Temp. ebollizione: 27 K" << endl;
			cout << "Densitá: 0.9 g/L" << endl;
		}

		else if (elemento == "He")
		{
			cout << "- ELIO -" << endl;
			cout << "Massa atomica: 4.003 u" << endl;
			cout << "Temp. fusione: 1 K" << endl;
			cout << "Temp. ebollizione: 4 K" << endl;
			cout << "Densitá: 0.18 g/L" << endl;
		}

		else if (elemento == "Al")
		{
			cout << "- ALLUMINIO -" << endl;
			cout << "Massa atomica: 26.98 u" << endl;
			cout << "Temp. fusione: 933 K" << endl;
			cout << "Temp. ebollizione: 2792 K" << endl;
			cout << "Densitá: 2700 g/L" << endl;
		}

		else if (elemento == "Si")
		{
			cout << "- SILICIO -" << endl;
			cout << "Massa atomica: 28.09 u" << endl;
			cout << "Temp. fusione: 1687 K" << endl;
			cout << "Temp. ebollizione: 3553 K" << endl;
			cout << "Densitá: 2330 g/L" << endl;
		}

		else if (elemento == "P")
		{
			cout << "- FOSFORO -" << endl;
			cout << "Massa atomica: 30.97 u" << endl;
			cout << "Temp. fusione: 317 K" << endl;
			cout << "Temp. ebollizione: 553 K" << endl;
			cout << "Densitá: 1820 g/L" << endl;
		}

		else if (elemento == "S")
		{
			cout << "- ZOLFO -" << endl;
			cout << "Massa atomica: 32.07 u" << endl;
			cout << "Temp. fusione: 388 K" << endl;
			cout << "Temp. ebollizione: 718 K" << endl;
			cout << "Densitá: 2090 g/L" << endl;
		}

		else if (elemento == "Cl")
		{
			cout << "- CLORO -" << endl;
			cout << "Massa atomica: 35.45 u" << endl;
			cout << "Temp. fusione: 172 K" << endl;
			cout << "Temp. ebollizione: 238 K" << endl;
			cout << "Densitá: 3.21 g/L" << endl;
		}

		else if (elemento == "Ar")
		{
			cout << "- ARGON -" << endl;
			cout << "Massa atomica: 39.95 u" << endl;
			cout << "Temp. fusione: 84 K" << endl;
			cout << "Temp. ebollizione: 87 K" << endl;
			cout << "Densitá: 1.78 g/L" << endl;
		}

		else if (elemento == "Ga")
		{
			cout << "- GALLIO -" << endl;
			cout << "Massa atomica: 69.72 u" << endl;
			cout << "Temp. fusione: 303 K" << endl;
			cout << "Temp. ebollizione: 2477 K" << endl;
			cout << "Densitá: 5910 g/L" << endl;
		}

		else if (elemento == "Ge")
		{
			cout << "- GERMANIO -" << endl;
			cout << "Massa atomica: 72.63 u" << endl;
			cout << "Temp. fusione: 1210 K" << endl;
			cout << "Temp. ebollizione: 3103 K" << endl;
			cout << "Densitá: 5320 g/L" << endl;
		}

		else if (elemento == "As")
		{
			cout << "- ARSENICO -" << endl;
			cout << "Massa atomica: 74.92 u" << endl;
			cout << "Temp. fusione: 1090.15 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: 5730 g/L" << endl;
		}

		else if (elemento == "Se")
		{
			cout << "- SELENIO -" << endl;
			cout << "Massa atomica: 78.96 u" << endl;
			cout << "Temp. fusione: 494 K" << endl;
			cout << "Temp. ebollizione: 958 K" << endl;
			cout << "Densitá: 4810 g/L" << endl;
		}

		else if (elemento == "Br")
		{
			cout << "- BROMO -" << endl;
			cout << "Massa atomica: 79.9 u" << endl;
			cout << "Temp. fusione: 266 K" << endl;
			cout << "Temp. ebollizione: 332 K" << endl;
			cout << "Densitá: 3120 g/L" << endl;
		}

		else if (elemento == "Kr")
		{
			cout << "- CRIPTON -" << endl;
			cout << "Massa atomica: 83.8 u" << endl;
			cout << "Temp. fusione: 116 K" << endl;
			cout << "Temp. ebollizione: 121 K" << endl;
			cout << "Densitá: 3.75 g/L" << endl;
		}

		else if (elemento == "In")
		{
			cout << "- INDIO -" << endl;
			cout << "Massa atomica: 114.8 u" << endl;
			cout << "Temp. fusione: 430 K" << endl;
			cout << "Temp. ebollizione: 2345 K" << endl;
			cout << "Densitá: 7310 g/L" << endl;
		}

		else if (elemento == "Sn")
		{
			cout << "- STAGNO -" << endl;
			cout << "Massa atomica: 118.7 u" << endl;
			cout << "Temp. fusione: 505 K" << endl;
			cout << "Temp. ebollizione: 2875 K" << endl;
			cout << "Densitá: 7290 g/L" << endl;
		}

		else if (elemento == "Sb")
		{
			cout << "- ANTIMONIO -" << endl;
			cout << "Massa atomica: 121.8 u" << endl;
			cout << "Temp. fusione: 904 K" << endl;
			cout << "Temp. ebollizione: 1860 K" << endl;
			cout << "Densitá: 6680 g/L" << endl;
		}

		else if (elemento == "Te")
		{
			cout << "- TELLURIO -" << endl;
			cout << "Massa atomica: 127.6 u" << endl;
			cout << "Temp. fusione: 723 K" << endl;
			cout << "Temp. ebollizione: 1261 K" << endl;
			cout << "Densitá: 6240 g/L" << endl;
		}

		else if (elemento == "I")
		{
			cout << "- IODIO -" << endl;
			cout << "Massa atomica: 126.9 u" << endl;
			cout << "Temp. fusione: 387 K" << endl;
			cout << "Temp. ebollizione: 457 K" << endl;
			cout << "Densitá: 4930 g/L" << endl;
		}

		else if (elemento == "Xe")
		{
			cout << "- XENON -" << endl;
			cout << "Massa atomica: 126.9 u" << endl;
			cout << "Temp. fusione: 387 K" << endl;
			cout << "Temp. ebollizione: 457 K" << endl;
			cout << "Densitá: 4930 g/L" << endl;
		}

		else if (elemento == "Tl")
		{
			cout << "- TALLIO -" << endl;
			cout << "Massa atomica: 204.4 u" << endl;
			cout << "Temp. fusione: 577 K" << endl;
			cout << "Temp. ebollizione: 1746 K" << endl;
			cout << "Densitá: 11800 g/L" << endl;
		}

		else if (elemento == "Pb")
		{
			cout << "- PIOMBO -" << endl;
			cout << "Massa atomica: 207.2 u" << endl;
			cout << "Temp. fusione: 601 K" << endl;
			cout << "Temp. ebollizione: 2013 K" << endl;
			cout << "Densitá: 11400 g/L" << endl;
		}

		else if (elemento == "Bi")
		{
			cout << "- BISMUTO -" << endl;
			cout << "Massa atomica: 209 u" << endl;
			cout << "Temp. fusione: 544 K" << endl;
			cout << "Temp. ebollizione: 1833 K" << endl;
			cout << "Densitá: 9800 g/L" << endl;
		}

		else if (elemento == "Po")
		{
			cout << "- POLONIO -" << endl;
			cout << "Massa atomica: 209 u" << endl;
			cout << "Temp. fusione: 527 K" << endl;
			cout << "Temp. ebollizione: 1235 K" << endl;
			cout << "Densitá: 9200 g/L" << endl;
		}

		else if (elemento == "At")
		{
			cout << "- ASTATO -" << endl;
			cout << "Massa atomica: 210 u" << endl;
			cout << "Temp. fusione: 575 K" << endl;
			cout << "Temp. ebollizione: 610 K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Rn")
		{
			cout << "- RADON -" << endl;
			cout << "Massa atomica: 222 u" << endl;
			cout << "Temp. fusione: 202 K" << endl;
			cout << "Temp. ebollizione: 211 K" << endl;
			cout << "Densitá: 9.72 g/L" << endl;
		}

		else if (elemento == "Nh")
		{
			cout << "- NIHONIO -" << endl;
			cout << "Massa atomica: 284 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Fl")
		{
			cout << "- FLEROVIO -" << endl;
			cout << "Massa atomica: 289 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Mc")
		{
			cout << "- MOSCOVIO -" << endl;
			cout << "Massa atomica: 288 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Lv")
		{
			cout << "- LIVERMORIO -" << endl;
			cout << "Massa atomica: 293 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Ts")
		{
			cout << "- TENNESSO -" << endl;
			cout << "Massa atomica: 294 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Og")
		{
			cout << "- OGANESSON -" << endl;
			cout << "Massa atomica: 294 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Ce")
		{
			cout << "- CERIO -" << endl;
			cout << "Massa atomica: 140.1 u" << endl;
			cout << "Temp. fusione: 1071 K" << endl;
			cout << "Temp. ebollizione: 3697 K" << endl;
			cout << "Densitá: 6770 g/L" << endl;
		}

		else if (elemento == "Pr")
		{
			cout << "- PRASEODIMIO -" << endl;
			cout << "Massa atomica: 140.9 u" << endl;
			cout << "Temp. fusione: 1204 K" << endl;
			cout << "Temp. ebollizione: 3793 K" << endl;
			cout << "Densitá: 6770 g/L" << endl;
		}

		else if (elemento == "Nd")
		{
			cout << "- NEODIMIO -" << endl;
			cout << "Massa atomica: 144.2 u" << endl;
			cout << "Temp. fusione: 1283 K" << endl;
			cout << "Temp. ebollizione: 3347 K" << endl;
			cout << "Densitá: 7000 g/L" << endl;
		}

		else if (elemento == "Pm")
		{
			cout << "- PROMEZIO -" << endl;
			cout << "Massa atomica: 145 u" << endl;
			cout << "Temp. fusione: 1353 K" << endl;
			cout << "Temp. ebollizione: 2730 K" << endl;
			cout << "Densitá: 7220 g/L" << endl;
		}

		else if (elemento == "Sm")
		{
			cout << "- SAMARIO -" << endl;
			cout << "Massa atomica: 150.4 u" << endl;
			cout << "Temp. fusione: 1345 K" << endl;
			cout << "Temp. ebollizione: 2051 K" << endl;
			cout << "Densitá: 150.4 g/L" << endl;
		}

		else if (elemento == "Eu")
		{
			cout << "- EUROPIO -" << endl;
			cout << "Massa atomica: 152 u" << endl;
			cout << "Temp. fusione: 1095 K" << endl;
			cout << "Temp. ebollizione: 1870 K" << endl;
			cout << "Densitá: 5240 g/L" << endl;
		}

		else if (elemento == "Gd")
		{
			cout << "- GADOLINIO -" << endl;
			cout << "Massa atomica: 157.3 u" << endl;
			cout << "Temp. fusione: 1584 K" << endl;
			cout << "Temp. ebollizione: 3546 K" << endl;
			cout << "Densitá: 7890 g/L" << endl;
		}

		else if (elemento == "Tb")
		{
			cout << "- TERBIO -" << endl;
			cout << "Massa atomica: 158.9 u" << endl;
			cout << "Temp. fusione: 1629 K" << endl;
			cout << "Temp. ebollizione: 3503 K" << endl;
			cout << "Densitá: 8270 g/L" << endl;
		}

		else if (elemento == "Dy")
		{
			cout << "- DISPROSIO -" << endl;
			cout << "Massa atomica: 162.5 u" << endl;
			cout << "Temp. fusione: 1682 K" << endl;
			cout << "Temp. ebollizione: 2840 K" << endl;
			cout << "Densitá: 8530 g/L" << endl;
		}

		else if (elemento == "Ho")
		{
			cout << "- OLMIO -" << endl;
			cout << "Massa atomica: 164.9 u" << endl;
			cout << "Temp. fusione: 1743 K" << endl;
			cout << "Temp. ebollizione: 2833 K" << endl;
			cout << "Densitá: 8800 g/L" << endl;
		}

		else if (elemento == "Er")
		{
			cout << "- ERBIO -" << endl;
			cout << "Massa atomica: 167.3 u" << endl;
			cout << "Temp. fusione: 1795 K" << endl;
			cout << "Temp. ebollizione: 3141 K" << endl;
			cout << "Densitá: 9050 g/L" << endl;
		}

		else if (elemento == "Tm")
		{
			cout << "- TULIO -" << endl;
			cout << "Massa atomica: 168.9 u" << endl;
			cout << "Temp. fusione: 1818 K" << endl;
			cout << "Temp. ebollizione: 2223 K" << endl;
			cout << "Densitá: 9330 g/L" << endl;
		}

		else if (elemento == "Yb")
		{
			cout << "- ITTERBIO -" << endl;
			cout << "Massa atomica: 173 u" << endl;
			cout << "Temp. fusione: 1878 K" << endl;
			cout << "Temp. ebollizione: 1700 K" << endl;
			cout << "Densitá: 6980 g/L" << endl;
		}

		else if (elemento == "Lu")
		{
			cout << "- LUTEZIO -" << endl;
			cout << "Massa atomica: 175 u" << endl;
			cout << "Temp. fusione: 1929 K" << endl;
			cout << "Temp. ebollizione: 3588 K" << endl;
			cout << "Densitá: 9840 g/L" << endl;
		}

		else if (elemento == "Th")
		{
			cout << "- TORIO -" << endl;
			cout << "Massa atomica: 232 u" << endl;
			cout << "Temp. fusione: 2023 K" << endl;
			cout << "Temp. ebollizione: 5061 K" << endl;
			cout << "Densitá: 11700 g/L" << endl;
		}

		else if (elemento == "Pa")
		{
			cout << "- PROTOATTINIO -" << endl;
			cout << "Massa atomica: 231 u" << endl;
			cout << "Temp. fusione: 1845 K" << endl;
			cout << "Temp. ebollizione: 4029 K" << endl;
			cout << "Densitá: 15400 g/L" << endl;
		}

		else if (elemento == "U")
		{
			cout << "- URANIO -" << endl;
			cout << "Massa atomica: 238 u" << endl;
			cout << "Temp. fusione: 1408 K" << endl;
			cout << "Temp. ebollizione: 4404 K" << endl;
			cout << "Densitá: 19000 g/L" << endl;
		}

		else if (elemento == "Np")
		{
			cout << "- NETTUNIO -" << endl;
			cout << "Massa atomica: 237 u" << endl;
			cout << "Temp. fusione: 913 K" << endl;
			cout << "Temp. ebollizione: 4175 K" << endl;
			cout << "Densitá: 20400 g/L" << endl;
		}

		else if (elemento == "Pu")
		{
			cout << "- PLUTONIO -" << endl;
			cout << "Massa atomica: 244 u" << endl;
			cout << "Temp. fusione: 914 K" << endl;
			cout << "Temp. ebollizione: 3501 K" << endl;
			cout << "Densitá: 19700 g/L" << endl;
		}

		else if (elemento == "Am")
		{
			cout << "- AMERICIO -" << endl;
			cout << "Massa atomica: 243 u" << endl;
			cout << "Temp. fusione: 1449 K" << endl;
			cout << "Temp. ebollizione: 2284 K" << endl;
			cout << "Densitá: 13700 g/L" << endl;
		}

		else if (elemento == "Cm")
		{
			cout << "- CURIO -" << endl;
			cout << "Massa atomica: 247 u" << endl;
			cout << "Temp. fusione: 1618 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: 13500 g/L" << endl;
		}

		else if (elemento == "Bk")
		{
			cout << "- BERKELIO -" << endl;
			cout << "Massa atomica: 247 u" << endl;
			cout << "Temp. fusione: 1323 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: 14800 g/L" << endl;
		}

		else if (elemento == "Cf")
		{
			cout << "- CALIFORNIO -" << endl;
			cout << "Massa atomica: 251 u" << endl;
			cout << "Temp. fusione: 1333 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Es")
		{
			cout << "- EINSTENIO -" << endl;
			cout << "Massa atomica: 252 u" << endl;
			cout << "Temp. fusione: 1133 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: 15100 g/L" << endl;
		}

		else if (elemento == "Fm")
		{
			cout << "- FERMIO -" << endl;
			cout << "Massa atomica: 257 u" << endl;
			cout << "Temp. fusione: 1800 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Md")
		{
			cout << "- MENDELEVIO -" << endl;
			cout << "Massa atomica: 258 u" << endl;
			cout << "Temp. fusione: 1100 K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "No")
		{
			cout << "- NOBELIO -" << endl;
			cout << "Massa atomica: 259 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else if (elemento == "Lr")
		{
			cout << "- LAURENZIO -" << endl;
			cout << "Massa atomica: 262 u" << endl;
			cout << "Temp. fusione: / K" << endl;
			cout << "Temp. ebollizione: / K" << endl;
			cout << "Densitá: / g/L" << endl;
		}

		else
		{
			cout << "Inserisci un elemento esistente" << endl;
		}

		break;
	}

	case 2:
	{

		system("cls");
		int option;
		float m, mm, n, part;

		cout << "Quali dati possiedi?:" << endl;
		cout << "" << endl;
		cout << "1. Massa e numero di moli" << endl;
		cout << "2. Massa e massa molare" << endl;
		cout << "3. Numero di moli e massa molare" << endl;
		cout << "4. Numero di particelle e massa" << endl;
		cout << "5. Numero di particelle e massa molare" << endl;
		cout << "" << endl;
		cout << "Inserisci il numero dell'opzione: ";
		cin >> option;
		cout << "" << endl;
		switch (option)
		{
		case 1:
		{
			cout << "Inserisci la massa [g]: ";
			cin >> m;
			cout << "Inserisci il numero di moli [mol]: ";
			cin >> n;
			system("cls");
			mm = m / n;
			part = n * 6.022e23;
			cout << "Massa: " << m << " g" << endl;
			cout << "Massa molare: " << mm << " g/mol" << endl;
			cout << "Numero di moli: " << n << " mol" << endl;
			cout << "Numero di particelle: " << part << " particelle" << endl;
			break;
		}
		case 2:
		{
			cout << "Inserisci la massa [g]: ";
			cin >> m;
			cout << "Inserisci la massa molare [g/mol]: ";
			cin >> mm;
			system("cls");
			n = m / mm;
			part = n * 6.022e23;
			cout << "Massa: " << m << " g" << endl;
			cout << "Massa molare: " << mm << " g/mol" << endl;
			cout << "Numero di moli: " << n << " mol" << endl;
			cout << "Numero di particelle: " << part << " particelle" << endl;
			break;
		}
		case 3:
		{
			cout << "Inserisci il numero di moli [mol]: ";
			cin >> n;
			cout << "Inserisci la massa molare [g/mol]: ";
			cin >> mm;
			system("cls");
			m = n * mm;
			part = n * 6.022e23;
			cout << "Massa: " << m << " g" << endl;
			cout << "Massa molare: " << mm << " g/mol" << endl;
			cout << "Numero di moli: " << n << " mol" << endl;
			cout << "Numero di particelle: " << part << " particelle" << endl;
			break;
		}
		case 4:
		{
			cout << "Inserisci il numero di particelle: ";
			cin >> part;
			cout << "Inserisci la massa [g]: ";
			cin >> m;
			system("cls");
			n = part / 6.022e23;
			mm = m / n;
			cout << "Massa: " << m << " g" << endl;
			cout << "Massa molare: " << mm << " g/mol" << endl;
			cout << "Numero di moli: " << n << " mol" << endl;
			cout << "Numero di particelle: " << part << " particelle" << endl;
			break;
		}
		case 5:
		{
			cout << "Inserisci il numero di particelle: ";
			cin >> part;
			cout << "Inserisi la massa molare [g/mol]: ";
			cin >> mm;
			system("cls");
			n = part / 6.022e23;
			m = n * mm;
			cout << "Massa: " << m << " g" << endl;
			cout << "Massa molare: " << mm << " g/mol" << endl;
			cout << "Numero di moli: " << n << " mol" << endl;
			cout << "Numero di particelle: " << part << " particelle" << endl;
			break;
		}
		default:
		{
			cout << "Il numero dell'opzione inserito non esiste" << endl;
			break;
		}

		}

		break;

	}

	case 3:
	{

		system("cls");
		string form;
		cout << "Inserisci la formula chimica: ";
		cin >> form;
		system("cls");
		cout << "Massa molare " << form << " : " << getmolarmass(form) << " g/mol" << endl;
		break;
	}
	
	default:
	{
		cout << "" << endl;
		cout << "Inserisci un numero di opzione giusto" << endl;
		break;
	}
	
	}
	

	cout << "" << endl;
	system("pause");
}
