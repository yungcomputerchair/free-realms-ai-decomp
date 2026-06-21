// addr: 0x0085cff0
// name: SoeUtil_List_SharedPropertyPtr_dtor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SoeUtil_List_SharedPropertyPtr_dtor(void * this, char flags_) */

void * __thiscall SoeUtil_List_SharedPropertyPtr_dtor(void *this,char flags_)

{
                    /* Destructor for
                       SoeUtil::List<GuiPropertyDataSource::PropertySetFilter::SharedProperty*>:
                       clears the list and frees the object when delete flag bit 0 is set. */
  *(undefined ***)this =
       SoeUtil::List<GuiPropertyDataSource::PropertySetFilter::SharedProperty*,-1>::vftable;
  FUN_0085ce40();
  if ((flags_ & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

