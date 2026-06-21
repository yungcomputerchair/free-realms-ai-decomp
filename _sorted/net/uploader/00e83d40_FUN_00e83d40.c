// addr: 0x00e83d40
// name: FUN_00e83d40
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * FUN_00e83d40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01621b6b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00e83cc0(param_1,param_2);
  }
  local_4 = 0xffffffff;
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 8))(uVar1);
    if (iVar4 == 0) {
      ExceptionList = local_c;
      return piVar3;
    }
    (**(code **)*piVar3)(1);
  }
  ExceptionList = local_c;
  return (int *)0x0;
}

