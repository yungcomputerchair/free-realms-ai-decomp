// addr: 0x0101c9d0
// name: TargetCharacterReference_assignClone
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall TargetCharacterReference_assignClone(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  
                    /* Replaces the stored target-character object with a clone of another
                       reference, deleting any previous object. */
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (param_2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    if (*(int *)(param_2 + 4) != 0) {
      piVar3 = *(int **)(param_2 + 4);
      uVar2 = (**(code **)(*piVar3 + 4))(piVar3);
      uVar2 = TargetCharacterReference_createTargetByType(uVar2,piVar3);
      *(undefined4 *)(param_1 + 4) = uVar2;
      return;
    }
  }
  return;
}

