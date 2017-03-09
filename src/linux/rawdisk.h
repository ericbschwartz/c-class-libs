// rawdisk.h
// class supporting "raw" access to disk, via:
//   1) block device (with kernel buffers, so not really "raw")
//   2) raw device (tradition unix 'raw', i.e. char device bound to block device,
//                  starting somewhere in 2.4 but supposedly depreciated in 2.6)
//   3) block device w/ O_DIRECT (supposed to be better than 'raw' device access
// (not currently open source)
