// addr: 0x013ddcd0
// name: FUN_013ddcd0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_013ddcd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
                    /* Compares/copies three string-like values and clears the first two if
                       comparisons indicate ordering/duplication issues. Exact semantic role is not
                       evident. */
  piVar3 = (int *)(param_1 + 4);
  piVar1 = piVar3;
  if (0xf < *(uint *)(param_1 + 0x18)) {
    piVar1 = (int *)*piVar3;
  }
  iVar2 = FUN_00f942a0(0,*(undefined4 *)(param_2 + 0x14),piVar1,*(undefined4 *)(param_1 + 0x14));
  if (iVar2 < 0) {
    FUN_01232860(param_1);
  }
  if (*(uint *)(param_2 + 0x18) < 0x10) {
    iVar2 = param_2 + 4;
  }
  else {
    iVar2 = *(int *)(param_2 + 4);
  }
  iVar2 = FUN_00f942a0(0,*(undefined4 *)(param_3 + 0x14),iVar2,*(undefined4 *)(param_2 + 0x14));
  if (iVar2 < 0) {
    FUN_01232860(param_2);
  }
  if (0xf < *(uint *)(param_1 + 0x18)) {
    piVar3 = (int *)*piVar3;
  }
  iVar2 = FUN_00f942a0(0,*(undefined4 *)(param_2 + 0x14),piVar3,*(undefined4 *)(param_1 + 0x14));
  if (iVar2 < 0) {
    FUN_01232860(param_1);
  }
  return;
}

