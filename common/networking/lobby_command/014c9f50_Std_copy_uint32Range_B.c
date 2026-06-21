// addr: 0x014c9f50
// name: Std_copy_uint32Range_B
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int Std_copy_uint32Range_B(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* Copies a forward range of 32-bit values and returns the output end pointer.
                        */
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar2 = param_3 - (int)param_1;
    do {
      *(undefined4 *)(iVar2 + (int)param_1) = *param_1;
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return param_3 + (iVar1 >> 2) * 4;
}

