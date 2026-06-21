// addr: 0x004e6658
// name: FUN_004e6658
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_004e6658(void * this, char flags_) */

void * __thiscall FUN_004e6658(void *this,char flags_)

{
                    /* Deleting-destructor pattern for a bitflag-controlled resource; if selected
                       bits are set it runs cleanup, then optionally frees this. Specific class is
                       unknown. */
  if ((*(uint *)this & 0x24924) != 0) {
    FUN_004d93a3();
  }
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

