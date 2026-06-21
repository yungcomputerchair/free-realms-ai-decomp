// addr: 0x00909fd0
// name: FUN_00909fd0
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_00909fd0(int param_1,int param_2)

{
                    /* Deserializes a bool into offset +4 of an unknown record and then delegates to
                       FUN_008e8230 for additional parsing/processing. Called by
                       SelfObject_ParseFromBlob, but class identity is not evident. */
  if (*(char **)(param_1 + 0xc) < *(char **)(param_1 + 8) + 1) {
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    FUN_008e8230();
    return;
  }
  *(bool *)(param_2 + 4) = **(char **)(param_1 + 8) != '\0';
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_008e8230();
  return;
}

