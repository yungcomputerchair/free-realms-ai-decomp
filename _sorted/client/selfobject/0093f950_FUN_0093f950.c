// addr: 0x0093f950
// name: FUN_0093f950
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0093f950(int param_1,int param_2)

{
                    /* Reads a 32-bit field into offset +0x64 of an unknown record, then delegates
                       to FUN_0092afb0. Called only from SelfObject_ParseFromBlob in this context.
                        */
  if (*(undefined4 **)(param_1 + 0xc) < *(undefined4 **)(param_1 + 8) + 1) {
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    FUN_0092afb0();
    return;
  }
  *(undefined4 *)(param_2 + 100) = **(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  FUN_0092afb0();
  return;
}

