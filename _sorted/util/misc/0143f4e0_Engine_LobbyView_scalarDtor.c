// addr: 0x0143f4e0
// name: Engine_LobbyView_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall Engine_LobbyView_scalarDtor(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::LobbyView; installs LobbyView vtable,
                       runs LobbyViewBase cleanup, and frees this when requested. */
  puStack_8 = &LAB_01698558;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::LobbyView::vftable;
  local_4 = 0xffffffff;
  Engine_LobbyViewBase_init(uVar1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

