// addr: 0x014ed480
// name: AccountCommand_GetAccountInfo_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * AccountCommand_GetAccountInfo_createAndRegister(void) */

void * AccountCommand_GetAccountInfo_createAndRegister(void)

{
  uint uVar1;
  void *pvVar2;
  int *in_ECX;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a AccountCommand_GetAccountInfo, then registers it
                       through the owning factory callback. Evidence is the
                       AccountCommand_GetAccountInfo_ctor/vtable constructor callee and virtual
                       callback after construction. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b157b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x10);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)AccountCommand_GetAccountInfo_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*in_ECX + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

