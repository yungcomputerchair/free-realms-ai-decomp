// addr: 0x00476a23
// name: FUN_00476a23
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall FUN_00476a23(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_14 [4];
  HCURSOR local_10;
  undefined1 local_c [4];
  LPCSTR local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar6 = 0;
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar2 = FUN_0045bd1e(0x1c);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004765cc();
    }
    if (*(int **)(param_1 + 0x44) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x44) + 0x10))(0);
    }
    *(int *)(param_1 + 0x44) = iVar2;
    if (iVar2 != 0) goto LAB_00476a69;
LAB_00476a62:
    uVar3 = 0;
  }
  else {
LAB_00476a69:
    FUN_0046d207(local_14,&param_2);
    FUN_004648cd(*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x14),*(int *)(param_1 + 0x44) + 0x10);
    cVar1 = FUN_0045d0e0(local_c);
    if (cVar1 == '\0') {
      iVar6 = FUN_0045d5e7();
      return *(undefined4 *)(iVar6 + 4);
    }
    local_8 = (LPCSTR)FUN_0045bd90(param_2);
    local_10 = LoadCursorA(DAT_01cc2000,local_8);
    if (local_10 == (HCURSOR)0x0) {
      if (((local_8 == (LPCSTR)0x65) || (local_8 == (LPCSTR)0x66)) || (local_8 == &DAT_00000068)) {
        local_8 = &DAT_00007f00;
      }
      else if (local_8 == (LPCSTR)0x6e) {
        local_8 = &DAT_00007f84;
      }
      else if ((local_8 == (LPCSTR)0x6c) || (local_8 == (LPCSTR)0x6d)) {
        local_8 = &DAT_00007f85;
      }
      local_10 = LoadCursorA((HINSTANCE)0x0,local_8);
      if (local_10 == (HCURSOR)0x0) goto LAB_00476a62;
    }
    iVar2 = FUN_0047fe82(0x40);
    if (iVar2 != 0) {
      iVar6 = FUN_0049e15b();
    }
    piVar4 = (int *)FUN_00474d4b(&param_2);
    if ((int *)*piVar4 != (int *)0x0) {
      (**(code **)(*(int *)*piVar4 + 0x10))(0);
    }
    *piVar4 = iVar6;
    puVar5 = (undefined4 *)FUN_00474d4b(&param_2);
    (**(code **)(*(int *)*puVar5 + 0x11c))(local_10,local_8,0);
    puVar5 = (undefined4 *)FUN_00474d4b(&param_2);
    uVar3 = *puVar5;
  }
  return uVar3;
}

