// addr: 0x013c1750
// name: LoginCommand_RegisterUsername_createAndRegister
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LoginCommand_RegisterUsername_createAndRegister(void * factory) */

void * __fastcall LoginCommand_RegisterUsername_createAndRegister(void *factory)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a LoginCommand_RegisterUsername and registers it through a factory
                       virtual method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016893ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x40);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)LoginCommand_RegisterUsername_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

