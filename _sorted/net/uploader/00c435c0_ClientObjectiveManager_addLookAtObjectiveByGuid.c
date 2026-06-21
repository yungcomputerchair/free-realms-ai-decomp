// addr: 0x00c435c0
// name: ClientObjectiveManager_addLookAtObjectiveByGuid
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveManager_addLookAtObjectiveByGuid(void * this, int
   objectiveId_) */

void __thiscall ClientObjectiveManager_addLookAtObjectiveByGuid(void *this,int objectiveId_)

{
  void *this_00;
  int extraout_EAX;
  int iVar1;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  float in_stack_00000018;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs and adds a LookAt objective targeted at a GUID, constructing
                       ClientObjectiveLookAt and inserting it into the objective list/hash table.
                       Log string and constructor identify behavior. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fb83b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Log_Info();
  this_00 = Mem_Alloc(0x50);
  iVar1 = 0;
  local_4 = 0;
  if (this_00 != (void *)0x0) {
    ClientObjectiveLookAt_ctorFromPosition
              (this_00,*(undefined4 *)this,objectiveId_,in_stack_00000008,in_stack_0000000c,
               in_stack_00000010,in_stack_00000014,in_stack_00000018);
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

