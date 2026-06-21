// addr: 0x01401ed0
// name: MessageText_dtor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall MessageText_dtor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destroys a MessageText object, destroying its internal vector/string storage
                       and restoring base PersistentComponent/PersistentBase vtables. */
  puStack_8 = &LAB_01690c1b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = MessageText::vftable;
  local_4 = 0;
  FUN_012ce9d0(uVar1);
  *param_1 = PersistentComponent::vftable;
  *param_1 = PersistentBase::vftable;
  ExceptionList = local_c;
  return;
}

