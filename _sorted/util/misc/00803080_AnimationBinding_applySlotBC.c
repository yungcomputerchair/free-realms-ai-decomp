// addr: 0x00803080
// name: AnimationBinding_applySlotBC
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimationBinding_applySlotBC(void * this, int value_) */

void __thiscall AnimationBinding_applySlotBC(void *this,int value_)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If optional binding at +0xbc exists, converts the input via FUN_00737e90 and
                       applies it to the target binding vtable method at +0x1c, ORing the dirty
                       flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567268;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0xbc) != 0) {
    uVar5 = FUN_00737e90(value_);
    local_4 = 0;
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0xbc) + 0xc);
    bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(uVar5,uVar4);
    pbVar1 = (byte *)(puVar2 + 1);
    *pbVar1 = *pbVar1 | bVar3;
  }
  ExceptionList = local_c;
  return;
}

