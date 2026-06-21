// addr: 0x01380760
// name: Archetype_ctor
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Archetype_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an Archetype by installing Persistent/Archetype vtables, running
                       Sortable_ctor, initializing an embedded container, and setting default
                       fields. Evidence: explicit Archetype::vftable assignment. */
  puStack_8 = &LAB_01682646;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  Sortable_ctor(param_1 + 1);
  local_4 = CONCAT31(local_4._1_3_,2);
  *param_1 = Archetype::vftable;
  param_1[1] = Archetype::vftable;
  FUN_013806f0(uVar1);
  param_1[3] = 0xffffffff;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 1;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 0x25) = 0;
  ExceptionList = local_c;
  return param_1;
}

