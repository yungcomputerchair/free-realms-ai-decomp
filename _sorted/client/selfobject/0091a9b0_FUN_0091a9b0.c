// addr: 0x0091a9b0
// name: FUN_0091a9b0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0091a9b0(int param_1,int param_2)

{
                    /* Reads a 32-bit field into offset +4 of an unknown record, then invokes
                       FUN_008fce50 for additional processing. It is part of
                       SelfObject_ParseFromBlob but lacks type evidence. */
  if (*(undefined4 **)(param_1 + 0xc) < *(undefined4 **)(param_1 + 8) + 1) {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    FUN_008fce50();
    return;
  }
  *(undefined4 *)(param_2 + 4) = **(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  FUN_008fce50();
  return;
}

