/*
Universidad Amerike
Author: José Sierra
Pratice#:31
Date: 02/05/25
Description: This program shows you a Movies Catalog and verify if the user can watch these movies
*/

#include <iostream>
using namespace std;

class Movies
{
private:
    string Name;
    int Clasification;
    string Sinopsis;
    float duration;

public:

void SetMovieName(string Movie)
{
    Name = Movie;
}

string GetMovieName()
{
    return Name;
}

void SetClasification(int AgeRate)
{
    Clasification = AgeRate;
}

int GetClasification()
{
    return Clasification;
}

void SetSinopsis(string sinopsis)
{
    Sinopsis = sinopsis;
}

string GetSinopsis()
{
    return Sinopsis;
}

void SetDuration(float Time)
{
    duration = Time;
}

float GetDuration()
{
    return duration;
}


};

Movies Movie1;
Movies Movie2;
Movies Movie3;
string MoviesList[3] = {Movie1.GetMovieName(), Movie2.GetMovieName(), Movie3.GetMovieName()};

void GetMovies(string List[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << List[i] << "\n";
    }
    
}

void AgeVerification(int Age)
{
    if (Age < 15)
    {
        cout << "You are not old enough to see these movies\n";
    }
    else if (Age >= 15)
    {
        cout << "You can see these movies\n";
    }
    
}

void Separations()
{
    cout << "------------------------------------------\n";
}

void GetCatalog()
{
    cout << Movie1.GetMovieName() << "\n";
    cout << "Clasification: " << Movie1.GetClasification() << "\n";
    cout << "Duration: " << Movie1.GetDuration() << "\n";
    cout << "Sinopsis: " << Movie1.GetSinopsis() << "\n";
    cout << "You will cry with this movie\n";
    Separations();
    cout << Movie2.GetMovieName() << "\n";
    cout << "Clasification: " << Movie2.GetClasification() << "\n";
    cout << "Duration: " << Movie2.GetDuration() << "\n";
    cout << "Sinopsis: " << Movie2.GetSinopsis() << "\n";
    cout << "You will cry times 2 with this movie\n";
    Separations();
    cout << Movie3.GetMovieName() << "\n";
    cout << "Clasification: " << Movie3.GetClasification() << "\n";
    cout << "Duration: " << Movie3.GetDuration() << "\n";
    cout << "Sinopsis: " << Movie3.GetSinopsis() << "\n";
    cout << "You will die with this movie\n";
    Separations();
    
}


int main()
{
    int Age;
    
    Movie1.SetMovieName("Titanic");
    Movie1.SetClasification(18);
    Movie1.SetDuration(1.5);
    Movie1.SetSinopsis("The boat who crashed with an iceberg");
    Movie2.SetMovieName("Hachiko");
    Movie2.SetClasification(15);
    Movie2.SetDuration(2);
    Movie2.SetSinopsis("The Royal dog");
    Movie3.SetMovieName("The Ball");
    Movie3.SetClasification(18);
    Movie3.SetDuration(3);
    Movie3.SetSinopsis("The ball that rolls");    
    GetCatalog();
    cout << "Input your Age\n";
    cin >> Age;
    AgeVerification(Age);
}