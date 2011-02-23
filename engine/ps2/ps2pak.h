/////////////////////////////////////////////////////////////////////////////
//
// ps2pak - virtual file handling for bor.pak
//
/////////////////////////////////////////////////////////////////////////////

#ifndef PS2PAK_H
#define PS2PAK_H

/////////////////////////////////////////////////////////////////////////////

void ps2pak_init(void);

int ps2open(const char *filename, int mode);
int ps2read(int fd, void *buf, int len);
void ps2close(int fd);
int ps2lseek(int fd, int n, int whence);

/////////////////////////////////////////////////////////////////////////////

#endif

