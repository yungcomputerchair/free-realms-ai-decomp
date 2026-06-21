// addr: 0x005088fd
// name: FUN_005088fd
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_005088fd(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int local_c;
  int local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  param_1 = (int *)*param_1;
  FUN_004d03fd(**(undefined4 **)(*param_1 + 8),*param_1 + 4);
  cVar1 = FUN_004ce74f(&local_c);
  if (cVar1 != '\0') {
    FUN_004d03fd(*(undefined4 *)(*param_1 + 8),*param_1 + 4);
    param_1[1] = local_c;
    param_1[2] = local_8;
  }
  FUN_004d03fd(*(undefined4 *)(*param_1 + 8),*param_1 + 4);
  cVar1 = FUN_004ce74f(&local_c);
  if (cVar1 != '\0') {
    return 0;
  }
  FUN_004e07d7();
  if (param_1[3] != 0) {
    if ((char)param_1[4] == '\0') {
      while( true ) {
        FUN_004decef();
        iVar3 = FUN_004d9111();
        if (iVar3 == 0) break;
        iVar3 = param_1[3];
        uVar2 = FUN_004da36f();
        FUN_004cd09c(uVar2);
        uVar2 = extraout_ECX_00;
        FUN_004cd09c(iVar3);
        cVar1 = FUN_00501918(uVar2);
        if (cVar1 != '\0') {
          return 1;
        }
        FUN_004d03fd(**(undefined4 **)(*param_1 + 8),*param_1 + 4);
        cVar1 = FUN_004ce74f(&local_c);
        if (cVar1 != '\0') goto LAB_005089ed;
        FUN_004e07d7();
      }
    }
    else {
      while( true ) {
        FUN_004decef();
        iVar3 = param_1[3];
        uVar2 = FUN_004da36f();
        FUN_004cd09c(uVar2);
        uVar2 = extraout_ECX;
        FUN_004cd09c(iVar3);
        cVar1 = FUN_00501918(uVar2);
        if (cVar1 != '\0') break;
        FUN_004d03fd(**(undefined4 **)(*param_1 + 8),*param_1 + 4);
        cVar1 = FUN_004ce74f(&local_c);
        if (cVar1 != '\0') {
LAB_005089ed:
          FUN_004d03fd(*(undefined4 *)(*param_1 + 8),*param_1 + 4);
          param_1[1] = local_c;
          param_1[2] = local_8;
          return 0;
        }
        FUN_004e07d7();
      }
    }
  }
  return 1;
}

