// addr: 0x0095a170
// name: FUN_0095a170
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_0095a170(undefined4 param_1,char param_2)

{
  int iVar1;
  
                    /* Iterates the same global/object list and toggles a resource flag for each
                       active entry based on the boolean argument. No class evidence, so left
                       unnamed. */
  FUN_01045d50();
  iVar1 = FUN_01045c80();
  for (iVar1 = *(int *)(iVar1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (*(char *)(iVar1 + 0x9d) != '\0') {
      FUN_0072ae80(*(undefined4 *)(iVar1 + 0x20),param_2 == '\0');
    }
  }
  return;
}

