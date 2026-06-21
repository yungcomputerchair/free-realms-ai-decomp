// addr: 0x0131c8a0
// name: GameServiceBase_ctor
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameServiceBase_ctor(undefined4 * param_1) */

undefined4 * __fastcall GameServiceBase_ctor(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs/initializes the object. Evidence: GameServiceBase::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167862e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01230d10(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  local_4 = 0;
  *param_1 = Engine::GameServiceBase::vftable;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  FUN_0131c830();
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  ExceptionList = local_c;
  return param_1;
}

