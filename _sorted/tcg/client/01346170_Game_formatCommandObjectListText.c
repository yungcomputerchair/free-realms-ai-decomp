// addr: 0x01346170
// name: Game_formatCommandObjectListText
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * Game_formatCommandObjectListText(void * out) */

void * __thiscall Game_formatCommandObjectListText(void *this,void *out)

{
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined4 *****pppppuVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 local_54;
  uint local_50;
  void *local_4c;
  undefined1 local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 ****local_28 [4];
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds display text for the current game's command object list and applies a
                       plural/singular substitution based on whether the generated list ends in 's'.
                       Used by CommandObjectEmitTextMessage_doCommand and
                       ActionPlayedState_actionPlayed. */
  puStack_8 = &LAB_0167cf19;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_54;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff9c;
  ExceptionList = &local_c;
  local_54 = 0;
  local_4c = out;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
  local_4 = 1;
  pbVar2 = Game_copyCommandObjectList(this,local_48);
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,pbVar2,0,0xffffffff);
  local_4._0_1_ = 1;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (local_18 == 0) {
    *(undefined4 *)((int)out + 0x18) = 0xf;
    *(undefined4 *)((int)out + 0x14) = 0;
    *(undefined1 *)((int)out + 4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_2c,0,0xffffffff);
  }
  else {
    local_50 = local_18 - 1;
    if (local_18 <= local_50) {
      FUN_00d81e1a(uVar1);
    }
    pppppuVar3 = (undefined4 *****)local_28[0];
    if (local_14 < 0x10) {
      pppppuVar3 = local_28;
    }
    if (*(char *)((int)pppppuVar3 + local_50) == 's') {
      uVar5 = 1;
      puVar4 = &DAT_0177de60;
    }
    else {
      uVar5 = 2;
      puVar4 = &DAT_01861a80;
    }
    FUN_01241650(puVar4,uVar5);
    *(undefined4 *)((int)out + 0x18) = 0xf;
    *(undefined4 *)((int)out + 0x14) = 0;
    *(undefined1 *)((int)out + 4) = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   local_2c,0,0xffffffff);
  }
  if (0xf < local_14) {
    local_4 = (uint)local_4._1_3_ << 8;
    local_54 = 1;
                    /* WARNING: Subroutine does not return */
    _free(local_28[0]);
  }
  ExceptionList = local_c;
  return out;
}

