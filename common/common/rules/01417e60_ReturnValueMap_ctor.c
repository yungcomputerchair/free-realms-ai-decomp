// addr: 0x01417e60
// name: ReturnValueMap_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ReturnValueMap_ctor(undefined4 *param_1)

{
                    /* Constructs an empty ReturnValueMap, installing
                       PersistentBase/PersistentComponent/ReturnValueMap vtables and zeroing the map
                       fields. */
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = ReturnValueMap::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

