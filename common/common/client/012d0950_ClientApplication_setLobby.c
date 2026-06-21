// addr: 0x012d0950
// name: ClientApplication_setLobby
// subsystem: common/common/client
// source (binary assert): common/common/client/ClientApplication.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientApplication_setLobby(void * this, void * lobbyPtr) */

void __thiscall ClientApplication_setLobby(void *this,void *lobbyPtr)

{
                    /* Stores the non-null lobby pointer into the ClientApplication field at offset
                       0xac. Evidence is the ClientApplication.cpp file string, the asserted literal
                       lobby, and callers from lobby join/client setup paths. */
  if (lobbyPtr == (void *)0x0) {
    FUN_012f5a60("lobby","..\\common\\common\\client\\ClientApplication.cpp",0x267);
  }
  *(void **)((int)this + 0xac) = lobbyPtr;
  return;
}

