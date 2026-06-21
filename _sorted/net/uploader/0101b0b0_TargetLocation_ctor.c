// addr: 0x0101b0b0
// name: TargetLocation_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * TargetLocation_ctor(void * this, void * position, void * orientation)
    */

void * __thiscall TargetLocation_ctor(void *this,void *position,void *orientation)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* Constructs TargetLocation from TargetBase, copies default TargetBase data,
                       installs the TargetLocation vtable, then copies two 4-word vectors. This is
                       likely a weak misclassification outside uploader. */
  *(undefined ***)this = TargetBase::vftable;
  uVar3 = uRam01cb53dc;
  uVar2 = uRam01cb53d8;
  uVar1 = uRam01cb53d4;
  *(undefined4 *)((int)this + 0x10) = _DAT_01cb53d0;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  *(undefined ***)this = TargetLocation::vftable;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)position;
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)position + 4);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)position + 8);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)position + 0xc);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)orientation;
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)((int)orientation + 4);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)((int)orientation + 8);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)((int)orientation + 0xc);
  return this;
}

