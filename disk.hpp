#ifndef _DISK_HPP_
#define _DISK_HPP_

/* This class is the simulated disk. Will later be replaced by the
 * real disk. 
 */
class Disk {
private:
	size_t total_zone_num;
	size_t hbuf_num;
public:
	Disk(size_t);
	~Disk();
};


#endif
