#ifndef _TRACEREADER_HPP_
#define _TRACEREADER_HPP_

#include <fstream>

class TraceReader {
	string tracefile;
	ifstream filestream;
public:
	TraceReader(string);
	~TraceReader();
	bool next(ioreq&);
};

#endif
