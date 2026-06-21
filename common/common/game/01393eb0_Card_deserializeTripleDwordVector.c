// addr: 0x01393eb0
// name: Card_deserializeTripleDwordVector
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Card_deserializeTripleDwordVector(void * streamOrContainer) */

uint __fastcall Card_deserializeTripleDwordVector(void *streamOrContainer)

{
  bool bVar1;
  uint3 extraout_var;
  uint uVar2;
  int iVar3;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
                    /* Deserializes a counted list of triple-dword records into a Card-owned
                       container. */
  FUN_013c2690(&local_28);
  iVar3 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      bVar1 = STLTripleDword_deserialize(*(void **)streamOrContainer,&local_24);
      if (!bVar1) {
        return (uint)extraout_var << 8;
      }
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      FUN_01392e30(local_c,&local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  uVar2 = FUN_013c26d0();
  return uVar2;
}

