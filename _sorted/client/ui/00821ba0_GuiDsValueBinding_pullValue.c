// addr: 0x00821ba0
// name: GuiDsValueBinding_pullValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsValueBinding_pullValue(void * this) */

void __fastcall GuiDsValueBinding_pullValue(void *this)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  
                    /* Pulls the current value from a bound GuiDsValue into this binding, handling
                       integer/object, float, and indirect/string-like value states and notifying
                       when the cached value changes. Wrapper class is unknown. */
  if ((*(int *)((int)this + 0x18) != 0) &&
     (iVar2 = FUN_00d8d382(*(int *)((int)this + 0x18),0,&GuiDataSource::RTTI_Type_Descriptor,
                           &GuiDsValue::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    uVar4 = *(uint *)(iVar2 + 0x4c) & 6;
    if (uVar4 == 2) {
      iVar2 = *(int *)(iVar2 + 0x50);
      if (((byte)*(undefined4 *)((int)this + 0x1c) & 6) != 2) {
        FUN_00821940();
        *(int *)((int)this + 0x20) = iVar2;
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffb | 2;
        FUN_00821dc0();
        return;
      }
      if (*(int *)((int)this + 0x20) != iVar2) {
        *(int *)((int)this + 0x20) = iVar2;
        FUN_00821dc0();
        return;
      }
    }
    else if (uVar4 == 4) {
      fVar1 = *(float *)(iVar2 + 0x50);
      if (((byte)*(undefined4 *)((int)this + 0x1c) & 6) != 4) {
        FUN_00821940();
        *(uint *)((int)this + 0x1c) = *(uint *)((int)this + 0x1c) & 0xfffffffd | 4;
        *(float *)((int)this + 0x20) = fVar1;
        FUN_00821dc0();
        return;
      }
      if (*(float *)((int)this + 0x20) != fVar1) {
        *(float *)((int)this + 0x20) = fVar1;
        FUN_00821dc0();
        return;
      }
    }
    else if (uVar4 == 6) {
      uVar5 = 0;
      uVar3 = FUN_00821990(0);
      FUN_00821b30(uVar3,uVar5);
      return;
    }
  }
  return;
}

