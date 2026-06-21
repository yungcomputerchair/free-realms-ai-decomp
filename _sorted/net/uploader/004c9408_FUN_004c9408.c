// addr: 0x004c9408
// name: FUN_004c9408
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_004c9408(void * this, char flags_) */

void * __thiscall FUN_004c9408(void *this,char flags_)

{
                    /* Deleting-destructor pattern: invokes a virtual cleanup through the member at
                       offset 4, then optionally frees this. Specific class is unknown. */
  if (*(int *)((int)this + 4) != 0) {
    (**(code **)(**(int **)((int)this + 4) + 8))(this);
  }
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

