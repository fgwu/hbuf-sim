#include <iostream>
#include "disk.hpp"


Disk::Disk () {
	hbuf_num = HBUF_NUM;
	total_zone_num = TOTAL_ZONE_NUM;
	wp.resize(TOTAL_ZONE_NUM, 0);
	hwp.resize(HBUF_NUM, 0);
	cout << "Disk::Disk" << " " <<  hbuf_num  << " " << total_zone_num << "\n";
}


Disk::~Disk () {
	cout << "Disk::~Disk" << hbuf_num << "\n";
}
