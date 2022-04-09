#include <iostream>
#include <ctime>

using namespace std;


//struct date {
//	int day;
//	int month;
//	int year;
//	int weekday;
//	char mon_name[15];
//};
//
//struct Fio
//{
//	char Fio[20];
//	int id;
//	date qwe;
//	date zxc;
//
//
//};

//int main()
//{
//	date MyBirthday = { 30,11,1995,4,"wednsday"};
//	cout << MyBirthday.day << endl;
//	cout << MyBirthday.month << endl;
//	cout << MyBirthday.year << endl;
//	cout << MyBirthday.year + MyBirthday.day << endl;
//
//	date yourBirthday;
//	cin >> yourBirthday.day;
//	cout << yourBirthday.day;
//	cout << endl;
//
//	cout << sizeof(date);
//	cout << endl;
//
//	Fio stud = { "test", 1, 2005, 12 };
//	cout << stud.Fio << endl;
//	cout << stud.id << endl;
//	cout << stud.qwe.day << endl;
//	cout << stud.zxc.day << endl;
//
//}

//struct films
//{
//
//	string name_film;
//	char dir[30];
//	string ganre;
//	double rate;
//	int praice;
//
//};
//
//void show(films kino3)
//{
//	cout << kino3.praice << endl;
//	cout << kino3.ganre << endl;
//	cout << kino3.dir<< endl;
//	cout << kino3.rate << endl;
//	cout << kino3.name_film << endl;
//}
//
//films put()
//{
//	films cinema;
//	cout << "film" << endl;
//	cin >> cinema.name_film;
//	cout << "janr" << endl;
//	cin >> cinema.ganre;
//	cout << "reiting" << endl;
//	cin >> cinema.rate;
//	cout << "chena" << endl;
//	cin >> cinema.praice;
//	cout << "rejiser" << endl;
//	cin >> cinema.dir;
//	return cinema;
//}

//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	films kino1 = { "биба", "боба","криминал",10,500 };
//	films* p = nullptr;
//
//	films kino2;
//
//	show(kino1);
//
//	kino2 = put();
//	show(kino2);
//
//	//cout <<"Название "<< kino1.name_film << endl;
//	//cout << "Режиссер " << kino1.dir << endl;
//	//cout << "Жанр "<< kino1.ganre << endl;
//	//cout << "Рейтинг 10 из "<< kino1.rate << endl;
//	//cout <<"Цена " << kino1.praice << endl;
//	//cout << endl;
//
//	//cout << kino1.praice << endl;
//	//cout << endl;
//
//
//	//p = &kino1;
//	//
//
//	//cout << p->praice << endl;
//	//cout << p->rate << endl;
//	//cout << p->ganre << endl;
//	//cout << endl;
//
//	//kino2 = kino1;
//
//	//cout << kino2.praice << endl;
//	//cout << kino2.name_film << endl;
//}

//struct Train
//{
//	int numbr;
//	char path[10];
//	int hour;
//	int min;
//};
//
//
//int main()
//{
//	setlocale(LC_ALL, "RUS");
//	const int N = 1;
//	int time_h, time_m;
//
//	cout << "Vvedite vremya (chas/min)" << endl;
//	cin >> time_h >> time_m;
//	cout << "Vashe vremia" << time_h << "chasov"
//		<< time_m << " minyt" << endl;
//
//
//
//	Train trains[N];
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << "Введите пунк назначения ";
//		cin >> trains[i].path;
//
//		cout << "Введите номер поезда ";
//		cin >> trains[i].numbr;
//
//		cout << "Введите вермя отправления ";
//		cin >> trains[i].hour;
//
//		cout << "Введите длительность поездки ";
//		cin >> trains[i].min;
//	}
//
//	int k = 0;
//	for (int i = 0; i < N; ++i)
//	{
//		if ((time_h < trains[i].hour) || (time_h==trains[i].hour )&& (time_m<trains[i].min))
//		{
//			cout << "sled poezd otprawitsa cerez" << trains[i].numbr << "c vremenem" << trains[i].hour
//				<< trains[i].min << endl;
//			k++;
//		}
//		if (k == 0)
//		{
//			cout << "net poezdow" << endl;
//		}
//	}
//
//	for (int i = 0; i < N; ++i)
//	{
//		cout << trains[i].path << endl;
//		cout << trains[i].hour << endl;
//		cout << trains[i].min << endl;
//		cout << trains[i].numbr << endl;
//	}
//
//
//}


struct zxcv
{
    int z;
    int x;
    int c;
    int v;
};

int main()
{
    srand(time(NULL));

    const int rows = 10, cols = 4;

    int arr[rows][cols];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            arr[i][j] = (rand() % 30 + 15 / (rand() % 1 + 1));
        }
    }
    for (int i = 0; i < rows; ++i)
    {
        cout << "|";
        for (int j = 0; j < cols; ++j)
        {
            cout << arr[i][j] << "|";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols - 3; ++j)
        {
            zxcv A = { arr[i][0] };
            cout << A.z << endl;
            break;
        }

    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols - 3; ++j)
        {
            zxcv b = { arr[i][1] };
            cout << b.x << endl;
            //cout << b.x << endl;
        }
    }



}

