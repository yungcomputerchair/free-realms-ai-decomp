// addr: 0x0135d9e0
// name: Game_deserializeIntBoolMap_0135d9e0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Game_deserializeIntBoolMap_0135d9e0(void * streamOrContainer) */

uint __fastcall Game_deserializeIntBoolMap_0135d9e0(void *streamOrContainer)

{
  bool bVar1;
  uint3 extraout_var;
  uint uVar2;
  int iVar3;
  void *unaff_EDI;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_14 [16];
  
                    /* Deserializes a counted list of int/bool pairs and inserts each pair into a
                       map/container. */
  FUN_013c2690(&local_28);
  iVar3 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      bVar1 = STLPair_intBool_deserialize(*(void **)streamOrContainer,&local_24,unaff_EDI);
      if (!bVar1) {
        return (uint)extraout_var << 8;
      }
      local_1c = local_24;
      local_18 = local_20;
      FUN_0129c480(local_14,&local_1c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  uVar2 = FUN_013c26d0();
  return uVar2;
}

