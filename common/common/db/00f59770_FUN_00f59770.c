// addr: 0x00f59770
// name: FUN_00f59770
// subsystem: common/common/db
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00f59770(void * this, void * buffer, uint byteCount_) */

void __thiscall FUN_00f59770(void *this,void *buffer,uint byteCount_)

{
                    /* Writes one byteCount-sized item from buffer to the FILE stored at this+4. */
  _fwrite(buffer,byteCount_,1,*(void **)((int)this + 4));
  return;
}

