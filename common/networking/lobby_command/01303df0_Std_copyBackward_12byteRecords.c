// addr: 0x01303df0
// name: Std_copyBackward_12byteRecords
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int Std_copyBackward_12byteRecords(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Copies 12-byte records backward from [first,last) ending at destEnd and
                       returns the new destination beginning. */
  if (param_1 != param_2) {
    iVar3 = param_3 - param_2;
    iVar1 = param_2;
    do {
      iVar2 = iVar1 + -0xc;
      *(undefined4 *)(iVar3 + iVar2) = *(undefined4 *)(iVar1 + -0xc);
      *(undefined4 *)(iVar3 + 4 + iVar2) = *(undefined4 *)(iVar1 + -8);
      *(undefined4 *)(iVar3 + 8 + iVar2) = *(undefined4 *)(iVar1 + -4);
      iVar1 = iVar2;
    } while (iVar2 != param_1);
  }
  return param_3 + ((param_2 - param_1) / 0xc) * -0xc;
}

