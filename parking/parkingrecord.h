// Project: Parking Application
// Author: Ricky Rambo
// Last Modified: 2/19/2016
// Sprint: 1

#ifndef PARKINGRECORD_H
#define PARKINGRECORD_H

#include <QString>
#include <string>
using namespace std;

class ParkingRecord
{
public:
    ParkingRecord(string lotName, string aisleLetter, string aisleNumber, string floorLevel);
    ParkingRecord();

    QString getLotName();
    QString getAisleLetter();
    QString getAisleNumber();
    QString getFloorLevel();
    string getAllInfo();
    string getLocation();

private:
    string m_lotName;
    string m_aisleLetter;
    string m_aisleNumber;
    string m_floorLevel;
};

#endif // PARKINGRECORD_H
