// addr: 0x0052a85c
// name: FUN_0052a85c
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0052a85c(int param_1,int param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *pvVar5;
  int *piVar6;
  uint uVar7;
  uint local_8;
  
                    /* Builds/copies a subset of span/run records from one object into another,
                       cloning per-record objects and optionally adjusting first/last bounds. No
                       exact class evidence. */
  iVar1 = param_2;
  if (param_2 != 0) {
    if (((*(int *)(param_1 + 0x1c) == 0) || (param_3 == (int *)0x0)) ||
       ((*param_3 <= **(int **)(param_1 + 0x20) &&
        ((*(int **)(param_1 + 0x20))[*(int *)(param_1 + 0x1c) * 3 + -3] <= param_3[1])))) {
      FUN_0052a1c0(param_1);
    }
    else {
      iVar2 = FUN_004f66e6(*param_3,0,*(undefined4 *)(param_1 + 0x1c));
      iVar3 = FUN_004f66e6(param_3[1],iVar2,*(undefined4 *)(param_1 + 0x1c));
      (**(code **)(*(int *)(param_2 + 0x14) + 0x80))();
      iVar3 = (iVar3 - iVar2) + 1;
      *(int *)(param_2 + 0x18) = iVar3;
      *(int *)(param_2 + 0x1c) = iVar3;
      uVar4 = FUN_004d9207(iVar3 * 0xc);
      iVar3 = 0;
      *(undefined4 *)(param_2 + 0x20) = uVar4;
      local_8 = 0;
      if (*(int *)(param_2 + 0x1c) != 0) {
        param_2 = iVar2 * 0xc;
        do {
          *(undefined4 *)(iVar3 + *(int *)(iVar1 + 0x20)) =
               *(undefined4 *)(param_2 + *(int *)(param_1 + 0x20));
          pvVar5 = Mem_Alloc(0x10);
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00519ca2(*(undefined4 *)(*(int *)(param_1 + 0x20) + 4 + param_2));
          }
          *(undefined4 *)(iVar3 + 4 + *(int *)(iVar1 + 0x20)) = uVar4;
          pvVar5 = Mem_Alloc(0x10);
          if (pvVar5 == (void *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0051a57b(*(undefined4 *)(*(int *)(param_1 + 0x20) + 8 + param_2));
          }
          local_8 = local_8 + 1;
          param_2 = param_2 + 0xc;
          *(undefined4 *)(iVar3 + 8 + *(int *)(iVar1 + 0x20)) = uVar4;
          iVar3 = iVar3 + 0xc;
        } while (local_8 < *(uint *)(iVar1 + 0x1c));
      }
      if (((param_4 != '\0') && (**(undefined4 **)(iVar1 + 0x20) = 0, 0 < *param_3)) &&
         (uVar7 = 1, 1 < *(uint *)(iVar1 + 0x1c))) {
        iVar3 = 0xc;
        do {
          piVar6 = (int *)(*(int *)(iVar1 + 0x20) + iVar3);
          *piVar6 = *piVar6 - *param_3;
          uVar7 = uVar7 + 1;
          iVar3 = iVar3 + 0xc;
        } while (uVar7 < *(uint *)(iVar1 + 0x1c));
      }
    }
  }
  return;
}

