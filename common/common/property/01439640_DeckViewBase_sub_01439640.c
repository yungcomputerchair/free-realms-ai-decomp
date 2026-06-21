// addr: 0x01439640
// name: DeckViewBase_sub_01439640
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall DeckViewBase_sub_01439640(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a DeckViewBase sub_01439640 routine. Evidence: vftable/call-shape
                       evidence in ctx. */
  puStack_8 = &LAB_016975d6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::DeckViewBase::vftable;
  local_4 = 0;
  FUN_01515b40(uVar1);
  local_4 = 0xffffffff;
  Engine_ArchetypeView_dtor(param_1 + 1);
  ExceptionList = local_c;
  return;
}

