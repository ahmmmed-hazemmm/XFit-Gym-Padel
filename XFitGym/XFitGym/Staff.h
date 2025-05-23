#pragma once
#include "User.h"
#include<map>
class Staff : public User
{
public:
	QString role;
	
	static map<QString, Staff> staffData;
	Staff();
	Staff(QString id, QString email, QString name, QString DateOFBirth, QString role);
	void LoadStaffData();
	void SaveStaffData();

};

