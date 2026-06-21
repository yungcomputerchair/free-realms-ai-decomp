// addr: 0x0082edd0
// name: SoeUtil_List_GCtrlPtr_clear
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SoeUtil_List_GCtrlPtr_clear(void * this) */

void __fastcall SoeUtil_List_GCtrlPtr_clear(void *this)

{
                    /* Clears a SoeUtil::List<GCtrl*> after installing the list vtable. This is
                       generic list cleanup for GCtrl pointers. */
  *(undefined ***)this = SoeUtil::List<GCtrl*,-1>::vftable;
  FUN_0082bc80();
  return;
}

