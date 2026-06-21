// addr: 0x013f4550
// name: StateMachine_dispatchPendingActionOrEvent
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_dispatchPendingActionOrEvent(void * this) */

void __fastcall StateMachine_dispatchPendingActionOrEvent(void *this)

{
  char cVar1;
  char *pcVar2;
  uint unaff_EBX;
  char *pcVar3;
  void *_Memory;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_7c [4];
  void *pvStack_78;
  void *pvStack_74;
  undefined4 uStack_68;
  uint uStack_64;
  uint uStack_60;
  void *pvStack_5c;
  void *pvStack_58;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  void *pvStack_40;
  void *pvStack_3c;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 *puStack_28;
  void *pvStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds several stored string fields from the StateMachine object and calls
                       one of two current-state virtual handlers (slots 0x8c or 0x90) depending on a
                       flag at +0xfc. Evidence is StateMachine.cpp and repeated callers from invalid
                       default StateMachineState handlers for card/action/sync inputs. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0168f3e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",499,
                 DAT_01b839d8 ^ (uint)&stack0xffffff74);
  }
  if (*(int *)((int)this + 0xfc) == 0) {
    if (*(uint *)((int)this + 0xe4) < 0x10) {
      pcVar3 = (char *)((int)this + 0xd0);
    }
    else {
      pcVar3 = *(char **)((int)this + 0xd0);
    }
    uStack_48 = 0xf;
    uStack_4c = 0;
    pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
    pcVar2 = pcVar3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_60,pcVar3,
               (int)pcVar2 - (int)(pcVar3 + 1));
    uStack_4 = 4;
    if (*(int *)((int)this + 0xc4) == 0) {
      pcVar3 = "0";
    }
    else if (*(uint *)((int)this + 200) < 0x10) {
      pcVar3 = (char *)((int)this + 0xb4);
    }
    else {
      pcVar3 = *(char **)((int)this + 0xb4);
    }
    uStack_2c = 0xf;
    uStack_30 = 0;
    pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
    pcVar2 = pcVar3;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_44,pcVar3,
               (int)pcVar2 - (int)(pcVar3 + 1));
    uStack_4._0_1_ = 5;
    if (*(uint *)((int)this + 0x74) < 0x10) {
      pcVar3 = (char *)((int)this + 0x60);
    }
    else {
      pcVar3 = *(char **)((int)this + 0x60);
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
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&puStack_28,pcVar3
               ,(int)pcVar2 - (int)(pcVar3 + 1));
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    (**(code **)(**(int **)((int)this + 0x18) + 0x8c))
              (0,&puStack_28,(int)this + 0x78,&uStack_44,&uStack_60,(int)this + 0x94);
    uStack_1c = CONCAT31(uStack_1c._1_3_,5);
    if (&DAT_0000000f < puStack_28) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_3c);
    }
    puStack_28 = (undefined1 *)0xf;
    uStack_2c = 0;
    pvStack_3c = (void *)((uint)pvStack_3c & 0xffffff00);
    uStack_1c = CONCAT31(uStack_1c._1_3_,4);
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_58);
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
    uStack_1c = 0xffffffff;
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_74);
    }
    ExceptionList = pvStack_24;
    return;
  }
  if (*(uint *)((int)this + 0x100) < 0x10) {
    pcVar3 = (char *)((int)this + 0xec);
  }
  else {
    pcVar3 = *(char **)((int)this + 0xec);
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
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&puStack_28,pcVar3,
             (int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4 = 0;
  if (*(uint *)((int)this + 0xe4) < 0x10) {
    pcVar3 = (char *)((int)this + 0xd0);
  }
  else {
    pcVar3 = *(char **)((int)this + 0xd0);
  }
  uStack_2c = 0xf;
  uStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_44,pcVar3,
             (int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4._0_1_ = 1;
  if (*(uint *)((int)this + 200) < 0x10) {
    pcVar3 = (char *)((int)this + 0xb4);
  }
  else {
    pcVar3 = *(char **)((int)this + 0xb4);
  }
  uStack_48 = 0xf;
  uStack_4c = 0;
  pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_60,pcVar3,
             (int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4._0_1_ = 2;
  if (*(uint *)((int)this + 0x74) < 0x10) {
    pcVar3 = (char *)((int)this + 0x60);
  }
  else {
    pcVar3 = *(char **)((int)this + 0x60);
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  pcVar2 = pcVar3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_7c,pcVar3,(int)pcVar2 - (int)(pcVar3 + 1));
  uStack_4 = CONCAT31(uStack_4._1_3_,3);
  _Memory = (void *)((int)this + 0x94);
  (**(code **)(**(int **)((int)this + 0x18) + 0x90))
            (0,abStack_7c,(int)this + 0x78,&uStack_60,&uStack_44,&puStack_28);
  iStack_20 = CONCAT31(iStack_20._1_3_,2);
  if (0xf < unaff_EBX) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  iStack_20 = CONCAT31(iStack_20._1_3_,1);
  if (0xf < uStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_78);
  }
  uStack_64 = 0xf;
  uStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  iStack_20 = (uint)iStack_20._1_3_ << 8;
  if (0xf < uStack_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_5c);
  }
  uStack_48 = 0xf;
  uStack_4c = 0;
  pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
  iStack_20 = 0xffffffff;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  ExceptionList = puStack_28;
  return;
}

