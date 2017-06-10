#include "global.hpp"
#include "policy.hpp"
#include "disk.hpp"


Policy Policy::GetPolicy() {
	return policy;
}

zone_t Policy::PickZone(ioreq req) {
	zone_t zone = req.off / ZONE_SIZE;
	return zone % HBUF_NUM;
}
