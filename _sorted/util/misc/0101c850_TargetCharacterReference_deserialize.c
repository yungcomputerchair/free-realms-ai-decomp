// addr: 0x0101c850
// name: TargetCharacterReference_deserialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall TargetCharacterReference_deserialize(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
                    /* Deserializes a polymorphic target-character reference by reading a type id,
                       constructing the corresponding TargetCharacter object, and invoking its
                       virtual deserialize. */
  piVar2 = *(int **)(param_2 + 8) + 1;
  if (*(int **)(param_2 + 0xc) < piVar2) {
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(int **)(param_2 + 8) = *(int **)(param_2 + 0xc);
    return;
  }
  iVar1 = **(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = piVar2;
  if (iVar1 != 0) {
    piVar2 = (int *)TargetCharacterReference_createTargetByType(iVar1,0);
    *(int **)(param_1 + 4) = piVar2;
    (**(code **)(*piVar2 + 0x38))(param_2);
  }
  return;
}

