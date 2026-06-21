// addr: 0x00e83c40
// name: FileHandleHolder_flushFile
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FileHandleHolder_flushFile(void * this) */

void __fastcall FileHandleHolder_flushFile(void *this)

{
                    /* If the object field at offset 8 is non-null, flushes it as a FILE pointer.
                       Evidence is the direct _fflush call on *(this+8); class identity is not
                       present. */
  if (*(void **)((int)this + 8) != (void *)0x0) {
    _fflush(*(void **)((int)this + 8));
  }
  return;
}

