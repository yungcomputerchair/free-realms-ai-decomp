// addr: 0x0143d1c0
// name: Engine_MatchView_dtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall Engine_MatchView_dtor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor/cleanup for Engine::MatchView; installs MatchView vtable and runs
                       Engine_MatchViewBase_dtor. */
  puStack_8 = &LAB_01698078;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = Engine::MatchView::vftable;
  local_4 = 0xffffffff;
  Engine_MatchViewBase_dtor(param_1);
  ExceptionList = local_c;
  return;
}

