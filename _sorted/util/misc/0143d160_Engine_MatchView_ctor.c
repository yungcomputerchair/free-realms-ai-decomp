// addr: 0x0143d160
// name: Engine_MatchView_ctor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall Engine_MatchView_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs Engine::MatchView by constructing Engine_MatchViewBase and
                       installing the MatchView vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698048;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_MatchViewBase_ctor(param_1);
  *param_1 = Engine::MatchView::vftable;
  ExceptionList = local_c;
  return param_1;
}

