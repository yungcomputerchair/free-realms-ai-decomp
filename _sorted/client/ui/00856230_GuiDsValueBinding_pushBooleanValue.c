// addr: 0x00856230
// name: GuiDsValueBinding_pushBooleanValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsValueBinding_pushBooleanValue(void * this) */

void __fastcall GuiDsValueBinding_pushBooleanValue(void *this)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* Casts the bound data source to GuiDsValue, computes a boolean value, stores
                       it into the data source when editable, and notifies observers on change.
                       Wrapper class is unknown. */
  if ((*(int *)((int)this + 0x180) != 0) &&
     (iVar2 = FUN_00d8d382(*(int *)((int)this + 0x180),0,&GuiDataSource::RTTI_Type_Descriptor,
                           &GuiDsValue::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    iVar3 = FUN_0060f7cb();
    uVar1 = (uint)(iVar3 != 0);
    if (*(int *)(iVar2 + 0x48) == 0) {
      if (((byte)*(undefined4 *)(iVar2 + 0x4c) & 6) != 2) {
        FUN_00821940();
        *(uint *)(iVar2 + 0x4c) = *(uint *)(iVar2 + 0x4c) & 0xfffffffb | 2;
        *(uint *)(iVar2 + 0x50) = uVar1;
        FUN_00821dc0();
        return;
      }
      if (*(uint *)(iVar2 + 0x50) != uVar1) {
        *(uint *)(iVar2 + 0x50) = uVar1;
        FUN_00821dc0();
        return;
      }
    }
  }
  return;
}

