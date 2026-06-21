// addr: 0x013005f0
// name: StdStringVector_dtor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdStringVector_dtor(void * this, int flags) */

void * __thiscall StdStringVector_dtor(void *this,int flags)

{
                    /* test comment */
  if (*(void **)((int)this + 4) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 4),*(void **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 4));
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

