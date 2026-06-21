// addr: 0x014f5300
// name: NetworkCommand_EULA_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * NetworkCommand_EULA_createAndRegister(void) */

void * NetworkCommand_EULA_createAndRegister(void)

{
  uint uVar1;
  void *pvVar2;
  int *in_ECX;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a NetworkCommand_EULA, then registers it through the
                       owning factory callback. Evidence is the NetworkCommand_EULA_ctor/vtable
                       constructor callee and virtual callback after construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b292b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x4c);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)NetworkCommand_EULA_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

