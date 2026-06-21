// addr: 0x00acb430
// name: FUN_00acb430
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00acb430(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* Unlinks an intrusive doubly-linked node from one of the owner list buckets,
                       clears its next/prev links, and decrements the list count. No class evidence,
                       so left unnamed. */
  if ((param_2 != 0) && (piVar2 = *(int **)(param_1 + 0x7c), piVar2 != (int *)0x0)) {
    iVar1 = *(int *)(param_2 + 4);
    do {
      if ((iVar1 != 0) || (*piVar2 == param_2)) {
        if (iVar1 == 0) {
          *piVar2 = *(int *)(param_2 + 8);
        }
        else {
          *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_2 + 8);
        }
        if (*(int *)(param_2 + 8) == 0) {
          piVar2[1] = *(int *)(param_2 + 4);
        }
        else {
          *(undefined4 *)(*(int *)(param_2 + 8) + 4) = *(undefined4 *)(param_2 + 4);
        }
        *(undefined4 *)(param_2 + 8) = 0;
        *(undefined4 *)(param_2 + 4) = 0;
        piVar2[2] = piVar2[2] + -1;
        return;
      }
      piVar2 = (int *)piVar2[3];
    } while (piVar2 != (int *)0x0);
  }
  return;
}

