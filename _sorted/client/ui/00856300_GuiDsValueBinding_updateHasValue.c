// addr: 0x00856300
// name: GuiDsValueBinding_updateHasValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsValueBinding_updateHasValue(void * this) */

void __fastcall GuiDsValueBinding_updateHasValue(void *this)

{
  int iVar1;
  
                    /* Casts the bound data source to GuiDsValue and sets a boolean UI value based
                       on whether the data-source value pointer is non-null. Clears the bool when
                       missing or not a value data source. */
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_006309ea(0,0);
  }
  else {
    iVar1 = FUN_00d8d382(*(int *)((int)this + 0x18),0,&GuiDataSource::RTTI_Type_Descriptor,
                         &GuiDsValue::RTTI_Type_Descriptor);
    if (iVar1 != 0) {
      if (((byte)*(undefined4 *)(iVar1 + 0x4c) & 6) == 2) {
        FUN_006309ea(*(int *)(iVar1 + 0x50) != 0,0);
        return;
      }
      FUN_006309ea(0,0);
      return;
    }
  }
  return;
}

