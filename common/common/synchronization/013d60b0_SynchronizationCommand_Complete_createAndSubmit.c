// addr: 0x013d60b0
// name: SynchronizationCommand_Complete_createAndSubmit
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * SynchronizationCommand_Complete_createAndSubmit(void * submitter) */

void * __fastcall SynchronizationCommand_Complete_createAndSubmit(void *submitter)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a SynchronizationCommand_Complete, then passes it to
                       a virtual method at offset 0x48 on the supplied object. Returns the new
                       command pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168b99b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(8);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)SynchronizationCommand_Complete_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)submitter + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

