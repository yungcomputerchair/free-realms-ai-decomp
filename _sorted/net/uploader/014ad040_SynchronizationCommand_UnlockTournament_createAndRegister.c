// addr: 0x014ad040
// name: SynchronizationCommand_UnlockTournament_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_UnlockTournament_createAndRegister(void *
   factory) */

void * __fastcall SynchronizationCommand_UnlockTournament_createAndRegister(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a SynchronizationCommand_UnlockTournament command object and
                       registers it through a factory virtual method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a660b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x20);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)SynchronizationCommand_UnlockTournament_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

