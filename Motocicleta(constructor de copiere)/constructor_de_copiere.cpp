#include <iostream>
using namespace std;

class Motocicleta
{
private:
	const char* _model;
	static int _nr_motociclete;

public:
	Motocicleta(const char* denumire_model)
	{
		_model= denumire_model;
		++_nr_motociclete;
	}

	Motocicleta(const Motocicleta& original)
	{
		cout << "Apel constructor copiere" << endl;
		_model=original._model;
		++_nr_motociclete;

	}

	void Info()
	{
		cout << "Model:" << _model << endl;
	}

	static void InfoToate()
	{
		cout << "Numar motociclete:" << _nr_motociclete << endl;
	}

};

int Motocicleta::_nr_motociclete=0;

int main()
{
	Motocicleta::InfoToate();
	Motocicleta oMoto("Yamaha");
	oMoto.Info();
	Motocicleta::InfoToate();
	Motocicleta duplicat(oMoto);
	duplicat.Info();
	Motocicleta::InfoToate();
	Motocicleta altDuplicat= oMoto;
	altDuplicat.Info();
	Motocicleta::InfoToate();
	getchar();
	return 0;

}
