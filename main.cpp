#include <iostream>
#include "global.hpp"
#include "disk.hpp"
#include "stats.hpp"
#include "tracereader.hpp"
using namespace std;

int main(){
	Disk d;
	Stats stats;
	cout << "hello world\n";
	TraceReader tr("proj_2_long.csv");
	ioreq req;
	while(tr.next(req)) {
		tr.next(req);
		cout << req.off << " " << req.len << "\n";
		d.write(req);
	}
	return 0;
}
