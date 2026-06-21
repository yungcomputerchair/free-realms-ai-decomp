// addr: 0x013fc320
// name: FUN_013fc320
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_013fc320(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 local_c;
  undefined1 local_8 [8];
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_c = Game_getEventEmissionDepth();
  piVar3 = (int *)FUN_013f9d80(local_8,&local_c);
  iVar1 = piVar3[1];
  iVar2 = *(int *)(param_1 + 0x3c);
  if ((*piVar3 == 0) || (*piVar3 != param_1 + 0x38)) {
    FUN_00d83c2d();
  }
  if (iVar1 == iVar2) {
    return 0;
  }
  local_c = Game_getEventEmissionDepth();
  puVar4 = (undefined4 *)FUN_013fbc20(&local_c);
  return *puVar4;
}

