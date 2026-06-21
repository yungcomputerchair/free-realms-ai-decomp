// addr: 0x013dcbe0
// name: FUN_013dcbe0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013dcbe0(int param_1,undefined4 param_2,char param_3,char param_4)

{
                    /* Dispatches optional callbacks based on two boolean flags: one virtual call
                       through the object at +0x10 using the field at +0xc, and one helper call with
                       the subobject at +0xdc. Class identity is not evidenced by strings/RTTI. */
  if (param_3 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x10) + 8))(param_2,*(undefined4 *)(param_1 + 0xc));
  }
  if (param_4 != '\0') {
    FUN_01435dd0(param_2,param_1 + 0xdc);
  }
  return;
}

