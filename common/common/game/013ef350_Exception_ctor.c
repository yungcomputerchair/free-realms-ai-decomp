// addr: 0x013ef350
// name: Exception_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Exception_ctor(undefined4 *param_1)

{
                    /* Constructs an Exception object: initializes
                       PersistentBase/PersistentComponent/Exception vftables, three small strings,
                       line/player fields, and a boolean flag. */
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  *param_1 = Exception::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0x16] = 0xf;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x17] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}

