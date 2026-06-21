// addr: 0x0135d780
// name: FUN_0135d780
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_0135d780(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
                    /* Deserializes a count-prefixed list of 3-dword records from a reader and
                       inserts/copies each record into a container, then finalizes the read. */
  FUN_013c2690(&local_28);
  iVar3 = 0;
  if (0 < local_28) {
    do {
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      bVar1 = Deserializer_readByteBuffer((void *)*param_1,&local_24);
      if (!bVar1) {
        return 0;
      }
      local_18 = local_24;
      local_14 = local_20;
      local_10 = local_1c;
      FUN_0135b500(local_c,&local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_28);
  }
  uVar2 = FUN_013c26d0();
  return uVar2;
}

