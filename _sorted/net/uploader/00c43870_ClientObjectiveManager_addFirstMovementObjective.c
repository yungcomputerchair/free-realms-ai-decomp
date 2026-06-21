// addr: 0x00c43870
// name: ClientObjectiveManager_addFirstMovementObjective
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveManager_addFirstMovementObjective(void * this, int
   objectiveId_, bool isMouse_) */

void __thiscall
ClientObjectiveManager_addFirstMovementObjective(void *this,int objectiveId_,bool isMouse_)

{
  void *this_00;
  int extraout_EAX;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs and adds a FirstMovement objective, constructs
                       ClientObjectiveFirstMovement, and inserts it into the objective list/hash.
                       Log string identifies behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fb8cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Log_Info(PTR_s_Objectives_log_01b6f93c,"Adding FirstMovement objective %d - isMouse %d",
           objectiveId_,isMouse_,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  this_00 = Mem_Alloc(0x24);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    ClientObjectiveFirstMovement_ctor(this_00,*(undefined4 *)this,objectiveId_,isMouse_);
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

