// addr: 0x014b13f0
// name: SynchronizationCommand_RemoveInstances_doCommand
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SynchronizationCommand_RemoveInstances_doCommand(void * this) */

bool __fastcall SynchronizationCommand_RemoveInstances_doCommand(void *this)

{
  uint uVar1;
  void *this_00;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes RemoveInstances by ensuring the SynchronizationService singleton,
                       forwarding the command payload at this+4 to
                       SynchronizationService_handleRemoveInstances, then sending a display/update
                       command with id 0x36. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a6fdb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  SynchronizationService_ensureSingleton();
  SynchronizationService_handleRemoveInstances(this_00,(void *)((int)this + 4));
  pvVar2 = Mem_Alloc(0x14);
  uVar3 = 0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    uVar3 = FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_012f8c70(0x36);
  DisplayActionManager_ensureSingleton();
  FUN_012d3550(uVar3);
  ExceptionList = local_c;
  return true;
}

