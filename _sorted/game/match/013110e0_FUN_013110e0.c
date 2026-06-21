// addr: 0x013110e0
// name: FUN_013110e0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __fastcall FUN_013110e0(int param_1)

{
  int iVar1;
  int local_8;
  int local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  FUN_01310e30(&local_8,&stack0x00000004);
  iVar1 = *(int *)(param_1 + 8);
  if ((local_8 == 0) || (local_8 != param_1 + 4)) {
    FUN_00d83c2d();
  }
  if (local_4 == iVar1) {
    return false;
  }
  if (local_8 == 0) {
    FUN_00d83c2d();
  }
  if (local_4 == *(int *)(local_8 + 4)) {
    FUN_00d83c2d();
  }
  return *(int *)(local_4 + 0x10) != 0;
}

