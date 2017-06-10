#include <iostream>
#include <string>
#include <sstream>
#include "global.hpp"
#include "disk.hpp"
#include "tracereader.hpp"

using namespace std;

TraceReader::TraceReader(string tf) {
	cout << "init tracereader " << tf << "\n";
	tracefile = tf;
	filestream.open(tf);
	if (filestream.fail()) {
		cout << "open " << tf <<  "failed!\n";
		exit(1);
	};
}

TraceReader::~TraceReader() {
	filestream.close();
}

bool TraceReader::next(ioreq& req) {
	string s;
	string Timestamp,Hostname,DiskNumber,Type,Offset,Size,ResponseTime;
	
	if (!getline(filestream, s)) return false;
	stringstream ss(s);

/*	cout << "<" <<  s << ">\n";*/

	getline(ss, Timestamp, ',');
	getline(ss, Hostname, ',');
	getline(ss, DiskNumber, ',');
	getline(ss, Type, ',');
	getline(ss, Offset, ',');
	getline(ss, Size, ',');
	getline(ss, ResponseTime, ',');
/*	cout << Timestamp << "\n";
	cout << Hostname << " ";
	cout << DiskNumber << " ";
	cout << Type << " ";
	cout << Offset << " ";
	cout << Size << " ";
	cout << ResponseTime << "\n";
*/
	req.off = stol(Offset);
	req.len = stol(Size);
	return true;
}
	
