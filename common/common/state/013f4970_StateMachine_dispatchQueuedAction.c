// addr: 0x013f4970
// name: StateMachine_dispatchQueuedAction
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_dispatchQueuedAction(void * this) */

void __fastcall StateMachine_dispatchQueuedAction(void *this)

{
  char cVar1;
  void *_Memory;
  char *pcVar2;
  char *pcVar3;
  uint uStack_60;
  undefined1 uStack_5c;
  void *pvStack_58;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined1 uStack_40;
  void *pvStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_24;
  int iStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Copies three string/field groups from later StateMachine offsets and forwards
                       them to the current state's vtable slot 0x8c. Evidence is StateMachine.cpp
                       line 0x206 and mCurrentState assertion. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168f428;
  local_c = ExceptionList;
  _Memory = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff90);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x206);
  }
  if (*(uint *)((int)this + 0x1b8) < 0x10) {
    pcVar3 = (char *)((int)this + 0x1a4);
  }
  else {
    pcVar3 = *(char **)((int)this + 0x1a4);
  }
  uStack_10 = 0xf;
  uStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_28,pcVar3,
             (int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  if (*(uint *)((int)this + 0x19c) < 0x10) {
    pcVar3 = (char *)((int)this + 0x188);
  }
  else {
    pcVar3 = *(char **)((int)this + 0x188);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  uStack_40 = 0;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_44,pcVar3,
             (int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4._0_1_ = 1;
  if (*(uint *)((int)this + 0x148) < 0x10) {
    pcVar3 = (char *)((int)this + 0x134);
  }
  else {
    pcVar3 = *(char **)((int)this + 0x134);
  }
  uStack_48 = 0xf;
  uStack_4c = 0;
  uStack_5c = 0;
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_60,pcVar3,
             (int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  (**(code **)(**(int **)((int)this + 0x18) + 0x8c))
            (0,&uStack_60,(int)this + 0x14c,&uStack_44,&uStack_28,(int)this + 0x168);
  iStack_1c = CONCAT31(iStack_1c._1_3_,1);
  if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  uStack_60 = 0xf;
  iStack_1c = (uint)iStack_1c._1_3_ << 8;
  if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_58);
  }
  uStack_44 = 0xf;
  uStack_48 = 0;
  pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
  iStack_1c = 0xffffffff;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_3c);
  }
  ExceptionList = pvStack_24;
  return;
}

