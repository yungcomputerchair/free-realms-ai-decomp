// addr: 0x013ef170
// name: Exception_setLineNumber
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Exception_setLineNumber(void * this, int line_) */

void __thiscall Exception_setLineNumber(void *this,int line_)

{
                    /* Stores the exception line number at offset +0x3c. This is the setter
                       counterpart to the line-number getter used by Game error logging. */
  *(int *)((int)this + 0x3c) = line_;
  return;
}

