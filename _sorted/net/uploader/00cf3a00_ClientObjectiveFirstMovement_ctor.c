// addr: 0x00cf3a00
// name: ClientObjectiveFirstMovement_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveFirstMovement_ctor(void * this, undefined4 owner_,
   undefined4 objectiveId_, bool flag_) */

void __thiscall
ClientObjectiveFirstMovement_ctor(void *this,undefined4 owner_,undefined4 objectiveId_,bool flag_)

{
                    /* Constructs ClientObjectiveFirstMovement, initializes common objective fields,
                       installs its vftable, and stores a flag at offset 0x20. Evidence is
                       ClientObjectiveFirstMovement::vftable. */
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = objectiveId_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined4 *)((int)this + 0x18) = owner_;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined ***)this = ClientObjectiveFirstMovement::vftable;
  *(bool *)((int)this + 0x20) = flag_;
  return;
}

