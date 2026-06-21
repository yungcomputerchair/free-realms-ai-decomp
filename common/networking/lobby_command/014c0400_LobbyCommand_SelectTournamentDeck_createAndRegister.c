// addr: 0x014c0400
// name: LobbyCommand_SelectTournamentDeck_createAndRegister
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SelectTournamentDeck_createAndRegister(void * registry) */

void * __fastcall LobbyCommand_SelectTournamentDeck_createAndRegister(void *registry)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a LobbyCommand_SelectTournamentDeck, constructs it, and registers
                       it via a virtual call at offset 0x48 on the supplied registry. Evidence is
                       Mem_Alloc(0x34), LobbyCommand_SelectTournamentDeck_ctor, and the
                       registration-style virtual call. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a9d2b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x34);
  pvVar3 = (void *)0x0;
  local_4 = 0;
  if (pvVar2 != (void *)0x0) {
    pvVar3 = (void *)LobbyCommand_SelectTournamentDeck_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  (**(code **)(*(int *)registry + 0x48))(pvVar3);
  ExceptionList = pvVar2;
  return pvVar3;
}

