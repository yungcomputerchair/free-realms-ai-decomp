// addr: 0x00921740
// name: LobbyGameInfo_deserialize
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyGameInfo_deserialize(void * this, void * reader) */

void __thiscall LobbyGameInfo_deserialize(void *this,void *reader)

{
                    /* Deserializes a wrapper containing a LobbyGame at offset 4 followed by one
                       extra 32-bit field at offset 0x1a4. */
  LobbyGameInfo_deserializeGameList(reader,(void *)((int)this + 4));
  if (*(undefined4 **)((int)reader + 0xc) < *(undefined4 **)((int)reader + 8) + 1) {
    *(undefined4 *)((int)this + 0x1a4) = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
    return;
  }
  *(undefined4 *)((int)this + 0x1a4) = **(undefined4 **)((int)reader + 8);
  *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 4;
  return;
}

