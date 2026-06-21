// addr: 0x01487260
// name: FUN_01487260
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01487260(int param_1)

{
  int local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  puStack_8 = &LAB_016a1388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  local_14[0] = param_1;
  FUN_01486b80(local_14,param_1,**(undefined4 **)(param_1 + 4),param_1,*(undefined4 **)(param_1 + 4)
              );
                    /* WARNING: Subroutine does not return */
  _free(*(void **)(param_1 + 4));
}

