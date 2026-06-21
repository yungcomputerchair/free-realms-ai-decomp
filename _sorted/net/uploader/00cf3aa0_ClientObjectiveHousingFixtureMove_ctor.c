// addr: 0x00cf3aa0
// name: ClientObjectiveHousingFixtureMove_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveHousingFixtureMove_ctor(void * this, undefined4 owner_,
   undefined4 objectiveId_, undefined4 fixtureId_, undefined4 moveData_) */

void __thiscall
ClientObjectiveHousingFixtureMove_ctor
          (void *this,undefined4 owner_,undefined4 objectiveId_,undefined4 fixtureId_,
          undefined4 moveData_)

{
                    /* Constructs ClientObjectiveHousingFixtureMove, initializes common objective
                       fields, installs its vftable, and stores two fixture/move values. Evidence is
                       ClientObjectiveHousingFixtureMove::vftable. */
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x14) = objectiveId_;
  *(undefined4 *)((int)this + 0x18) = owner_;
  *(undefined1 *)((int)this + 0x1d) = 0;
  *(undefined1 *)((int)this + 0x1c) = 1;
  *(undefined ***)this = ClientObjectiveHousingFixtureMove::vftable;
  *(undefined4 *)((int)this + 0x20) = fixtureId_;
  *(undefined4 *)((int)this + 0x24) = moveData_;
  return;
}

