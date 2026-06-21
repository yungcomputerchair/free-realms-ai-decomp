// addr: 0x012ed0f0
// name: Engine_GameService_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall Engine_GameService_scalarDtor(undefined4 *param_1,byte param_2)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Scalar deleting destructor for Engine::GameService; installs vtable, runs
                       base cleanup, and frees this when requested. */
  puStack_8 = &LAB_01673728;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *param_1 = Engine::GameService::vftable;
  local_4 = 0xffffffff;
  Engine_FRTWGameService_dtor(uVar1);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  ExceptionList = local_c;
  return param_1;
}

