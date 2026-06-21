// addr: 0x0101b760
// name: TargetActorBoneId_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * TargetActorBoneId_ctor(void * this, int actorId_, int boneId_) */

void * __thiscall TargetActorBoneId_ctor(void *this,int actorId_,int boneId_)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* Constructs TargetActorBoneId from TargetBase, installs the TargetActorBoneId
                       vtable, and stores actor/bone identifiers. Likely outside uploader. */
  *(undefined ***)this = TargetBase::vftable;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  *(undefined4 *)((int)this + 0x10) = _DAT_01cb53d0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined ***)this = TargetActorBoneId::vftable;
  *(int *)((int)this + 0x20) = actorId_;
  *(int *)((int)this + 0x24) = boneId_;
  return this;
}

