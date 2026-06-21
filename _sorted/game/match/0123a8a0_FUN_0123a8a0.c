// addr: 0x0123a8a0
// name: FUN_0123a8a0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
FUN_0123a8a0(int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  uint uVar2;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Looks up a provider object by integer key and asks it to write a string into
                       the output; if no provider is found, it copies the object's default string at
                       +8. Evidence is the map lower-bound and virtual string-producing call on
                       node+0x10. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01652fd2;
  local_10 = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0123aaa0(&local_18,&stack0x00000008);
  iVar1 = *(int *)(param_1 + 0x28);
  if (param_1 == -0x24) {
    FUN_00d83c2d(uVar2);
  }
  if ((local_18 == 0) || (local_18 != param_1 + 0x24)) {
    FUN_00d83c2d(uVar2);
  }
  if (local_14 == iVar1) {
    FUN_0041ba81(0,0);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(param_1 + 8),0,DAT_018c8600);
  }
  else {
    if (local_18 == 0) {
      FUN_00d83c2d(uVar2);
    }
    if (local_14 == *(int *)(local_18 + 4)) {
      FUN_00d83c2d(uVar2);
    }
    (**(code **)**(undefined4 **)(local_14 + 0x10))(param_2);
  }
  ExceptionList = local_10;
  return param_2;
}

