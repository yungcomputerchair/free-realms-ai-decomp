// addr: 0x0152d770
// name: EventCommand_SendEventPlayerFlags_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * EventCommand_SendEventPlayerFlags_createAndRegister(void) */

void * EventCommand_SendEventPlayerFlags_createAndRegister(void)

{
  uint uVar1;
  void *pvVar2;
  int *in_ECX;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a EventCommand_SendEventPlayerFlags, then registers
                       it through the owning command factory callback. Evidence is the
                       EventCommand_SendEventPlayerFlags_ctor/vtable constructor callee and virtual
                       callback after construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ba9db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = EventCommand_SendEventPlayerFlags_ctor();
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x48))(pvVar3,uVar1);
  ExceptionList = pvVar2;
  return pvVar3;
}

