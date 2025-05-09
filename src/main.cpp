/*
Universidad Amerike
Author: José Sierra
Pratice#:31
Date: 02/05/25
Description: This program shows you a Movies Catalog and verify if the user can watch these movies
*/

#include <iostream>
#include <limits>
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

void AgeVerification(int Age, string Movie)
{
    if (Movie.length() == Movie1.GetMovieName().length() && Age < Movie1.GetClasification())
    {
        cout << "You are not old enough to see this movie\n";
    }
    if (Movie.length() == Movie2.GetMovieName().length() && Age < Movie2.GetClasification())
    {
        cout << "You are not old enough to see this movie\n";
    }
    if (Movie.length() == Movie3.GetMovieName().length() && Age < Movie3.GetClasification())
    {
        cout << "You are not old enough to see this movie\n";
    }
    else
    {
        cout << "You can see this movie\n";
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
    string Movie;
    
    Movie1.SetMovieName("Titanic");
    Movie1.SetClasification(18);
    Movie1.SetDuration(1.5);
    Movie1.SetSinopsis("The boat who crashed with an iceberg");
    Movie2.SetMovieName("Hachiko");
    Movie2.SetClasification(15);
    Movie2.SetDuration(2);
    Movie2.SetSinopsis("The Royal dog");
    Movie3.SetMovieName("TheBall");
    Movie3.SetClasification(18);
    Movie3.SetDuration(3);
    Movie3.SetSinopsis("The ball that rolls");    
    GetCatalog();
    cout << "Type the movie that you would you like to see\n";
        
    while (true)
    {

        cin >> Movie;

        
        if (Movie.length() == Movie1.GetMovieName().length())
        {
            break;
        }
        else if (Movie.length() == Movie2.GetMovieName().length())
        {
            break;
        }
        else if (Movie.length() == Movie3.GetMovieName().length())
        {
            break;
        }
        else if (Movie.length() != Movie1.GetMovieName().length() || Movie.length() != Movie2.GetMovieName().length() || Movie.length() != Movie3.GetMovieName().length())
        {
            cout << "Type the movie that you would you like to see\n";
            cin.clear();
            cin >> Movie;
            system("cls");
            cout << "That movie is not inside of our catalog type again\n";
        }
    }
    cout << "Input your Age\n";
    while (true)
    {
        cin.ignore();
        cin >> Age;

        if (cin.fail())
        {
            cin.clear();cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            system("cls");
            cout << "That is not a number\n";
        }
        else
        {
            break;
        }
    }
    AgeVerification(Age, Movie);
    
    
    
    
}