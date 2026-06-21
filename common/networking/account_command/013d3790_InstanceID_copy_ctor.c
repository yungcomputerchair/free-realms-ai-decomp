// addr: 0x013d3790
// name: InstanceID_copy_ctor
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall InstanceID_copy_ctor(undefined4 *param_1,int param_2)

{
                    /* Copy-constructs an InstanceID by installing
                       PersistentBase/PersistentComponent/InstanceID vtables and copying the three
                       data words from the source. Evidence is the explicit InstanceID vftable
                       assignment. */
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = InstanceID::vftable;
  param_1[1] = *(undefined4 *)(param_2 + 4);
  param_1[2] = *(undefined4 *)(param_2 + 8);
  param_1[3] = *(undefined4 *)(param_2 + 0xc);
  return;
}

