// addr: 0x00c43940
// name: ClientObjectiveManager_addHousingFixtureMoveObjective
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveManager_addHousingFixtureMoveObjective(void * this, int
   objectiveId_, int fixtureId_, int action_) */

void __thiscall
ClientObjectiveManager_addHousingFixtureMoveObjective
          (void *this,int objectiveId_,int fixtureId_,int action_)

{
  void *this_00;
  int extraout_EAX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs and adds a HousingFixtureMove objective, constructs
                       ClientObjectiveHousingFixtureMove, and indexes it by objective id. Log string
                       identifies behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fb8fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Log_Info(PTR_s_Objectives_log_01b6f93c,
           "Adding HousingFixtureMove objective %d - fixture id %d, action %d",objectiveId_,
           fixtureId_,action_,DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  this_00 = Mem_Alloc(0x28);
  iVar1 = 0;
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    ClientObjectiveHousingFixtureMove_ctor
              (this_00,*(undefined4 *)this,objectiveId_,fixtureId_,action_);
    iVar1 = extraout_EAX;
  }
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) == 0) {
    *(int *)((int)this + 8) = iVar1;
  }
  else {
    *(int *)(*(int *)((int)this + 0xc) + 0x10) = iVar1;
  }
  *(int *)((int)this + 0xc) = iVar1;
  *(int *)(iVar1 + 8) = objectiveId_;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + ((uint)objectiveId_ % 100) * 4 + 0x14);
  *(int *)((int)this + ((uint)objectiveId_ % 100) * 4 + 0x14) = iVar1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

