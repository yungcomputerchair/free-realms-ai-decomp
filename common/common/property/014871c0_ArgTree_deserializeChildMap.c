// addr: 0x014871c0
// name: ArgTree_deserializeChildMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ArgTree_deserializeChildMap(void * childMap) */

uint __fastcall ArgTree_deserializeChildMap(void *childMap)

{
  uint uVar1;
  int iVar2;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_14 [16];
  
                    /* Reads an STL container count for an ArgTree child map, deserializes each
                       child pointer/key pair, inserts it into the rb-tree map, and finishes the
                       container read. */
  FUN_013c2690(&local_28);
  iVar2 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      uVar1 = ComponentPair_deserializeSecond(*(void **)childMap,&local_24);
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      local_1c = local_24;
      local_18 = local_20;
      FUN_01486e40(local_14,&local_1c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_28);
  }
  uVar1 = FUN_013c26d0();
  return uVar1;
}

