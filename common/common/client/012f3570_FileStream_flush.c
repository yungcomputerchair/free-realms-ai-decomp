// addr: 0x012f3570
// name: FileStream_flush
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int FileStream_flush(int * this) */

int __fastcall FileStream_flush(int *this)

{
  int iVar1;
  
                    /* Flushes the FILE pointer stored at slot 0x13 after a virtual
                       pre-flush/seek-style call succeeds, returning -1 on fflush failure and 0
                       otherwise. Evidence is the direct _fflush of this[0x13], but no class strings
                       are present. */
  if (this[0x13] != 0) {
    iVar1 = (**(code **)(*this + 4))(0xffffffff);
    if (iVar1 != -1) {
      iVar1 = _fflush((void *)this[0x13]);
      if (iVar1 < 0) {
        return -1;
      }
    }
  }
  return 0;
}

