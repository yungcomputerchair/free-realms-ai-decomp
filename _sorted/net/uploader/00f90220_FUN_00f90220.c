// addr: 0x00f90220
// name: FUN_00f90220
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00f90220(void ** holderSlot, void * newHolder) */

void __thiscall FUN_00f90220(void *this,void **holderSlot,void *newHolder)

{
  undefined4 *_Memory;
  
                    /* Replaces an allocated library-handle holder, unloading/freeing the old holder
                       before storing the new pointer. Likely SSL dynamic loader support but class
                       evidence is absent. */
  _Memory = *(undefined4 **)this;
  if (_Memory != (undefined4 *)0x0) {
    if ((HMODULE)*_Memory != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*_Memory);
      *_Memory = 0;
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(void ***)this = holderSlot;
  return;
}

