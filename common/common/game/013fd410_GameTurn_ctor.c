// addr: 0x013fd410
// name: GameTurn_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __fastcall GameTurn_ctor(undefined4 *param_1)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameTurn object: installs
                       PersistentBase/PersistentComponent/GameTurn vtables, initializes
                       vectors/fields/flags, and sets the default wait message. Evidence:
                       GameTurn::vftable and string 'Please wait while #actor# completes the
                       action.'. */
  puStack_8 = &LAB_016900e0;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = PersistentBase::vftable;
  *param_1 = PersistentComponent::vftable;
  local_4 = 1;
  *param_1 = GameTurn::vftable;
  GameTurn_ctor(uVar1);
  local_4._0_1_ = 2;
  GameTurn_ctor();
  local_4._0_1_ = 3;
  FUN_013fc430();
  local_4._0_1_ = 4;
  FUN_013fd2a0();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x23),
             "Please wait while #actor# completes the action.",0x2f);
  ExceptionList = local_c;
  return param_1;
}

