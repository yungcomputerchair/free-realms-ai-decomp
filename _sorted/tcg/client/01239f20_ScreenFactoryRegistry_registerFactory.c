// addr: 0x01239f20
// name: ScreenFactoryRegistry_registerFactory
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
ScreenFactoryRegistry_registerFactory
          (int param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
          undefined4 param_3,char param_4)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  int *local_7c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbStack_78;
  uint uStack_74;
  int local_60;
  int local_5c;
  undefined1 local_58 [4];
  int local_54;
  undefined1 local_4c [32];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Registers or updates a UI screen factory by screen-name string in the
                       registry rb-tree; inserts a new entry when absent, otherwise optionally
                       replaces the factory pointer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01652db8;
  local_c = ExceptionList;
  uStack_74 = DAT_01b839d8 ^ (uint)&stack0xffffff90;
  ExceptionList = &local_c;
  pbStack_78 = param_2;
  local_7c = &local_60;
  local_80 = 0x1239f5b;
  FUN_012384b0();
  local_54 = *(int *)(param_1 + 0x50);
  if ((local_60 == 0) || (local_60 != param_1 + 0x4c)) {
    pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x1239f75;
    FUN_00d83c2d();
  }
  if (local_5c == local_54) {
    pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 param_3;
    local_7c = (int *)0xf;
    local_80 = 0;
    local_90 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_94,param_2,0,0xffffffff);
    local_4 = 0xffffffff;
    pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 FUN_01238940(local_2c);
    local_4 = 1;
    local_7c = (int *)0x1239fda;
    FUN_012385e0();
    local_4._0_1_ = 2;
    pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_4c;
    local_7c = (int *)local_58;
    local_80 = 0x1239ff0;
    FUN_01239830();
    local_4 = CONCAT31(local_4._1_3_,1);
    pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x1239ffd;
    FUN_012380d0();
    local_4 = 0xffffffff;
    pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 0x123a00a;
    FUN_01238060();
  }
  else if (param_4 != '\0') {
    if (local_60 == 0) {
      pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x123a01e;
      FUN_00d83c2d();
    }
    if (local_5c == *(int *)(local_60 + 4)) {
      pbStack_78 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                   0x123a02c;
      FUN_00d83c2d();
    }
    *(undefined4 *)(local_5c + 0x28) = param_3;
  }
  ExceptionList = local_c;
  return;
}

