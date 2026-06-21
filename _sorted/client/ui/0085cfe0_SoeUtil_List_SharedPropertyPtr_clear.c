// addr: 0x0085cfe0
// name: SoeUtil_List_SharedPropertyPtr_clear
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoeUtil_List_SharedPropertyPtr_clear(void * this) */

void __fastcall SoeUtil_List_SharedPropertyPtr_clear(void *this)

{
                    /* Clears a
                       SoeUtil::List<GuiPropertyDataSource::PropertySetFilter::SharedProperty*>
                       after installing its vtable. Generic list cleanup for property filters. */
  *(undefined ***)this =
       SoeUtil::List<GuiPropertyDataSource::PropertySetFilter::SharedProperty*,-1>::vftable;
  FUN_0085ce40();
  return;
}

