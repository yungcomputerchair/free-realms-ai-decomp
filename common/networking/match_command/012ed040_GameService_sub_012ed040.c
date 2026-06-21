// addr: 0x012ed040
// name: GameService_sub_012ed040
// subsystem: common/networking/match_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 * GameService_sub_012ed040(undefined4 * param_1) */

undefined4 * __fastcall GameService_sub_012ed040(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       GameService::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016736c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Engine_FRTWGameService_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *param_1 = Engine::GameService::vftable;
  ExceptionList = local_c;
  return param_1;
}

