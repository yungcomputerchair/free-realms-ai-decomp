// addr: 0x01392800
// name: CommandObjectEmitTextMessage_buildMessageText
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
CommandObjectEmitTextMessage_buildMessageText
          (int *param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  uint uVar1;
  char cVar2;
  void *this;
  undefined4 ****ppppuVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  undefined4 ***apppuStack_28 [4];
  uint uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Called by CommandObjectEmitTextMessage_doCommand; if a player element is
                       available formats command object list text, otherwise copies/fixes fallback
                       text from an object field. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01684091;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_34;
  ExceptionList = &local_c;
  local_34 = 0;
  local_30 = param_2;
  cVar2 = (**(code **)(*param_1 + 0x1e8))(DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  if ((cVar2 == '\0') ||
     (this = PlayArea_findPlayerElementById((void *)param_1[0xc],param_1[0x10]), this == (void *)0x0
     )) {
    uStack_14 = 0xf;
    uStack_18 = 0;
    apppuStack_28[0] = (undefined4 ***)((uint)apppuStack_28[0] & 0xffffff00);
    uStack_4 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_2c,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (param_1 + 0x49),0,0xffffffff);
    if (uStack_18 == 0) {
      *(undefined4 *)(param_2 + 0x18) = 0xf;
      *(undefined4 *)(param_2 + 0x14) = 0;
      param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)abStack_2c,0,0xffffffff);
    }
    else {
      uVar1 = uStack_18 - 1;
      if (uStack_18 <= uVar1) {
        FUN_00d81e1a();
      }
      ppppuVar3 = (undefined4 ****)apppuStack_28[0];
      if (uStack_14 < 0x10) {
        ppppuVar3 = apppuStack_28;
      }
      if (*(char *)((int)ppppuVar3 + uVar1) == 's') {
        uVar5 = 1;
        puVar4 = &DAT_0177de60;
      }
      else {
        uVar5 = 2;
        puVar4 = &DAT_01861a80;
      }
      FUN_01241650(puVar4,uVar5);
      *(undefined4 *)(param_2 + 0x18) = 0xf;
      *(undefined4 *)(param_2 + 0x14) = 0;
      param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                          *)abStack_2c,0,0xffffffff);
    }
    if (0xf < uStack_14) {
      uStack_4 = uStack_4 & 0xffffff00;
      local_34 = 1;
                    /* WARNING: Subroutine does not return */
      _free(apppuStack_28[0]);
    }
  }
  else {
    Game_formatCommandObjectListText(this,param_2);
  }
  ExceptionList = local_c;
  return param_2;
}

