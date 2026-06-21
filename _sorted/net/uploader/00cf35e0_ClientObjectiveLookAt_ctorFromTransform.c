// addr: 0x00cf35e0
// name: ClientObjectiveLookAt_ctorFromTransform
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveLookAt_ctorFromTransform(void * this, undefined4 owner_,
   undefined4 objectiveId_, undefined4 * transform, undefined4 arg4_, float angle_) */

void __thiscall
ClientObjectiveLookAt_ctorFromTransform
          (void *this,undefined4 owner_,undefined4 objectiveId_,undefined4 *transform,
          undefined4 arg4_,float angle_)

{
  undefined4 uVar1;
  float fVar2;
  
                    /* Constructs ClientObjectiveLookAt from a transform-like four-word source,
                       initializes base objective fields, and converts a float using DAT_01b7dc74.
                       Evidence is ClientObjectiveLookAt::vftable and copied transform fields. */
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = objectiveId_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined4 *)((int)this + 0x18) = owner_;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined ***)this = ClientObjectiveLookAt::vftable;
  *(undefined4 *)((int)this + 0x20) = DAT_01bf1d10;
  *(undefined4 *)((int)this + 0x24) = DAT_01bf1d14;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = *transform;
  *(undefined4 *)((int)this + 0x34) = transform[1];
  *(undefined4 *)((int)this + 0x38) = transform[2];
  uVar1 = transform[3];
  *(undefined4 *)((int)this + 0x40) = arg4_;
  fVar2 = DAT_01b7dc74 * angle_;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(float *)((int)this + 0x44) = fVar2;
  return;
}

