// addr: 0x00802e20
// name: AnimationBinding_applyFloatPairB8
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AnimationBinding_applyFloatPairB8(void * this, float x_, float y_) */

void __thiscall AnimationBinding_applyFloatPairB8(void *this,float x_,float y_)

{
  byte *pbVar1;
  undefined4 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Applies a two-float value to an optional binding, converting the pair and
                       ORing the target dirty flag. Evidence is the two float parameters and the
                       same binding/vtable+0x1c pattern as neighboring slot applicators. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015671b8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0xac) != 0) {
    uVar5 = FUN_00737e90(_DAT_0175b420 / (y_ - x_));
    local_4 = 0;
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0xac) + 0xc);
    bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(uVar5);
    pbVar1 = (byte *)(puVar2 + 1);
    *pbVar1 = *pbVar1 | bVar3;
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0xa4) != 0) {
    uVar5 = FUN_00737e90(x_);
    local_4 = 3;
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0xa4) + 0xc);
    bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(uVar5);
    pbVar1 = (byte *)(puVar2 + 1);
    *pbVar1 = *pbVar1 | bVar3;
  }
  local_4 = 0xffffffff;
  if (*(int *)((int)this + 0xa8) != 0) {
    uVar5 = FUN_00737e90(y_);
    local_4 = 6;
    puVar2 = *(undefined4 **)(*(int *)((int)this + 0xa8) + 0xc);
    bVar3 = (**(code **)(*(int *)*puVar2 + 0x1c))(uVar5,uVar4);
    pbVar1 = (byte *)(puVar2 + 1);
    *pbVar1 = *pbVar1 | bVar3;
  }
  ExceptionList = local_c;
  return;
}

