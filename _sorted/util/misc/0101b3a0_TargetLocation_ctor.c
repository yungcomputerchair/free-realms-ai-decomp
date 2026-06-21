// addr: 0x0101b3a0
// name: TargetLocation_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: undefined4 * TargetLocation_ctor(undefined4 * this, int * source) */

undefined4 * __thiscall TargetLocation_ctor(void *this,int *source)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Constructs TargetLocation on top of TargetBase, initializes base defaults,
                       and if a source is supplied copies eight dwords of location data from the
                       source target object. */
  puStack_18 = &LAB_01634818;
  local_1c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_1c;
  *(undefined ***)this = TargetBase::vftable;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  *(undefined4 *)((int)this + 0x10) = _DAT_01cb53d0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  local_14 = 0;
  *(undefined ***)this = TargetLocation::vftable;
  if (source != (int *)0x0) {
    iVar5 = (**(code **)(*source + 0xc))(uVar4);
    if (iVar5 != 0) {
      *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(iVar5 + 0x28);
      *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar5 + 0x34);
      *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar5 + 0x38);
      *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(iVar5 + 0x3c);
    }
  }
  ExceptionList = local_1c;
  return this;
}

