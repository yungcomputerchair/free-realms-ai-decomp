// addr: 0x008556b0
// name: GuiDsValueBinding_pushObjectValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsValueBinding_pushObjectValue(void * this) */

void __fastcall GuiDsValueBinding_pushObjectValue(void *this)

{
  int iVar1;
  int iVar2;
  
                    /* Casts the bound data source at +0x180 to GuiDsValue and writes the stored
                       object pointer at +0x184 into it when editable, notifying observers if the
                       value changes. Wrapper class is unknown. */
  if (((*(int *)((int)this + 0x180) != 0) &&
      (iVar2 = FUN_00d8d382(*(int *)((int)this + 0x180),0,&GuiDataSource::RTTI_Type_Descriptor,
                            &GuiDsValue::RTTI_Type_Descriptor,0), iVar2 != 0)) &&
     (iVar1 = *(int *)((int)this + 0x184), *(int *)(iVar2 + 0x48) == 0)) {
    if (((byte)*(undefined4 *)(iVar2 + 0x4c) & 6) != 2) {
      FUN_00821940();
      *(uint *)(iVar2 + 0x4c) = *(uint *)(iVar2 + 0x4c) & 0xfffffffb | 2;
      *(int *)(iVar2 + 0x50) = iVar1;
      FUN_00821dc0();
      return;
    }
    if (*(int *)(iVar2 + 0x50) != iVar1) {
      *(int *)(iVar2 + 0x50) = iVar1;
      FUN_00821dc0();
      return;
    }
  }
  return;
}

