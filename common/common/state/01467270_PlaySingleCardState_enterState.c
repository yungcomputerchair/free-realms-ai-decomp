// addr: 0x01467270
// name: PlaySingleCardState_enterState
// subsystem: common/common/state
// source (binary assert): common/common/state/PlaySingleCardState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint PlaySingleCardState_enterState(void * this) */

uint __fastcall PlaySingleCardState_enterState(void *this)

{
  char cVar1;
  void *_Memory;
  int iVar2;
  void *this_00;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined1 uStack_94;
  void *pvStack_90;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined1 uStack_78;
  void *pvStack_74;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [28];
  undefined1 auStack_28 [4];
  void *pvStack_24;
  int iStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Enter-state handler that consumes the return value map, requiring player and
                       card-played returns, then displays the single-card prompt/dialog and advances
                       state. Evidence is PlaySingleCardState.cpp assertions for
                       kPlayerReturn/kCardPlayedReturn and the base enterState-style vtable call at
                       entry. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169df4b;
  local_c = ExceptionList;
  _Memory = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff58);
  ExceptionList = &local_c;
  (**(code **)(*(int *)this + 0x4c))();
  iVar2 = StateMachine_popReturnValueMap();
  if (iVar2 == 0) {
    FUN_012f5a60("returnValueMap","..\\common\\common\\state\\PlaySingleCardState.cpp",0x158);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\PlaySingleCardState.cpp",0x15a);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(3);
  if (cVar1 == '\0') {
    FUN_012f5a60("returnValueMap->hasIntegerKey(kCardPlayedReturn)",
                 "..\\common\\common\\state\\PlaySingleCardState.cpp",0x15b);
  }
  uStack_9c = ReturnValueMap_getInteger(3);
  FUN_0042c155(&uStack_9c);
  this_00 = (void *)StateMachineState_getGame();
  iVar2 = Game_getField_1c8(this_00);
  uVar4 = StateMachineState_getGame(iVar2);
  IntToBoolMap_getValue((void *)uVar4,(int)((ulonglong)uVar4 >> 0x20));
  MessageText_ctor();
  uStack_4 = 0;
  MessageText_ctor();
  uStack_4._0_1_ = 1;
  iVar2 = StateMachineState_getGame();
  set_pair_fields_4_8(auStack_44,0x28bb,*(uint *)(iVar2 + 0x20));
  uStack_64 = 0xf;
  uStack_68 = 0;
  uStack_78 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_7c,"",0);
  uStack_4._0_1_ = 2;
  uStack_80 = 0xf;
  uStack_84 = 0;
  uStack_94 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_98,"",0);
  uStack_4._0_1_ = 3;
  uStack_48 = 0xf;
  uStack_4c = 0;
  uStack_5c = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_60,"",0);
  uStack_4 = CONCAT31(uStack_4._1_3_,4);
  (**(code **)(*(int *)this + 0x8c))
            (*(undefined4 *)((int)this + 0xe0),&uStack_60,auStack_44,&uStack_98,&uStack_7c,
             auStack_28);
  iStack_1c = CONCAT31(iStack_1c._1_3_,3);
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_74);
  }
  uStack_60 = 0xf;
  uStack_64 = 0;
  pvStack_74 = (void *)((uint)pvStack_74 & 0xffffff00);
  iStack_1c = CONCAT31(iStack_1c._1_3_,2);
  if (0xf < uStack_98) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  uStack_98 = 0xf;
  uStack_9c = 0;
  iStack_1c._0_1_ = 1;
  if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_90);
  }
  uStack_7c = 0xf;
  uStack_80 = 0;
  pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
  piVar3 = (int *)StateMachineState_getGame();
  (**(code **)(*piVar3 + 0x17c))();
  iStack_1c = (uint)iStack_1c._1_3_ << 8;
  MessageText_dtor();
  iStack_1c = 0xffffffff;
  MessageText_dtor();
  ExceptionList = pvStack_24;
  return 2;
}

