// addr: 0x014395d0
// name: DeckViewBase_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall DeckViewBase_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a DeckViewBase ctor routine. Evidence: vftable/call-shape evidence
                       in ctx. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01697596;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::DeckViewBase::vftable;
  Engine_ArchetypeView_ctor(param_1 + 1);
  local_4 = 0;
  FUN_01515ae0(uVar1);
  ExceptionList = local_c;
  return param_1;
}

