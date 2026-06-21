// addr: 0x00f567e0
// name: Chess_initBook
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Chess_initBook(void * this, char * path) */

bool __thiscall Chess::Chess_initBook(Chess *this,char *path)

{
  FILE *pFVar1;
  
                    /* Closes any existing chess book file and opens a new book path in binary-read
                       mode, returning success. Evidence: existing demangled comment says
                       Chess::init_book, uses this+0x1288 FILE*, fclose, fopen(path,'rb'). */
  if (*(FILE **)(this + 0x1288) != (FILE *)0x0) {
    _fclose(*(FILE **)(this + 0x1288));
    *(undefined4 *)(this + 0x1288) = 0;
  }
  if (path == (char *)0x0) {
    return false;
  }
  pFVar1 = _fopen(path,"rb");
  *(FILE **)(this + 0x1288) = pFVar1;
  return pFVar1 != (FILE *)0x0;
}

