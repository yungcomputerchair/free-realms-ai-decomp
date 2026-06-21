// addr: 0x014bc130
// name: FUN_014bc130
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_014bc130(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
                    /* Applies four stored parameters at offsets +8..+0x14 to
                       DisplayActionManager_ensureSingleton and then FUN_012d3af0, returning
                       success. Likely a display/action command execution method, but the owning
                       class is not identified. */
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = *(undefined4 *)(param_1 + 8);
  DisplayActionManager_ensureSingleton();
  DisplayActionManager_scheduleTimedAction(uVar1,uVar2,uVar3,uVar4);
  return 1;
}

