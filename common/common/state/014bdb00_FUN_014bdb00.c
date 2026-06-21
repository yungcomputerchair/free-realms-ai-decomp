// addr: 0x014bdb00
// name: FUN_014bdb00
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014bdb00(int param_1)

{
  int extraout_EAX;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* Executes a display/action-manager state change based on mode at this+8: modes
                       1 and 2 call DisplayActionManager_ensureSingleton plus FUN_012d3690 with
                       different flags, while modes 3/4 set a manager byte flag at +0xbc. Owning
                       command class is unknown. */
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 1) {
    uVar2 = 0;
    DisplayActionManager_ensureSingleton();
    FUN_012d3690(iVar1,uVar2);
    return 1;
  }
  if (iVar1 == 2) {
    uVar3 = 0;
    uVar2 = 0;
    DisplayActionManager_ensureSingleton();
    FUN_012d3690(uVar2,uVar3);
    return 1;
  }
  if ((iVar1 == 3) || (iVar1 == 4)) {
    DisplayActionManager_ensureSingleton();
    *(undefined1 *)(extraout_EAX + 0xbc) = 1;
  }
  return 1;
}

