// addr: 0x013dbb60
// name: FUN_013dbb60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_013dbb60(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
            undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Generic container/game/deserializer helper with insufficient class evidence;
                       code performs tree/vector manipulation, value serialization, or broad game
                       utility work rather than a clearly named state method. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c5c9;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  FUN_00f95b90(&local_14,param_3);
  iVar1 = *(int *)(param_1 + 0xc);
  if ((local_14 == 0) || (local_14 != param_1 + 8)) {
    FUN_00d83c2d(uVar2);
  }
  if (local_10 == iVar1) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,"",0);
  }
  else {
    if (local_14 == 0) {
      FUN_00d83c2d(uVar2);
    }
    if (local_10 == *(int *)(local_14 + 4)) {
      FUN_00d83c2d(uVar2);
    }
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(local_10 + 0x28),0,0xffffffff);
  }
  ExceptionList = local_c;
  return param_2;
}

