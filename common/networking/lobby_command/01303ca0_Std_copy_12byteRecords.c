// addr: 0x01303ca0
// name: Std_copy_12byteRecords
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int Std_copy_12byteRecords(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
                    /* Copies a forward range of 12-byte records to a destination and returns the
                       end of the copied output range. */
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar2 = param_3 - (int)param_1;
    do {
      *(undefined4 *)(iVar2 + (int)param_1) = *param_1;
      *(undefined4 *)(iVar2 + 4 + (int)param_1) = param_1[1];
      *(undefined4 *)(iVar2 + 8 + (int)param_1) = param_1[2];
      param_1 = param_1 + 3;
    } while (param_1 != param_2);
  }
  return param_3 + (iVar1 / 0xc) * 0xc;
}

