// addr: 0x013ee800
// name: GatewayCommand_GetConnectionServer_createAndRegister
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GatewayCommand_GetConnectionServer_createAndRegister(void * factory) */

void * __fastcall GatewayCommand_GetConnectionServer_createAndRegister(void *factory)

{
  uint uVar1;
  void *this;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a GatewayCommand_GetConnectionServer, constructs it, and registers
                       it with the factory callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168ef4b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  this = Mem_Alloc(100);
  pvVar2 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    pvVar2 = GatewayCommand_GetConnectionServer_ctor(this);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)factory + 0x48))(pvVar2,uVar1);
  ExceptionList = this;
  return pvVar2;
}

