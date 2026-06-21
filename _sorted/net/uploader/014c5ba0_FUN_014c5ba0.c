// addr: 0x014c5ba0
// name: FUN_014c5ba0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_014c5ba0(void * registry) */

void * __fastcall FUN_014c5ba0(void *registry)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x14-byte object using constructor helper FUN_014c5830 and
                       registers it via the registry vtable callback at offset 0x48. Exact class not
                       visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aad1b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)LobbyCommand_ConfigureGroup_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

