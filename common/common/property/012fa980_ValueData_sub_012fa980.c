// addr: 0x012fa980
// name: ValueData_sub_012fa980
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall ValueData_sub_012fa980(undefined4 *param_1,undefined1 param_2)

{
                    /* Identifies a ValueData sub_012fa980 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  param_1[1] = 1;
  param_1[2] = 0;
  *param_1 = ValueData::vftable;
  *(undefined1 *)(param_1 + 2) = param_2;
  return;
}

