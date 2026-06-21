// addr: 0x012cc6b0
// name: FUN_012cc6b0
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_012cc6b0(int param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  LobbyServiceLobbyMap_lowerBound((void *)(param_1 + 4),local_8,&stack0x00000004,unaff_EDI);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  iVar3 = *(int *)(param_1 + 8);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != (void *)(param_1 + 4))) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    return *(undefined4 *)(iVar2 + 0x10);
  }
  return 0;
}

