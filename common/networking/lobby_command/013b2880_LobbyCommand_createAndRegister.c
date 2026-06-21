// addr: 0x013b2880
// name: LobbyCommand_createAndRegister
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_createAndRegister(void * registry) */

void * __fastcall LobbyCommand_createAndRegister(void *registry)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an 8-byte LobbyCommand, calls LobbyCommand_ctor, then passes it to
                       a registry/factory virtual at offset 0x48. Evidence is Mem_Alloc(8),
                       LobbyCommand_ctor, and vtable dispatch on the supplied object. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168799b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(8);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)LobbyCommand_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

