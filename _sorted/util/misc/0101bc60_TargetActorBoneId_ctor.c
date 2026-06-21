// addr: 0x0101bc60
// name: TargetActorBoneId_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: undefined4 * TargetActorBoneId_ctor(undefined4 * this, int * source) */

undefined4 * __thiscall TargetActorBoneId_ctor(void *this,int *source)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_24 [8];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs TargetActorBoneId on TargetBase, initializes bone id to zero, and
                       if a source supplies actor/bone data copies the actor id and bone id fields.
                        */
  puStack_18 = &LAB_01634ae8;
  local_1c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_1c;
  *(undefined ***)this = TargetBase::vftable;
  uVar2 = uRam01cb53dc;
  uVar1 = uRam01cb53d8;
  uVar6 = uRam01cb53d4;
  *(undefined4 *)((int)this + 0x10) = _DAT_01cb53d0;
  *(undefined4 *)((int)this + 0x14) = uVar6;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  local_14 = 0;
  *(undefined ***)this = TargetActorBoneId::vftable;
  *(undefined4 *)((int)this + 0x20) = 0;
  if (source != (int *)0x0) {
    piVar4 = (int *)(**(code **)(*source + 0x1c))(uVar3);
    if (piVar4 != (int *)0x0) {
      puVar5 = (undefined4 *)(**(code **)(*piVar4 + 0x24))(auStack_24);
      *(undefined4 *)((int)this + 0x20) = *puVar5;
      uVar6 = (**(code **)(*piVar4 + 0x2c))();
      *(undefined4 *)((int)this + 0x24) = uVar6;
    }
  }
  ExceptionList = local_1c;
  return this;
}

