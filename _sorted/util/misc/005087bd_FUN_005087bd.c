// addr: 0x005087bd
// name: FUN_005087bd
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_005087bd(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined1 local_c [8];
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  param_1 = (int *)*param_1;
  FUN_004d03fd(*(undefined4 *)(*param_1 + 8),*param_1 + 4);
  cVar1 = FUN_004ce74f(local_c);
  if (cVar1 == '\0') {
    FUN_004e0838();
  }
  if (param_1[3] != 0) {
    iVar2 = *param_1 + 4;
    uVar3 = *(undefined4 *)(*param_1 + 8);
    if ((char)param_1[4] == '\0') {
      while( true ) {
        FUN_004d03fd(uVar3,iVar2);
        cVar1 = FUN_004ce74f(local_c);
        if (cVar1 != '\0') break;
        FUN_004decef();
        iVar2 = FUN_004d9111();
        if (iVar2 == 0) break;
        iVar2 = param_1[3];
        uVar3 = FUN_004da36f();
        FUN_004cd09c(uVar3);
        uVar3 = extraout_ECX_00;
        FUN_004cd09c(iVar2);
        cVar1 = FUN_00501918(uVar3);
        if (cVar1 != '\0') break;
        FUN_004e0838();
        iVar2 = *param_1 + 4;
        uVar3 = *(undefined4 *)(*param_1 + 8);
      }
    }
    else {
      while( true ) {
        FUN_004d03fd(uVar3,iVar2);
        cVar1 = FUN_004ce74f(local_c);
        if (cVar1 != '\0') break;
        FUN_004decef();
        iVar2 = param_1[3];
        uVar3 = FUN_004da36f();
        FUN_004cd09c(uVar3);
        uVar3 = extraout_ECX;
        FUN_004cd09c(iVar2);
        cVar1 = FUN_00501918(uVar3);
        if (cVar1 != '\0') break;
        FUN_004e0838();
        iVar2 = *param_1 + 4;
        uVar3 = *(undefined4 *)(*param_1 + 8);
      }
    }
  }
  FUN_004d03fd(*(undefined4 *)(*param_1 + 8),*param_1 + 4);
  cVar1 = FUN_004ce74f(local_c);
  return cVar1 == '\0';
}

