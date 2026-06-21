// addr: 0x0143c2c0
// name: Engine_ViewBase_deletingDtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_ViewBase_deletingDtor(void * this, int flags) */

void * __thiscall Engine_ViewBase_deletingDtor(void *this,int flags)

{
                    /* Deleting destructor wrapper around FUN_0143c1e0 for the common view base. It
                       invokes the real destructor and conditionally frees this when flags&1 is set.
                        */
  Engine_SortableView_dtor(this);
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

