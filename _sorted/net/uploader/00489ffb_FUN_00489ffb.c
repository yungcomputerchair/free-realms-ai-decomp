// addr: 0x00489ffb
// name: FUN_00489ffb
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00489ffb(void * this, char flags_) */

void * __thiscall FUN_00489ffb(void *this,char flags_)

{
                    /* Destructor/deleting-destructor pattern that releases a reference-counted
                       member at offset 0x10 and optionally frees this. Specific class is unknown.
                        */
  if (*(int **)((int)this + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x10) + 0x10))(0);
  }
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

