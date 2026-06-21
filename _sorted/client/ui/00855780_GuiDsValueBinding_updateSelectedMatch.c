// addr: 0x00855780
// name: GuiDsValueBinding_updateSelectedMatch
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsValueBinding_updateSelectedMatch(void * this) */

void __fastcall GuiDsValueBinding_updateSelectedMatch(void *this)

{
  int iVar1;
  
                    /* Casts the bound data source to GuiDsValue and sets a boolean UI value
                       depending on whether its current object pointer equals this+0x1c. Used for
                       selected-value matching. */
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = FUN_00d8d382(*(int *)((int)this + 0x18),0,&GuiDataSource::RTTI_Type_Descriptor,
                         &GuiDsValue::RTTI_Type_Descriptor,0);
    if (iVar1 == 0) {
      return;
    }
    if (((byte)*(undefined4 *)(iVar1 + 0x4c) & 6) == 2) {
      iVar1 = *(int *)(iVar1 + 0x50);
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == *(int *)((int)this + 0x1c)) {
      FUN_006309ea(1,0);
      return;
    }
  }
  FUN_006309ea(0,0);
  return;
}

