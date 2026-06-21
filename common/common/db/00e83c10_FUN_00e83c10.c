// addr: 0x00e83c10
// name: FUN_00e83c10
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint FUN_00e83c10(void * this, void * buffer, uint elementSize_, uint
   elementCount_) */

uint __thiscall FUN_00e83c10(void *this,void *buffer,uint elementSize_,uint elementCount_)

{
  size_t sVar1;
  
                    /* Writes elementCount elements from buffer to the FILE stored at this+8 when
                       that handle is non-null; otherwise returns 0. */
  if (*(void **)((int)this + 8) != (void *)0x0) {
    sVar1 = _fwrite(buffer,elementSize_,elementCount_,*(void **)((int)this + 8));
    return sVar1;
  }
  return 0;
}

