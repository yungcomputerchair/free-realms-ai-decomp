// addr: 0x00c436b0
// name: ClientObjectiveManager_addLookAtObjectiveByLocation
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveManager_addLookAtObjectiveByLocation(void * this, int
   objectiveId_, float * position) */

void __thiscall
ClientObjectiveManager_addLookAtObjectiveByLocation(void *this,int objectiveId_,float *position)

{
  void *this_00;
  int extraout_EAX;
  int iVar1;
  undefined4 in_stack_0000000c;
  float in_stack_00000010;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs and adds a LookAt objective for a target location, constructs
                       ClientObjectiveLookAt from a transform/position, and indexes it by objective
                       id. Log string identifies behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fb86b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Log_Info(PTR_s_Objectives_log_01b6f93c,
           "Adding LookAt objective %d - target location: (%.1f, %.1f, %.1f)",objectiveId_,
           (double)*position,(double)position[1],(double)position[2],
           DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  this_00 = Mem_Alloc(0x50);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    ClientObjectiveLookAt_ctorFromTransform
              (this_00,*(undefined4 *)this,objectiveId_,position,in_stack_0000000c,in_stack_00000010
              );
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

