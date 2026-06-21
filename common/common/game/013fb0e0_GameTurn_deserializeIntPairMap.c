// addr: 0x013fb0e0
// name: GameTurn_deserializeIntPairMap
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameTurn_deserializeIntPairMap(void * field) */

bool __fastcall GameTurn_deserializeIntPairMap(void *field)

{
  char extraout_AL;
  undefined1 uVar1;
  int iVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  
                    /* Deserializes an STL-container count, reads that many pairs of integers, and
                       inserts them into a tree/map-like field; returns false on the first failed
                       pair read. */
  FUN_013c2690(&local_28);
  iVar2 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      sub_013ffdb0(*(void **)field,(int)&local_24);
      if (extraout_AL == '\0') {
        return false;
      }
      local_1c = local_24;
      local_18 = local_20;
      FUN_013fb020(local_14,&local_1c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_28);
  }
  uVar1 = FUN_013c26d0();
  return (bool)uVar1;
}

