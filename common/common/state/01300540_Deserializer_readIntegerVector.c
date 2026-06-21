// addr: 0x01300540
// name: Deserializer_readIntegerVector
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deserializer_readIntegerVector(void * this, void * out) */

bool __thiscall Deserializer_readIntegerVector(void *this,void *out)

{
  char extraout_AL;
  undefined1 uVar1;
  int iVar2;
  int local_8;
  void *local_4;
  
                    /* Reads an integer count, reserves/validates output storage, reads that many
                       integers, appends them, and finalizes the deserializer sequence. */
  FUN_013c2690(&local_8);
  FUN_012f6b00(local_8);
  iVar2 = 0;
  if (0 < local_8) {
    do {
      Deserializer_readIntegerThunk(*(void **)this,&out);
      if (extraout_AL == '\0') {
        return false;
      }
      local_4 = out;
      FUN_0042c155(&local_4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_8);
  }
  uVar1 = FUN_013c26d0();
  return (bool)uVar1;
}

