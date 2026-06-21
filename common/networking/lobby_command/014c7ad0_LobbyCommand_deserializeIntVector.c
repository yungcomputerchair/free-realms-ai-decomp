// addr: 0x014c7ad0
// name: LobbyCommand_deserializeIntVector
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LobbyCommand_deserializeIntVector(void * deserializer, void * vector) */

bool __thiscall LobbyCommand_deserializeIntVector(void *this,void *deserializer,void *vector)

{
  char extraout_AL;
  undefined1 uVar1;
  int iVar2;
  int local_8;
  void *local_4;
  
                    /* Deserializes an integer count, reserves a vector, reads that many integers,
                       and appends each to the vector. Evidence is Deserializer_readIntegerThunk,
                       vector reserve helper, and callers including
                       LobbyCommand_BulkJoin_deserialize. */
  FUN_013c2690(&local_8);
  FUN_014c7390(local_8);
  iVar2 = 0;
  if (0 < local_8) {
    do {
      Deserializer_readIntegerThunk(*(void **)this,&deserializer);
      if (extraout_AL == '\0') {
        return false;
      }
      local_4 = deserializer;
      FUN_014c7a40(&local_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_8);
  }
  uVar1 = FUN_013c26d0();
  return (bool)uVar1;
}

