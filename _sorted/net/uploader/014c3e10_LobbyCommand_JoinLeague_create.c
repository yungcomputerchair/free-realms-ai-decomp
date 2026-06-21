// addr: 0x014c3e10
// name: LobbyCommand_JoinLeague_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * LobbyCommand_JoinLeague_create(void) */

void * LobbyCommand_JoinLeague_create(void)

{
  uint uVar1;
  void *pvVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x7c bytes, constructs LobbyCommand_JoinLeague, and returns it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa87b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x7c);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)LobbyCommand_JoinLeague_ctor(uVar1);
  }
  ExceptionList = local_c;
  return pvVar2;
}

