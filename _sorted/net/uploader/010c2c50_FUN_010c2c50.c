// addr: 0x010c2c50
// name: FUN_010c2c50
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_010c2c50(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int *unaff_EDI;
  int *local_4;
  
  local_4 = param_1;
                    /* Reference/register helper for an object resolved via FUN_007dd700; exact
                       owner/type unclear. */
  iVar2 = FUN_00769c30();
  uVar1 = param_2;
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_007dd700(param_2);
    if (piVar3 != (int *)0x0) {
      param_2 = uVar1;
      local_4 = piVar3;
      pvVar4 = FUN_010c1830(param_1 + 0x10e,&param_2,unaff_EDI);
      if (pvVar4 == (void *)0x0) {
        FUN_010c2950(&param_2,&local_4);
        iVar2 = piVar3[2];
        piVar3[2] = iVar2 + 1;
        if (iVar2 == 0) {
          (**(code **)(*piVar3 + 0x24))();
        }
      }
    }
  }
  return;
}

