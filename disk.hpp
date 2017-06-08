#ifndef _DISK_HPP_
#define _DISK_HPP_

#define HBUF_NUM 100
#define TOTAL_ZONE_NUM 30000

#include "global.hpp"

/* This class is the simulated disk. Will later be replaced by the
 * real disk. 
 */
class Disk {
private:
	size_t total_zone_num;
	size_t hbuf_num;
	vector<int> wp;
	vector<int> hwp; /*hbuf write pointers */
public:
	Disk();
	~Disk();
};


#endif
