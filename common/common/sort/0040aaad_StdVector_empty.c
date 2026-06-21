// addr: 0x0040aaad
// name: StdVector_empty
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StdVector_empty(void * thisObj) */

bool __fastcall StdVector_empty(void *thisObj)

{
  int iVar1;
  
                    /* Returns whether a standard vector has size zero by calling StdVector_size and
                       comparing to 0. Evidence is the single size call and equality check. */
  iVar1 = StdVector_size(thisObj);
  return (bool)('\x01' - (iVar1 != 0));
}

