// addr: 0x008a9010
// name: FUN_008a9010
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_008a9010(void *param_1,undefined4 param_2)

{
  char cVar1;
  void *pvVar2;
  undefined4 extraout_EAX;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0157e83b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = *(void **)((int)param_1 + 0x668);
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_00a4dc90(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  pvVar2 = Mem_Alloc(0x38);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    OptionsManager_registerDataSources(pvVar2,param_1);
    uVar3 = extraout_EAX;
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x668) = uVar3;
  cVar1 = FUN_00a4e450(param_2);
  if (cVar1 == '\0') {
    Log_Error(0,"Failed to reload options manager [prefix=%s].",param_2);
  }
  ExceptionList = local_c;
  return;
}

