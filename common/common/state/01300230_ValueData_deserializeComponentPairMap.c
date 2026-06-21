// addr: 0x01300230
// name: ValueData_deserializeComponentPairMap
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValueData_deserializeComponentPairMap(void * this) */

bool __fastcall ValueData_deserializeComponentPairMap(void *this)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  
                    /* Reads a count, repeatedly deserializes component pairs, inserts them into a
                       map, then finalizes the deserializer. Evidence is
                       ValueData_reconstructComponentFromData caller and
                       ComponentPair_deserializeSecond. */
  FUN_013c2690(&local_28);
  iVar3 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      uVar2 = ComponentPair_deserializeSecond(*(void **)this,&local_24);
      if ((char)uVar2 == '\0') {
        return false;
      }
      local_1c = local_24;
      local_18 = local_20;
      FUN_012fe4e0(local_14,&local_1c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  uVar1 = FUN_013c26d0();
  return (bool)uVar1;
}

