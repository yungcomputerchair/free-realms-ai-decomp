// addr: 0x008a6360
// name: FUN_008a6360
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_008a6360(void * this, char flags_) */

void * __thiscall FUN_008a6360(void *this,char flags_)

{
                    /* Deleting-destructor wrapper: calls FUN_0097a460 cleanup and optionally frees
                       this. Specific class is unknown. */
  destroyPointerAndIntMapHolder(this);
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

