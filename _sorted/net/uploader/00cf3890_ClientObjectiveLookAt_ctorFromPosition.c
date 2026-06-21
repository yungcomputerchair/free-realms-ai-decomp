// addr: 0x00cf3890
// name: ClientObjectiveLookAt_ctorFromPosition
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveLookAt_ctorFromPosition(void * this, undefined4 owner_,
   undefined4 objectiveId_, undefined4 x_, undefined4 y_, undefined4 z_, undefined4 arg6_, float
   angle_) */

void __thiscall
ClientObjectiveLookAt_ctorFromPosition
          (void *this,undefined4 owner_,undefined4 objectiveId_,undefined4 x_,undefined4 y_,
          undefined4 z_,undefined4 arg6_,float angle_)

{
                    /* Constructs ClientObjectiveLookAt from explicit position components and a
                       converted angle/timing value. Evidence is ClientObjectiveLookAt::vftable and
                       direct storage of three coordinate arguments. */
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = objectiveId_;
  *(undefined4 *)((int)this + 0x18) = owner_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined ***)this = ClientObjectiveLookAt::vftable;
  *(undefined4 *)((int)this + 0x20) = x_;
  *(undefined4 *)((int)this + 0x24) = y_;
  *(undefined4 *)((int)this + 0x28) = z_;
  *(undefined4 *)((int)this + 0x40) = arg6_;
  *(float *)((int)this + 0x44) = DAT_01b7dc74 * angle_;
  return;
}

