// addr: 0x012ce120
// name: LobbyService_registerLobby
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/LobbyService.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyService_registerLobby(void * lobby) */

void __thiscall LobbyService_registerLobby(void *this,void *lobby)

{
  void *unaff_EDI;
  undefined4 uStack_14;
  void *pvStack_10;
  undefined1 auStack_c [12];
  
                    /* Asserts that the lobby pointer is non-null, obtains its lobby id, and inserts
                       the id/lobby pair into the LobbyService lobby map. Source path is
                       LobbyService.cpp. */
  if (lobby == (void *)0x0) {
    FUN_012f5a60("lobby","..\\common\\common\\lobby\\LobbyService.cpp",300);
  }
  uStack_14 = FUN_01301f30();
  pvStack_10 = lobby;
  LobbyServiceLobbyMap_insertUnique((void *)((int)this + 4),auStack_c,&uStack_14,unaff_EDI);
  return;
}

