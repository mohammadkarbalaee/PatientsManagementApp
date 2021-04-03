#include <iostream>
#include <iomanip>
#include <string> 
#include <fstream>
using namespace std;
//-----------------------------------------------------------------
int main()
{
   int NumberOfPatients;
   cout << "Enter the Number Of Patients: " << endl;
   cin >> NumberOfPatients;
   //----------------------------------------------------------
   ofstream IDnumFile("ID.txt",ios::out);
   ofstream FirstNameFile("FirstName.txt",ios::out);
   ofstream LastNameFile("LastName.txt",ios::out);
   ofstream FathersNameFile("FathersName.txt",ios::out);
   ofstream PhoneNumberFile("PhoneNumber.txt",ios::out);
   ofstream CityFile("City.txt",ios::out);
   ofstream StreetFile("Street.txt",ios::out);
   ofstream ZipcodeFile("Zipcode.txt",ios::out);
   ofstream InitialDiagnosisFile("InitialDiagnosis.txt",ios::out);
   ofstream FinalDiagnosisFile("FinalDiagnosis.txt",ios::out);
   ofstream DiagnosisCodeFile("DiagnosisCode.txt",ios::out);
   ofstream DayOfReceptionFile("DayOfReception.txt",ios::out);
   ofstream MounthOfReceptionFile("MounthOfReception.txt",ios::out);
   ofstream YearOfReceptionFile("YearOfReception.txt",ios::out);
   ofstream DayOfReleaseFile("DayOfRelease.txt",ios::out);
   ofstream MounthOfReleaseFile("MounthOfRelease.txt",ios::out);
   ofstream YearOfReleaseFile("YearOfRelease.txt",ios::out);
   //---------------------------------------------------------------------------------
   for(int i = 0;i < NumberOfPatients;i++)
   {
       string temp;
       cout << "Please Enter the patient's ID: " << endl;
       cin >> temp;
       IDnumFile << temp << "\n";
       cout << "Please Enter the patient's first name: " << endl;
       cin >> temp; 
       FirstNameFile << temp << "\n";
       cout << "Please Enter the patient's last name: " << endl;
       cin >> temp;
       LastNameFile << temp << "\n";
       cout << "Please Enter the patient's Father's name: " << endl;
       cin >> temp;
       FathersNameFile << temp << "\n";
       cout << "Please Enter the patient's phone No: " << endl;
       cin >> temp;
       PhoneNumberFile << temp << "\n";
       cout << "Please Enter the patient's City: " << endl;
       cin >> temp;
       CityFile << temp << "\n";
       cout << "Please Enter the patient's Street: " << endl;
       cin >> temp;
       StreetFile << temp << "\n";
       cout << "Please Enter the patient's zipcode: " << endl;
       cin >> temp;
       ZipcodeFile << temp << "\n";
       cout << "Please Enter the patient's initial diagnosis: " << endl;
       cin >> temp;
       InitialDiagnosisFile << temp << "\n";
       cout << "Please Enter the patient's final diagnosis: " << endl;
       cin >> temp;
       FinalDiagnosisFile << temp << "\n";
       cout << "Please Enter the patient's diagnosis' code: " << endl;
       cin >> temp;
       DiagnosisCodeFile << temp << "\n";
       cout << "Please Enter the patient's day of reception: " << endl;
       cin >> temp;
       DayOfReceptionFile << temp << "\n";
       cout << "Please Enter the patient's mounth of reception: " << endl;
       cin >> temp;
       MounthOfReceptionFile << temp << "\n";
       cout << "Please Enter the patient's year of reception: " << endl;
       cin >> temp;
       YearOfReceptionFile << temp << "\n";
       cout << "Please Enter the patient's day of release: " << endl;
       cin >> temp;
       DayOfReleaseFile << temp << "\n";
       cout << "Please Enter the patient's mounth of release: " << endl;
       cin >> temp;
       MounthOfReleaseFile << temp << "\n";
       cout << "Please Enter the patient's year of release: " << endl;
       cin >> temp;
       YearOfReleaseFile << temp << "\n";
   }
   //------------------------------------------------------------
    IDnumFile.close();
    FirstNameFile.close();
    LastNameFile.close();
    FathersNameFile.close();
    PhoneNumberFile.close();
    CityFile.close();
    StreetFile.close();
    ZipcodeFile.close();
    InitialDiagnosisFile.close();
    FinalDiagnosisFile.close();
    DiagnosisCodeFile.close();
    DayOfReceptionFile.close();
    MounthOfReceptionFile.close();
    YearOfReceptionFile.close();
    DayOfReleaseFile.close();
    MounthOfReleaseFile.close();
    YearOfReleaseFile.close();
   //----------------------------------------------------------
   ifstream IDnumFileIN("ID.txt",ios::in);
   ifstream FirstNameFileIN("FirstName.txt",ios::in);
   ifstream LastNameFileIN("LastName.txt",ios::in);
   ifstream FathersNameFileIN("FathersName.txt",ios::in);
   ifstream PhoneNumberFileIN("PhoneNumber.txt",ios::in);
   ifstream CityFileIN("City.txt",ios::in);
   ifstream StreetFileIN("Street.txt",ios::in);
   ifstream ZipcodeFileIN("Zipcode.txt",ios::in);
   ifstream InitialDiagnosisFileIN("InitialDiagnosis.txt",ios::in);
   ifstream FinalDiagnosisFileIN("FinalDiagnosis.txt",ios::in);
   ifstream DiagnosisCodeFileIN("DiagnosisCode.txt",ios::in);
   ifstream DayOfReceptionFileIN("DayOfReception.txt",ios::in);
   ifstream MounthOfReceptionFileIN("MounthOfReception.txt",ios::in);
   ifstream YearOfReceptionFileIN("YearOfReception.txt",ios::in);
   ifstream DayOfReleaseFileIN("DayOfRelease.txt",ios::in);
   ifstream MounthOfReleaseFileIN("MounthOfRelease.txt",ios::in);
   ifstream YearOfReleaseFileIN("YearOfRelease.txt",ios::in);
   //-----------------------------------------------------------
   string temp;
   long p1 = 1,p2 = 1,p3 = 1,p4 = 1,p5 = 1,p6 = 1,p7 = 1,p8 = 1,p9 = 1,p10 = 1,p11 = 1,p12 = 1,p13 = 1,p14 = 1,p15 = 1,p16 = 1,p17 = 1;
   for(int IndexOfPatient = 1;IndexOfPatient <= NumberOfPatients ;IndexOfPatient++)
   {
   cout << "Patient: " << IndexOfPatient << endl;
   while(getline(IDnumFileIN.seekg(p17-1),temp)) {cout << "ID No: " << temp << endl; p17 =IDnumFileIN.tellg();break;}
   cout << "p17: " << p17 <<endl;
   while(getline(FirstNameFileIN.seekg(p1-1),temp)) {cout << "First Name: " << temp << endl; p1 =FirstNameFileIN.tellg();break;}
   while(getline(LastNameFileIN.seekg(p2-1),temp)) {cout << "Last Name: " << temp << endl; p2 =LastNameFileIN.tellg();break;}
   while(getline(FathersNameFileIN.seekg(p3-1),temp)) {cout << "Father's Name: " << temp << endl; p3 =FathersNameFileIN.tellg();break;}
   while(getline(PhoneNumberFileIN.seekg(p4-1),temp)) {cout << "Phone No: " << temp << endl; p4 =PhoneNumberFileIN.tellg();break;}
   while(getline(CityFileIN.seekg(p5-1),temp)) {cout << "City: " << temp << endl; p5 =CityFileIN.tellg();break;}
   while(getline(StreetFileIN.seekg(p6-1),temp)) {cout << "Street: " << temp << endl; p6 =StreetFileIN.tellg();break;}
   while(getline(ZipcodeFileIN.seekg(p7-1),temp)) {cout << "Zipcode: " << temp << endl; p7 =ZipcodeFileIN.tellg();break;}
   while(getline(InitialDiagnosisFileIN.seekg(p8-1),temp)) {cout << "Initial Diagnosis: " << temp << endl; p8 =InitialDiagnosisFileIN.tellg();break;}
   while(getline(FinalDiagnosisFileIN.seekg(p9-1),temp)) {cout << "Final Diagnosis: " << temp << endl; p9 =FinalDiagnosisFileIN.tellg();break;}
   while(getline(DiagnosisCodeFileIN.seekg(p10-1),temp)) {cout << "Diagnosis code: " << temp << endl; p10 =DiagnosisCodeFileIN.tellg();break;}
   while(getline(DayOfReceptionFileIN.seekg(p11-1),temp)) {cout << "Day Of Reception: " << temp << endl; p11 =DayOfReceptionFileIN.tellg();break;}
   while(getline(MounthOfReceptionFileIN.seekg(p12-1),temp)) {cout << "Mounth Of Reception: " << temp << endl; p12 =MounthOfReceptionFileIN.tellg();break;}
   while(getline(YearOfReceptionFileIN.seekg(p13-1),temp)) {cout << "Year Of Reception: " << temp << endl; p13 =YearOfReceptionFileIN.tellg();break;}
   while(getline(DayOfReleaseFileIN.seekg(p14-1),temp)) {cout << "Day Of Release: " << temp << endl; p14 =DayOfReleaseFileIN.tellg();break;}
   while(getline(MounthOfReleaseFileIN.seekg(p15-1),temp)) {cout << "Mounth Of Release: " << temp << endl; p15 =MounthOfReleaseFileIN.tellg();break;}
   while(getline(YearOfReleaseFileIN.seekg(p16-1),temp)) {cout << "Year Of Release: " << temp << endl; p16 =YearOfReleaseFileIN.tellg();break;}
   cout << "*********************************" << endl;
   }
   //--------------------------------------------------------------
   int end;
   cout << "Enter 0 if you want the program to finish" << endl;
   cin >> end;
   if(end == 0) {return 0;}
   else {cout << "please run the program again if you want it to work with a new database";}
}