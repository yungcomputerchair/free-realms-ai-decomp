// addr: 0x00c437a0
// name: ClientObjectiveManager_addUIEventObjective
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientObjectiveManager_addUIEventObjective(void * this, uint
   objectiveId_, void * objectiveDef) */

void __thiscall
ClientObjectiveManager_addUIEventObjective(void *this,uint objectiveId_,void *objectiveDef)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a UIEvent objective, logs "Adding UIEvent objective", links it into
                       the objective manager list, and indexes it by objective id modulo 100.
                       Evidence is the Objectives.log string and call to the UIEvent objective
                       constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015fb89b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Log_Info(PTR_s_Objectives_log_01b6f93c,"Adding UIEvent objective %d - name %s",objectiveId_,
           *(undefined4 *)((int)objectiveDef + 4),DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  pvVar1 = Mem_Alloc(0x30);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ClientObjectiveUIEvent_ctor(pvVar1,*(int *)this,objectiveId_,objectiveDef);
  }
  *(undefined4 *)((int)pvVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = pvVar1;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 0x10) = pvVar1;
  }
  *(void **)((int)this + 0xc) = pvVar1;
  *(uint *)((int)pvVar1 + 8) = objectiveId_;
  *(undefined4 *)((int)pvVar1 + 4) = *(undefined4 *)((int)this + (objectiveId_ % 100) * 4 + 0x14);
  *(void **)((int)this + (objectiveId_ % 100) * 4 + 0x14) = pvVar1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

