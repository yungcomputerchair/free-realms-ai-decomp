// addr: 0x013ffde0
// name: FUN_013ffde0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_013ffde0(void *param_1,int *param_2)

{
  bool bVar1;
  
                    /* Reads an integer field and, if successful, reads a following string/complex
                       field at offset 4. Likely a small deserialization helper, but class is
                       unknown. */
  bVar1 = Deserializer_readInteger(param_1,param_2);
  if (!bVar1) {
    return;
  }
  Deserializer_readString(param_1,param_2 + 1);
  return;
}

