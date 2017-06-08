#include <iostream>
#include "disk.hpp"

using namespace std;


Disk::Disk (size_t hn) {
	hbuf_num = hn;
	cout << "Disk::Disk" << hbuf_num << "\n";
}


Disk::~Disk () {
	cout << "Disk::~Disk" << hbuf_num << "\n";
}
