// addr: 0x0082ede0
// name: SoeUtil_List_GCtrlPtr_dtor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoeUtil_List_GCtrlPtr_dtor(void * this, char flags_) */

void * __thiscall SoeUtil_List_GCtrlPtr_dtor(void *this,char flags_)

{
                    /* Destructor for SoeUtil::List<GCtrl*>: installs the list vtable, clears all
                       nodes, and frees the list object when the delete flag is set. */
  *(undefined ***)this = SoeUtil::List<GCtrl*,-1>::vftable;
  FUN_0082bc80();
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

