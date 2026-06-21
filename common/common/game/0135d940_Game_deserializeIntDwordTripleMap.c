// addr: 0x0135d940
// name: Game_deserializeIntDwordTripleMap
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Game_deserializeIntDwordTripleMap(void * streamOrContainer) */

uint __fastcall Game_deserializeIntDwordTripleMap(void *streamOrContainer)

{
  bool bVar1;
  uint3 extraout_var;
  uint uVar2;
  int iVar3;
  int local_30;
  undefined1 local_2c [12];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
                    /* Deserializes a counted list of int plus three dword fields and inserts each
                       record into a container. */
  FUN_013c2690(&local_30);
  iVar3 = 0;
  if (0 < local_30) {
    do {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      bVar1 = STLPair_intDwordTriple_deserialize(*(void **)streamOrContainer,&local_20);
      if (!bVar1) {
        return (uint)extraout_var << 8;
      }
      local_c = local_1c;
      local_8 = local_18;
      local_10 = local_20;
      local_4 = local_14;
      FUN_0135b110(local_2c,&local_10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_30);
  }
  uVar2 = FUN_013c26d0();
  return uVar2;
}

