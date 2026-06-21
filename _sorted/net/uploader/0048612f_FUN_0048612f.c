// addr: 0x0048612f
// name: FUN_0048612f
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_0048612f(void * this, char flags_) */

void * __thiscall FUN_0048612f(void *this,char flags_)

{
                    /* Destructor/deleting-destructor pattern for an object with a reference-counted
                       member at offset 0x2c; releases the member and optionally frees this.
                       Specific class is unknown. */
  if (*(int **)((int)this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x10))(0);
  }
  *(int *)((int)this + 0x2c) = 0;
  if (*(int *)((int)this + 0x2c) != 0) {
    (**(code **)(**(int **)((int)this + 0x2c) + 0x10))(0);
  }
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

