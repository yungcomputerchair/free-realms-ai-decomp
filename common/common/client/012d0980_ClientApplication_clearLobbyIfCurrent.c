// addr: 0x012d0980
// name: ClientApplication_clearLobbyIfCurrent
// subsystem: common/common/client
// source (binary assert): common/common/client/ClientApplication.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_clearLobbyIfCurrent(void * this, void * lobbyPtr) */

void __thiscall ClientApplication_clearLobbyIfCurrent(void *this,void *lobbyPtr)

{
                    /* Clears ClientApplication offset 0xac only when it currently equals the
                       supplied non-null lobby pointer. Evidence is the ClientApplication.cpp lobby
                       assertion and comparison against the same field set by
                       ClientApplication_setLobby. */
  if (lobbyPtr == (void *)0x0) {
    FUN_012f5a60("lobby","..\\common\\common\\client\\ClientApplication.cpp",0x26d);
  }
  if (lobbyPtr == *(void **)((int)this + 0xac)) {
    *(undefined4 *)((int)this + 0xac) = 0;
  }
  return;
}

