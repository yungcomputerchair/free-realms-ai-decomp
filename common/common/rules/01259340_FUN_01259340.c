// addr: 0x01259340
// name: FUN_01259340
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_01259340(void)

{
  int iVar1;
  int *piVar2;
  int playerId_;
  void *objectPtr;
  undefined4 uVar3;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  FUN_012e0ba0();
  piVar2 = (int *)FUN_0124d010();
  if (piVar2 != (int *)0x0) {
    iVar1 = *(int *)piVar2[3];
    playerId_ = (**(code **)(*piVar2 + 0x1c))(0,0);
    objectPtr = PlayArea_findPlayerElementById((void *)piVar2[3],playerId_);
    unknown_getField30(objectPtr);
    uVar3 = PlayElement_getId();
    uVar3 = (**(code **)(*piVar2 + 0x1c))(uVar3);
    (**(code **)(iVar1 + 0xd0))(uVar3);
  }
  return 1;
}

