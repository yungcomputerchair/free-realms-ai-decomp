// addr: 0x0143d210
// name: Engine_MatchView_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall Engine_MatchView_scalarDtor(undefined4 *param_1,byte param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::MatchView; installs vtable, runs
                       Engine_MatchViewBase_dtor, and frees this when requested. */
  puStack_8 = &LAB_016980a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = Engine::MatchView::vftable;
  local_4 = 0xffffffff;
  Engine_MatchViewBase_dtor(param_1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

