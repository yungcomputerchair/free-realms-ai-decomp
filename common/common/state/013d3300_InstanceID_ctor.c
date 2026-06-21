// addr: 0x013d3300
// name: InstanceID_ctor
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall InstanceID_ctor(undefined4 *param_1)

{
                    /* Constructs an InstanceID by installing PersistentBase, PersistentComponent,
                       and InstanceID vtables, then zeroing its three id fields. */
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = InstanceID::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

