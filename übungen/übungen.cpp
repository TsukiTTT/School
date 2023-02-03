// übungen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <iostream>
#include <algorithm>
using namespace std;

//
//
//int BiggestNumber(int args[]) {
//	int largest = 0;
//	for (size_t i = 0; i < sizeof(args) / sizeof(args[0]); i++)
//	{
//		if (args[i] > largest) {
//			largest = args[i];
//		}
//	}
//	return largest;
//}

//int CalculateBiggestNumber() {
//	int a, b, c;
//
//	cin >> a;
//	cin >> b;
//	cin >> c;
//
//	cout << "Calculater not working!";
//}

/// <summary>
/// Calculate ur Exam
/// </summary>
/// <param name="Points"> Points the Student got</param>
/// <param name="MaxPoints"> Points the student should Get</param>
/// <returns>Returns the Grade</returns>
char CalculateExam(double Points, double MaxPoints) {

	double percentage = (Points / MaxPoints) * 100;

	if (percentage >= 92) {
		return '1';
	}
	else if (percentage >= 81) {
		return '2';
	}
	else if (percentage >= 67) {
		return '3';
	}
	else if (percentage >= 50) {
		return '4';
	}
	else if (percentage >= 30) {
		return '5';
	}else {
		return '6';
	}
}


/// <summary>
/// Task for Calculated Exam
/// </summary>
void Task_CalculateExam() {
	cout << "Start Exam-Calculator\n\n";

	double Points;
	cout << "Points: ";
	cin >> Points;

	double maxPoints;
	cout << "Max Points: ";
	cin >> maxPoints;

	char grade = CalculateExam(Points, maxPoints);
	cout << "Grade: " << grade << "\n\n";

	cout << "End Exam-Calculator\n\n";
}

void NumberIteration(double min, double max, double step) {
	double itertion = min;
	while (itertion <= max) {
		cout << itertion;
		cout << "\n";
		itertion += step;
	}
	cout << "\n";
}

void Task_NumberIteration() {
	NumberIteration(0, 20, 0.00001);
}

int main()
{

	cout << "Start Program!\n\n";

	Task_NumberIteration();

	cout << "End Program!\n";

}






// t s u k i  -  k a m i


































// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
