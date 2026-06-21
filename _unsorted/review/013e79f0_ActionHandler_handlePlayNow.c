// addr: 0x013e79f0
// name: ActionHandler_handlePlayNow
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __fastcall ActionHandler_handlePlayNow(int *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined1 auStack_40 [4];
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Reads an "ActionName" property and dispatches UI/action behavior; when the
                       action name equals "playNow" it invokes the object's play-now handler. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168dfb0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_40;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffb4;
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_012eb250("ActionName",&DAT_0175b400);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));
  local_4 = 0;
  iVar4 = FUN_00f942a0(0,local_18,&DAT_01855294,4);
  if (iVar4 == 0) {
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34[0] = 0;
    local_4._0_1_ = 1;
    (**(code **)(*param_1 + 0xd8))(8);
    local_34[0] = 1;
    FUN_0042c155(local_34);
    (**(code **)(*param_1 + 0xc))(&stack0xffffffbc);
    (**(code **)(*param_1 + 0x80))();
    (**(code **)(*param_1 + 0xa8))();
    local_4 = (uint)local_4._1_3_ << 8;
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_3c);
    }
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34[0] = 0;
  }
  else {
    iVar4 = FUN_00f942a0(0,local_18,"playNow",7);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x74))(uVar2);
    }
  }
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return;
}

