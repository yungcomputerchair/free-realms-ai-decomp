// addr: 0x013ffe50
// name: FUN_013ffe50
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_013ffe50(void *param_1,void *param_2)

{
  bool bVar1;
  
                    /* Reads a string/complex field and, if successful, reads an integer at offset
                       0x1c. Likely a small deserialization helper with no class evidence. */
  bVar1 = Deserializer_readString(param_1,param_2);
  if (!bVar1) {
    return;
  }
  Deserializer_readInteger(param_1,(int *)((int)param_2 + 0x1c));
  return;
}

