// addr: 0x0135d6e0
// name: Game_deserializeIntPairVector_0135d6e0
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint Game_deserializeIntPairVector_0135d6e0(void * streamOrContainer) */

uint __thiscall Game_deserializeIntPairVector_0135d6e0(void *this,void *streamOrContainer)

{
  uint extraout_EAX;
  uint uVar1;
  int iVar2;
  int *unaff_EDI;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  
                    /* Deserializes a counted list of integer pairs, inserting each into a
                       container, then consumes/validates the collection terminator. */
  FUN_013c2690(&local_28);
  iVar2 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      sub_013ffdb0(*(void **)this,(int)&local_24);
      if ((char)extraout_EAX == '\0') {
        return extraout_EAX & 0xffffff00;
      }
      local_1c = local_24;
      local_18 = local_20;
      IntValueMap_insertUniqueLowerBound(streamOrContainer,local_14,&local_1c,unaff_EDI);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_28);
  }
  uVar1 = FUN_013c26d0();
  return uVar1;
}

