// addr: 0x01301ef0
// name: Lobby_setContainingGroupID
// subsystem: common/common/lobby
// source (binary assert): common/common/lobby/Lobby.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Lobby_setContainingGroupID(void * this, uint groupId_) */

void __thiscall Lobby_setContainingGroupID(void *this,uint groupId_)

{
                    /* Sets the Lobby member at offset 0x14 after asserting it was previously zero.
                       The assert text names mContainingGroupID and the source path is Lobby.cpp. */
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_012f5a60("mContainingGroupID == 0","..\\common\\common\\lobby\\Lobby.cpp",0x23a);
    *(uint *)((int)this + 0x14) = groupId_;
    return;
  }
  *(uint *)((int)this + 0x14) = groupId_;
  return;
}

