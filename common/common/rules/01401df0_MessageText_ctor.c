// addr: 0x01401df0
// name: MessageText_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall MessageText_ctor(undefined4 *param_1)

{
                    /* Constructs a MessageText object by installing
                       PersistentBase/PersistentComponent/MessageText vtables and clearing its
                       fields. */
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = MessageText::vftable;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0xffffffff;
  param_1[1] = 0;
  return;
}

