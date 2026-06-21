// addr: 0x01401800
// name: Deserializer_readTripleIntList
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall Deserializer_readTripleIntList(undefined4 *param_1)

{
  void *this;
  bool bVar1;
  uint3 extraout_var;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  int iVar3;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
                    /* Reads a count, reserves/initializes storage, then reads that many triples of
                       integers and appends each triple to a collection before finalizing. Used by
                       several command/state deserializers. */
  FUN_013c2690(&local_1c);
  FUN_014014a0(local_1c);
  if (0 < local_1c) {
    iVar3 = 0;
    do {
      this = (void *)*param_1;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      bVar1 = Deserializer_readInteger(this,&local_18);
      uVar2 = extraout_var;
      if (!bVar1) {
LAB_014018b0:
        return (uint)uVar2 << 8;
      }
      bVar1 = Deserializer_readInteger(this,&local_14);
      uVar2 = extraout_var_00;
      if (!bVar1) goto LAB_014018b0;
      bVar1 = Deserializer_readInteger(this,&local_10);
      uVar2 = extraout_var_01;
      if (!bVar1) goto LAB_014018b0;
      local_c = local_18;
      local_4 = local_10;
      local_8 = local_14;
      FUN_013098c0(&local_c);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_1c);
  }
  iVar3 = FUN_013c26d0();
  return iVar3;
}

