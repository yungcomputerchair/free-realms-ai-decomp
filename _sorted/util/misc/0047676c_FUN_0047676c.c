// addr: 0x0047676c
// name: FUN_0047676c
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_0047676c(int param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
                    /* Clears/replaces two referenced object pointers at offsets 0x44/0x48 after
                       looking up an entry in an owned container, toggling flag bit 8 and calling
                       vtable addref/release methods. No class/file evidence, so left unnamed. */
  piVar1 = param_2;
  iVar3 = *(int *)(param_1 + 0x40);
  piVar4 = (int *)0x0;
  if ((((iVar3 != 0) && (param_2 != (int *)0x0)) && (*(char *)((int)param_2 + 0x37) == '\0')) &&
     ((char)param_2[0xd] == '\0')) {
    FUN_0045d62f(*(undefined4 *)(iVar3 + 0x38),iVar3 + 0x34);
    puVar5 = local_c;
    FUN_0046abe6(local_14,&param_2);
    cVar2 = FUN_0045c9ee(puVar5);
    if (cVar2 == '\0') {
      iVar3 = FUN_0045a6b5(0xc4);
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_0047624a(*(int *)(param_1 + 0x40) + 0x10,0);
      }
      if (piVar4 != (int *)0x0) {
        if ((char)piVar4[6] != '\0') {
          FUN_00474e3b(param_1 + 0x44);
          FUN_00474947(param_1 + 0x48);
          (**(code **)(*piVar4 + 0xc))();
          if (*(int **)(param_1 + 0x44) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x44) + 0x10))(0);
          }
          *(int **)(param_1 + 0x44) = piVar4;
          (**(code **)(*piVar1 + 0xc))();
          if (*(int **)(param_1 + 0x48) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x48) + 0x10))(0);
          }
          *(int **)(param_1 + 0x48) = piVar1;
          *(undefined1 *)((int)piVar1 + 0x37) = 1;
          *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
          (**(code **)(*piVar4 + 0x10))(0);
          return 1;
        }
        (**(code **)(*piVar4 + 0x10))(0);
      }
    }
  }
  return 0;
}

