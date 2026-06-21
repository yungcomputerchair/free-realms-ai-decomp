// addr: 0x014c3d00
// name: LobbyCommand_JoinLeague_registerFactory
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_JoinLeague_registerFactory(void * registry) */

void * __fastcall LobbyCommand_JoinLeague_registerFactory(void *registry)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x7c bytes, constructs LobbyCommand_JoinLeague, and registers it
                       via registry callback. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa84b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x7c);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)LobbyCommand_JoinLeague_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

