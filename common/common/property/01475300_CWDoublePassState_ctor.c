// addr: 0x01475300
// name: CWDoublePassState_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CWDoublePassState_ctor(undefined4 *param_1,undefined4 param_2)

{
  int *key;
  void *pvVar1;
  bool *pbVar2;
  uint uVar3;
  void *local_18;
  void *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CWDoublePassState, initializes CancellableStateMachineState base,
                       assigns DoublePassState name, and sets player fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f69c;
  local_c = ExceptionList;
  key = (int *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  CancellableStateMachineState_ctorWithMachine(param_2);
  local_4 = 0;
  *param_1 = DoublePassState::vftable;
  FUN_0129d6c0();
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 7),
             "DoublePassState",0xf);
  pvVar1 = (void *)StateMachineState_getGame();
  pvVar1 = Game_getZoneCollection(pvVar1);
  FUN_0126a940(pvVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  pvVar1 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (local_14 < local_18) {
      FUN_00d83c2d();
    }
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (pvVar1 == local_14) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= pvVar1) {
      FUN_00d83c2d();
    }
    param_2 = GamePlayer_getPlayerId();
    pbVar2 = IntToBoolMap_getOrInsert(param_1 + 0x3e,&param_2,key);
    *pbVar2 = false;
    if (local_14 <= pvVar1) {
      FUN_00d83c2d();
    }
    pvVar1 = (void *)((int)pvVar1 + 4);
  }
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  pvVar1 = (void *)StateMachineState_getCurrentTurn();
  uVar3 = get_field_8(pvVar1);
  param_1[0x41] = uVar3;
  param_1[0x4a] = 0;
  param_1[0x42] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return param_1;
}

